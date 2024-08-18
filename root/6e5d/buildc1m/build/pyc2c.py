# the last python dependency:
# single file packed pyltr2+pyc2c

from pathlib import Path
import sys, os

def escape(ltr):
	if len(ltr) == 0:
		return '""'
	x = []
	q = False
	for ch in ltr:
		if ch < 32 or ch >= 127:
			q = True
			x.append(f"\\x{ch:02x}")
		elif ch in b"\\\"# []":
			q = True
			x.append(f"\\{chr(ch)}")
		else:
			if ch in b"[] ":
				q = True
			x.append(chr(ch))
	if q:
		return '"' + "".join(x) + '"'
	else:
		return "".join(x)

# the basic pretty print algorithm
# for each list, while
# * string element,
# * it is the last element (for unary ops)
# * it is the second last element and last is str (for binary ops)
# put everything in same line
# after first exception
# all elements will be placed in individual lines
def pretty2(ltr, indent, toks):
	if not isinstance(ltr, list) and len(ltr) == 0:
		ltr = bytes()
	elif isinstance(ltr, bytearray):
		ltr = bytes(ltr)
	elif isinstance(ltr, str):
		ltr = ltr.encode()
	if isinstance(ltr, bytes):
		toks.append(escape(ltr))
		return
	assert isinstance(ltr, list)
	result = []
	inline = True
	toks.append("[")
	l = len(ltr)
	for idx, ll in enumerate(ltr):
		if inline:
			# special
			test = False
			if not isinstance(ll, list):
				test = True
			elif idx == l - 1:
				test = True
			elif idx == len(ltr) - 2 and\
				not isinstance(ltr[-1], list):
				test = True
			if test:
				if idx > 0:
					toks.append(" ")
				pretty2(ll, indent, toks)
				continue
			inline = False
			indent += 1
		toks.append("\n" + "\t" * indent)
		pretty2(ll, indent, toks)
	if not inline:
		indent -= 1
		toks.append("\n" + "\t" * indent)
	toks.append("]")

def pretty(ltr):
	toks = []
	pretty2(ltr, 0, toks)
	return "".join(toks)

def to_utf(ltr):
	if isinstance(ltr, bytearray):
		return ltr.decode()
	assert isinstance(ltr, list)
	return [to_utf(ll) for ll in ltr]

def to_bytes(ltr):
	if isinstance(ltr, bytearray):
		return bytes(ltr)
	assert isinstance(ltr, list)
	return [to_bytes(ll) for ll in ltr]

def parse(s, strwrap = None):
	assert isinstance(s, str)
	s = "[" + s + "]"
	stack = []
	state = 0
	while s:
		ch = s[0]
		if state == 1:
			if ch == "\\":
				state = 2
			elif ch == '"':
				if strwrap != None:
					assert isinstance(strwrap, str)
					stack[-1][-1] = [
						bytearray(strwrap.encode()),
						stack[-1][-1],
					]
				state = 0
			elif ch != "\n": # ws is already stripped
				stack[-1][-1] += ch.encode()
		elif state == 2:
			if ch == "x":
				stack[-1][-1].append(int(f"0x{s[1:3]}", 16))
				s = s[2:]
			elif ch.isalnum():
				raise Exception("only x escape:", s[:40])
			else:
				# all punctuations
				# though only quote and bs are necessary
				stack[-1][-1] += ch.encode()
			state = 1
		elif ch == '"' and state == 0:
			stack[-1].append(bytearray())
			state = 1
		elif ch == "[":
			stack.append([])
			state = 0
		elif ch == "]":
			last = stack.pop()
			if len(stack) == 0:
				return last
			stack[-1].append(last)
			state = 0
		elif state == 0:
			if ch not in " \t\n":
				stack[-1].append(bytearray())
				stack[-1][-1] += ch.encode()
				state = 3
		elif ch in " \t\n":
			state = 0
		else:
			stack[-1][-1] += ch.encode()
		s = s[1:]
	print(stack)
	raise Exception("not closed", len(stack))

def striphash(s):
	lines = []
	for line in s.split("\n"):
		line = line.strip()
		if not line:
			continue
		if line[0] == "#":
			continue
		lines.append(line)
	return "\n".join(lines)

def striphash2(l):
	if isinstance(l, str):
		return l
	assert isinstance(l, list)
	if l and l[0] == "#":
		return None
	result = []
	for ll in l:
		ret = striphash2(ll)
		if ret != None:
			result.append(ret)
	return result

# strip + parse + to_utf8
def parse_code(s, strwrap = None):
	s = striphash(s)
	s = parse(s, strwrap = strwrap)
	return to_utf(s)

def parse_code2(s, strwrap = None):
	s = parse(s, strwrap = strwrap)
	s = to_utf(s)
	return striphash2(s)

# no utf conversion
def parse_bytes(s):
	s = striphash(s)
	s = parse(s)
	return to_bytes(s)

def c2r(name):
	return f"_6e5d_c2r_{name}"
def c2prim(name):
	return f"_6e5d_c2prim_{name}"
PO = ["Ptr", c2r("Object")]
binop = {"+", "-", "*", "&", "|", "^"}
bi = {
	"+": c2prim("add"),
	"-": c2prim("sub"),
	"*": c2prim("mul"),
	"/": c2prim("div"),
	"%": c2prim("mod"),
	">=": c2prim("ge"),
	">": c2prim("gt"),
	"<=": c2prim("le"),
	"<": c2prim("lt"),
	"!=": c2prim("ne"),
	"==": c2prim("eq"),
	"-n": c2prim("inv"),
	"!": c2prim("neg"),
	"~": c2prim("not"),
	"&": c2prim("and"),
	"|": c2prim("or"),
	"^": c2prim("xor"),
	">>": c2prim("shr"),
	"<<": c2prim("shl"),
	"resize": c2prim("resize"),
	"len": c2prim("length"),
	"rc": c2prim("rc"),
	"@": c2prim("getItem"),
	"->list": c2prim("asList"),
	"->bytes": c2prim("asBytes"),
	"->u64": c2prim("asU64"),
	"->i64": c2prim("asI64"),
	"->f32": c2prim("asF32"),
}
fns = dict()
decref = c2r("decref")
deconly = c2r("deconly")
incref = c2r("incref")
check = c2r("check")

fromU64 = c2prim("fromU64")
fromI64 = c2prim("fromI64")
fromF32 = c2prim("fromF32")
fromBuf = c2prim("fromBuf")
fromBool = c2prim("fromBool")
toBool = c2prim("toBool")
setItem = c2prim("setItem")
resize = c2prim("resize")
listSet = c2prim("listSet")
listInit = c2prim("listInit")
mapInit = c2prim("mapInit")
printobj = c2prim("printobj")
argconv = [
	["auto", "args", PO, [listInit]],
	[incref, "args"],
	[c2prim("resizeList"), "args", ["cast", "size_t", "argc"]],
	["for", ["auto", "idx", "size_t", "0"],
		["<", "idx", "argc"],
		["+=", "idx", "1"],
		[listSet, "args", "idx", [fromBuf,
			["@", "argv", "idx"],
			["strlen", ["@", "argv", "idx"]]
		]]
	],
]

def cleanret(v):
	rets = []
	for vv in reversed(v):
		if isinstance(vv, bool) or vv.startswith("_var"):
			continue
		rets.append([decref, vv])
	return rets

def cleanloop(v):
	rets = []
	for vv in reversed(v):
		if vv is True:
			break
		if vv is False or vv.startswith("_var"):
			continue
		rets.append([decref, vv])
	return rets

def popscope(v):
	rets = []
	while True:
		vv = v.pop()
		if isinstance(vv, bool):
			break
		if vv.startswith("_var"):
			continue
		rets.append([decref, vv])
	return rets

def genvar(v):
	for i in range(99999):
		vv = f"_var{i}"
		if vv not in v:
			v.append(vv)
			return vv
	raise Exception(i)

def expr(v, l):
	if isinstance(l, str):
		if l == "nil":
			return "NULL", []
		if l == "true":
			return [fromU64, "1"], []
		if l == "false":
			return [fromU64, "0"], []
		if l[0] in "0123456789+-." and "." in l:
			return [fromF32, l], []
		if l[0].isdigit():
			return [fromU64, l], []
		if l[0] in "+-":
			return [fromI64, l], []
		if l[0] in "'":
			# return [fromBuf, ["str", l[1:]], str(len(l) - 1)], []
			return [fromBuf, l, str(len(l) - 1)], []
		if l[0] in "`":
			# return [fromU64, str(ord(l[1]))], []
			return [fromU64, l], []
		if l in v:
			return l, []
		if l in bi:
			l = bi[l]
		return [c2prim("fromFn"),
			["cast", ["Ptr", ["Arg", "void", "void"]] , l]], []
	assert isinstance(l[0], str)
	if l[0][-1] == "?":
		ty = l[0][:-1]
		return expr(v, [c2prim("is" + ty.capitalize()), l[1]])
	elif l[0] == "str":
		print("pyc2c: str is deprecated", os.getcwd(), file=sys.stderr)
		if len(l) == 1:
			l.append("")
		s = "".join(l[1:])
		return [fromBuf, ["str"] + l[1:], str(len(s))], []
	elif l[0] == "ord":
		print("pyc2c: ord is deprecated", os.getcwd(), file=sys.stderr)
		return [fromU64, str(ord(l[1]))], []
	elif l[0] in ["&&", "||"]:
		rets = []
		ret = [l[0]]
		for ll in l[1:]:
			e, ss = expr(v, ll)
			rets += ss
			ret.append([toBool, e])
		return [fromBool, ret], rets
	elif l[0] == "list":
		vv = genvar(v)
		rets = [["auto", vv, PO, "NULL"]]
		rets.append(["=", vv, [listInit]])
		if len(l) >= 2:
			rets.append([resize, vv, [fromU64, str(len(l) - 1)]])
		for idx, ll in enumerate(l[1:]):
			e, ss = expr(v, ll)
			rets += ss
			rets.append([listSet, vv, str(idx), e])
		return vv, rets
	elif l[0] == "map":
		vv = genvar(v)
		rets = [["auto", vv, PO, "NULL"]]
		rets.append(["=", vv, [mapInit]])
		for idx, [key, val] in enumerate(l[1:]):
			ek, sk = expr(v, key)
			ev, sv = expr(v, val)
			rets += sk
			rets += sv
			rets.append([setItem, vv, ek, ev])
		return vv, rets

	if l[0] in binop and len(l) >= 4:
		rets = []
		ret = []
		prev = l[1]
		for ll in l[2:]:
			prev = [l[0], prev, ll]
		return expr(v, prev)
	if l[0] in bi:
		# builtin variable
		ret = [bi[l[0]]]
	elif l[0] in v:
		# function variable
		arity = len(l)
		ret = [["cast",
			["Ptr", ["Arg"] + [PO] * arity],
			[".", ["->", l[0], "value"], "pfn"],
		]]
	else:
		# function call
		ret = [l[0]]
	rets = []
	for ll in l[1:]:
		e, ss = expr(v, ll)
		ret.append(e)
		rets += ss
	return ret, rets
def stmt(v, l):
	if l[0] == "begin":
		rets = []
		v.append(False)
		for ll in l[1:]:
			rets += stmt(v, ll)
		rets += popscope(v)
		return [["begin"] + rets]
	elif l[0] == "return":
		if len(l) == 1:
			ss = [["=", "_vartmp", "NULL"]]
		else:
			e, ss = expr(v, l[1])
			ss.append(["=", "_vartmp", e])
			ss.append([incref, "_vartmp"])
		ss += cleanret(v)
		ss.append([deconly, "_vartmp"])
		ss.append(["return", "_vartmp"])
		return ss
	elif l[0] == "cond":
		rets = []
		v.append(False)
		e = ["cond"]
		for x in l[1:]:
			if len(x) <= 1:
				raise Exception("cond len 1", l)
			e1, ss1 = expr(v, x[0])
			rets += ss1
			ss2 = stmt(v, ["begin"] + x[1:])
			e.append([[toBool, e1]] + ss2)
		rets.append(e)
		rets += popscope(v)
		return rets
	elif l[0] == "abort":
		return [l]
	elif l[0] in ["break", "continue", "abort"]:
		return cleanloop(v) + [l]
	elif l[0] == "while":
		e1, ss1 = expr(v, l[1])
		v.append(True)
		ss2 = stmt(v, ["begin"] + l[2:])
		sp = popscope(v)
		return ss1 + [["while", [toBool, e1]] + ss2 + sp]
	elif l[0] == "=":
		assert len(l) == 3
		if isinstance(l[1], str):
			ret = []
			if l[1] not in v:
				v.append(l[1])
				ret = [["auto", l[1], PO, "NULL"]]
			e, ss = expr(v, l[2])
			return ret + [
				["=", "_vartmp", l[1]],
			] + ss + [
				["=", l[1], [incref, e]],
				[decref, "_vartmp"],
			]
		else:
			left = l[1]
			assert left[0] == "@"
			assert isinstance(left[1], str)
			e1, ss1 = expr(v, left[2])
			e2, ss2 = expr(v, l[2])
			return ss1 + ss2 + [[setItem, left[1], e1, e2]]
	elif l[0][-1] == "=" and l[0] not in bi:
		op = l[0][:-1]
		return stmt(v, ["=", l[1], [op, l[1], l[2]]])
	elif l[0] in ["print", "eprint", "println", "eprintln"]:
		ret = []
		file = "1"
		if l[0][0] == "e":
			file = "2"
		first = True
		for ll in l[1:]:
			if first:
				first = False
			else:
				ret.append(["dprintf", file, "' "])
			e, ss = expr(v, ll)
			ret += ss
			ret.append([printobj, file, e])
		if l[0].endswith("ln"):
			ret.append(["dprintf", file, "'\x0a"])
		return ret
	else:
		e, ss = expr(v, l)
		if e != ["nop"]:
			return ss + [[check, e]]
		else:
			return ss
def translate_fn(l):
	if l[0] == "fn":
		# it is a c0 project
		return l
	if l[0] == "c0":
		l[0] = "fn"
		return l
	if l[0] != "c1":
		return l
	l[0] = "fn"
	stmts = [["auto", "_vartmp", PO], ["cast", "void", "_vartmp"]]
	ret = PO
	if l[1] == "main":
		ret = "int"
		if len(l[2]) == 0:
			vs = [False]
		else:
			vs = [False, "args"]
			stmts += argconv
	else:
		vs = [False] + l[2]
		for v in l[2]:
			stmts.append([incref, v])
	stmts += stmt(vs, ["begin"] + l[3:])
	stmts += popscope(vs)
	assert len(vs) == 0
	if l[1] == "main":
		stmts.append(["return", "0"])
		args = [["argc", "int"], ["argv", ["Ptr", ["Ptr", "char"]]]]
	else:
		stmts.append(["return", "NULL"])
		args = [[x, PO] for x in l[2]]
	return ["fn", l[1], ret, args] + stmts

pi = Path(sys.argv[1]).resolve()
po = Path(sys.argv[2]).resolve()
l = parse_code(open(pi).read())
out = []

header = [
	["include", "/6e5d/c2r", []],
	["include", "/6e5d/c2prim", []],
]
for item in ["Object", "incref", "decref", "check", "deconly"]:
	header[0][2].append(f"_6e5d_c2r_{item}")
for item in ["length", "getItem", "setItem", "resize",
	"add", "sub", "mul", "div", "mod",
	"shl", "shr", "not",
	"lt", "gt", "le", "ge", "eq", "ne",
	"and", "or", "xor", "neg",
	"isBytes", "isU64", "isI64", "isNil", "isList", "isF32",
	"bytesInit", "listInit", "mapInit",
	"fromI64", "fromU64", "fromF32", "fromBool", "fromBuf", "fromFn",
	"toI64", "toU64", "toF32", "toBool",
	"asI64", "asU64", "asF32", "asBytes", "asList",
	"listSet", "resizeList",
	"printobj",
]:
	header[1][2].append(f"_6e5d_c2prim_{item}")

for ll in l:
	t = translate_fn(ll)
	if t in header:
		continue
	out.append(t)

with open(po, "w") as file:
	for ll in header + out:
		s = pretty(ll)
		print(s, file = file)
