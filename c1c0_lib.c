#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
typedef struct _6e5d_vec_lib_Vec _6e5d_vec_lib_Vec;
typedef struct _6e5d_hashmap_lib_Iter _6e5d_hashmap_lib_Iter;
typedef struct _6e5d_hashmap_lib_Hashmap _6e5d_hashmap_lib_Hashmap;
typedef union _6e5d_c2r_lib_Value _6e5d_c2r_lib_Value;
typedef struct _6e5d_c2r_lib_Object _6e5d_c2r_lib_Object;
struct _6e5d_vec_lib_Vec{
	size_t size;
	size_t capacity;
	size_t len;
	void (*p);
};
struct _6e5d_hashmap_lib_Iter{
	uint8_t (*entry);
	void (*key);
	void (*value);
	uint8_t (*end);
};
struct _6e5d_hashmap_lib_Hashmap{
	size_t size_key;
	size_t size_value;
	size_t size_entry;
	size_t len;
	void (*buckets);
	uint8_t bitshift;
	uint64_t (*hasher)(void (*),size_t );
	bool (*eq)(void (*),void (*),size_t );
};
union _6e5d_c2r_lib_Value{
	int64_t i64;
	uint64_t u64;
	float f32;
	void (*pfn)(void );
	_6e5d_vec_lib_Vec (*v);
	_6e5d_hashmap_lib_Hashmap (*map);
	uint8_t (*lbuf);
};
struct _6e5d_c2r_lib_Object{
	_6e5d_c2r_lib_Value value;
	uint32_t rc;
	int8_t ty;
};
void _6e5d_vec_lib_init(_6e5d_vec_lib_Vec (*v),size_t size);
void _6e5d_vec_lib_deinit(_6e5d_vec_lib_Vec (*v));
void _6e5d_vec_lib_fit(_6e5d_vec_lib_Vec (*v));
void (*_6e5d_vec_lib_last(_6e5d_vec_lib_Vec (*v)));
void _6e5d_vec_lib_reserve(_6e5d_vec_lib_Vec (*v),size_t upcoming);
void _6e5d_vec_lib_resize(_6e5d_vec_lib_Vec (*v),size_t newlen);
void _6e5d_vec_lib_extend(_6e5d_vec_lib_Vec (*v),void (*data),size_t len);
void _6e5d_vec_lib_debug(_6e5d_vec_lib_Vec (*v));
void (*_6e5d_vec_lib_push(_6e5d_vec_lib_Vec (*v)));
void _6e5d_vec_lib_pushv(_6e5d_vec_lib_Vec (*v),void (*val));
void (*_6e5d_vec_lib_insert(_6e5d_vec_lib_Vec (*v),size_t pos));
void _6e5d_vec_lib_insertv(_6e5d_vec_lib_Vec (*v),size_t pos,void (*val));
void _6e5d_vec_lib_srmi(_6e5d_vec_lib_Vec (*v),size_t idx);
void _6e5d_vec_lib_frombuf(_6e5d_vec_lib_Vec (*v),void (*p),size_t size,size_t len);
size_t _6e5d_vec_lib_unwrap(_6e5d_vec_lib_Vec (*v),void (*(*p)));
void _6e5d_vec_lib_copy(_6e5d_vec_lib_Vec (*i),_6e5d_vec_lib_Vec (*o));
uint64_t _6e5d_hashmap_lib_fnv1astr(void (*v),size_t len);
uint64_t _6e5d_hashmap_lib_fnv1a(void (*v),size_t len);
bool _6e5d_hashmap_lib_memeq(void (*p1),void (*p2),size_t len);
bool _6e5d_hashmap_lib_streq(void (*p1),void (*p2),size_t len);
uint64_t _6e5d_hashmap_lib_hash(_6e5d_hashmap_lib_Hashmap (*map),uint8_t (*p),size_t len);
void _6e5d_hashmap_lib_init(_6e5d_hashmap_lib_Hashmap (*map),size_t size_key,size_t size_value);
void _6e5d_hashmap_lib_initstr(_6e5d_hashmap_lib_Hashmap (*map),uint32_t size_value);
void _6e5d_hashmap_lib_deinit(_6e5d_hashmap_lib_Hashmap (*map));
void (*_6e5d_hashmap_lib_getk(_6e5d_hashmap_lib_Hashmap (*map),void (*key)));
void (*_6e5d_hashmap_lib_get(_6e5d_hashmap_lib_Hashmap (*map),void (*key)));
bool _6e5d_hashmap_lib_contains(_6e5d_hashmap_lib_Hashmap (*map),void (*key));
void _6e5d_hashmap_lib_debug(_6e5d_hashmap_lib_Hashmap (*map));
void _6e5d_hashmap_lib_resize(_6e5d_hashmap_lib_Hashmap (*map),uint8_t bitshift);
void _6e5d_hashmap_lib_reserve(_6e5d_hashmap_lib_Hashmap (*map),size_t upcoming);
void _6e5d_hashmap_lib_insertv(_6e5d_hashmap_lib_Hashmap (*map),void (*key),void (*value));
void (*_6e5d_hashmap_lib_add(_6e5d_hashmap_lib_Hashmap (*map),void (*key)));
bool _6e5d_hashmap_lib_addv(_6e5d_hashmap_lib_Hashmap (*map),void (*key),void (*value));
bool _6e5d_hashmap_lib_remove(_6e5d_hashmap_lib_Hashmap (*map),void (*key));
bool _6e5d_hashmap_lib_next(_6e5d_hashmap_lib_Hashmap (*p),_6e5d_hashmap_lib_Iter (*it));
_6e5d_hashmap_lib_Iter _6e5d_hashmap_lib_iter(_6e5d_hashmap_lib_Hashmap (*p));
void _6e5d_hashmap_lib_clear(_6e5d_hashmap_lib_Hashmap (*p));
void _6e5d_hashmap_lib_copy(_6e5d_hashmap_lib_Hashmap (*i),_6e5d_hashmap_lib_Hashmap (*o));
_6e5d_vec_lib_Vec (*_6e5d_c2r_lib_asStr(_6e5d_c2r_lib_Object (*po)));
_6e5d_vec_lib_Vec (*_6e5d_c2r_lib_asVec(_6e5d_c2r_lib_Object (*po)));
_6e5d_hashmap_lib_Hashmap (*_6e5d_c2r_lib_asMap(_6e5d_c2r_lib_Object (*po)));
_6e5d_c2r_lib_Object (*_6e5d_c2r_lib_incref(_6e5d_c2r_lib_Object (*po)));
void _6e5d_c2r_lib_decref(_6e5d_c2r_lib_Object (*po));
void _6e5d_c2r_lib_deconly(_6e5d_c2r_lib_Object (*po));
void _6e5d_c2r_lib_chk(_6e5d_c2r_lib_Object (*(*pp)));
void _6e5d_c2r_lib_check0(_6e5d_c2r_lib_Object (*po));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_add(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_sub(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_mul(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_div(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_ge(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_le(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_gt(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_lt(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_eq(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_ne(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
int8_t _6e5d_c2prim_lib_tid0(_6e5d_c2r_lib_Object (*obj));
int8_t _6e5d_c2prim_lib_tid(_6e5d_c2r_lib_Object (*obj));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_not(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_lnot(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_inv(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_mod(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_and(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_or(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_xor(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_shl(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_shr(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_listInit());
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_bytesInit());
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_resizeList(_6e5d_c2r_lib_Object (*obj),size_t len));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_resize(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*vlen)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_listSet(_6e5d_c2r_lib_Object (*obj),size_t index,_6e5d_c2r_lib_Object (*value)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asBytes(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asList(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_setItem(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index),_6e5d_c2r_lib_Object (*value)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_getItem(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_length(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromBuf(void (*p),size_t len));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_mapInit());
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromU64(uint64_t val));
uint64_t _6e5d_c2prim_lib_toU64(_6e5d_c2r_lib_Object (*obj));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromI64(int64_t val));
int64_t _6e5d_c2prim_lib_toI64(_6e5d_c2r_lib_Object (*obj));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromF32(float val));
float _6e5d_c2prim_lib_toF32(_6e5d_c2r_lib_Object (*obj));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromBool(bool val));
bool _6e5d_c2prim_lib_toBool(_6e5d_c2r_lib_Object (*obj));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromFn(void (*f)(void )));
void (*_6e5d_c2prim_lib_toFn(_6e5d_c2r_lib_Object (*f)))(void );
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asU64(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asI64(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asF32(_6e5d_c2r_lib_Object (*obj)));
int64_t _6e5d_c2prim_lib_cstr(_6e5d_c2r_lib_Object (*obj),char (*out),size_t maxlen);
char (*_6e5d_c2prim_lib_cstrAlloc(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_rc(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_printobj(FILE (*f),_6e5d_c2r_lib_Object (*obj)));
void _6e5d_c2prim_lib_assign(_6e5d_c2r_lib_Object (*(*dst)),_6e5d_c2r_lib_Object (*src));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_abort());
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_push(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*x)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_pop(_6e5d_c2r_lib_Object (*l)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_nth(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*n)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_contains(_6e5d_c2r_lib_Object (*li),_6e5d_c2r_lib_Object (*item)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lbegin(_6e5d_c2r_lib_Object (*s1),_6e5d_c2r_lib_Object (*s2)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_rbegin(_6e5d_c2r_lib_Object (*s1),_6e5d_c2r_lib_Object (*s2)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_rstrip(_6e5d_c2r_lib_Object (*by),_6e5d_c2r_lib_Object (*chars)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lstrip(_6e5d_c2r_lib_Object (*by),_6e5d_c2r_lib_Object (*chars)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_strip(_6e5d_c2r_lib_Object (*by),_6e5d_c2r_lib_Object (*chars)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_reverse(_6e5d_c2r_lib_Object (*a)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_splitws(_6e5d_c2r_lib_Object (*s)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_splitoff(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*idx)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_split(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lsplit(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim),_6e5d_c2r_lib_Object (*times)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_rsplit(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim),_6e5d_c2r_lib_Object (*times)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_bufcopy(_6e5d_c2r_lib_Object (*f),_6e5d_c2r_lib_Object (*t)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_slice(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*i1),_6e5d_c2r_lib_Object (*i2)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lindex(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*item)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_rindex(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*item)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_append(_6e5d_c2r_lib_Object (*s1),_6e5d_c2r_lib_Object (*s2)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_join2(_6e5d_c2r_lib_Object (*delim),_6e5d_c2r_lib_Object (*lists)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_join(_6e5d_c2r_lib_Object (*lists)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_swaprm(_6e5d_c2r_lib_Object (*li),_6e5d_c2r_lib_Object (*idx)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lower(_6e5d_c2r_lib_Object (*s)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_sort(_6e5d_c2r_lib_Object (*array),_6e5d_c2r_lib_Object (*op)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lfind(_6e5d_c2r_lib_Object (*h),_6e5d_c2r_lib_Object (*n)));
static _6e5d_c2r_lib_Object (*bname(_6e5d_c2r_lib_Object (*n)));
static _6e5d_c2r_lib_Object (*exprstr(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*s)));
static _6e5d_c2r_lib_Object (*buildList(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block)));
static _6e5d_c2r_lib_Object (*buildOp(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block),_6e5d_c2r_lib_Object (*sym)));
static _6e5d_c2r_lib_Object (*tytest(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block),_6e5d_c2r_lib_Object (*ty)));
static _6e5d_c2r_lib_Object (*expr(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block)));
static _6e5d_c2r_lib_Object (*assign(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block)));
static _6e5d_c2r_lib_Object (*setitem(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block)));
static _6e5d_c2r_lib_Object (*opassign(_6e5d_c2r_lib_Object (*first)));
static _6e5d_c2r_lib_Object (*buildstmt(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*varscan(_6e5d_c2r_lib_Object (*stmt),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*ret)));
static _6e5d_c2r_lib_Object (*mainargs(_6e5d_c2r_lib_Object (*ret)));
static _6e5d_c2r_lib_Object (*func(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*block)));
_6e5d_c2r_lib_Object (*_6e5d_c1c0_lib_c1c0(_6e5d_c2r_lib_Object (*blocks)));
static _6e5d_c2r_lib_Object (*bname(_6e5d_c2r_lib_Object (*n))){
	_6e5d_c2r_lib_incref(n);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	(_return=_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_",17)),1,n)));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(n);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(n);
	return NULL;
}
static _6e5d_c2r_lib_Object (*exprstr(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*s))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(localvar);
	_6e5d_c2r_lib_incref(s);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*slen) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*firstnum) = NULL;
	auto _6e5d_c2r_lib_Object (*sym) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c1str_lib_contains(localvar,s))){
		(_return=s);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(s);
		_6e5d_c2r_lib_decref(slen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(firstnum);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&slen),_6e5d_c2prim_lib_length(s));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(slen,_6e5d_c2prim_lib_fromU64(0)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("emptystr",8));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(s,_6e5d_c2prim_lib_fromU64(0)));
	_6e5d_c2prim_lib_assign((&firstnum),_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(first,_6e5d_c2prim_lib_fromU64(48)))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_le(first,_6e5d_c2prim_lib_fromU64(57))))));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(96)))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(2),slen))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("badchar",7));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,s);
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromU64",24)),1,_6e5d_c2prim_lib_asBytes(_6e5d_c2prim_lib_getItem(s,_6e5d_c2prim_lib_fromU64(1)))));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(s);
		_6e5d_c2r_lib_decref(slen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(firstnum);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(39)))){
		(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromBuf",24)),1,s),2,_6e5d_c2prim_lib_asBytes(_6e5d_c2prim_lib_sub(slen,_6e5d_c2prim_lib_fromU64(1)))));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(s);
		_6e5d_c2r_lib_decref(slen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(firstnum);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(s,_6e5d_c2prim_lib_fromBuf("nil",3)))){
		(_return=_6e5d_c2prim_lib_fromBuf("NULL",4));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(s);
		_6e5d_c2r_lib_decref(slen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(firstnum);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(firstnum)||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(43)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(45)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(46))))))&&_6e5d_c2prim_lib_toBool(_6e5d_c1str_lib_contains(s,_6e5d_c2prim_lib_fromU64(46))))))){
		(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromF32",24)),1,s));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(s);
		_6e5d_c2r_lib_decref(slen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(firstnum);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(firstnum)){
		(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromU64",24)),1,s));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(s);
		_6e5d_c2r_lib_decref(slen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(firstnum);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(45)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(43))))))){
		(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromI64",24)),1,s));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(s);
		_6e5d_c2r_lib_decref(slen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(firstnum);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_assign((&sym),_6e5d_c2prim_lib_getItem(symmap,s));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(sym)))))){
			(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromFn",23)),1,bname(sym)));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(symmap);
			_6e5d_c2r_lib_decref(localvar);
			_6e5d_c2r_lib_decref(s);
			_6e5d_c2r_lib_decref(slen);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(firstnum);
			_6e5d_c2r_lib_decref(sym);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromFn",23)),1,s));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(s);
		_6e5d_c2r_lib_decref(slen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(firstnum);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(slen);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(firstnum);
	_6e5d_c2r_lib_decref(sym);
	return NULL;
}
static _6e5d_c2r_lib_Object (*buildList(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(localvar);
	_6e5d_c2r_lib_incref(block);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*llen) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*e) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_listInit",25)));
	_6e5d_c2prim_lib_assign((&llen),_6e5d_c2prim_lib_length(block));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(llen,_6e5d_c2prim_lib_fromU64(1)))){
		(_return=ret);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(block);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(llen);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(e);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_resizeList",27)),1,ret),2,_6e5d_c2prim_lib_asBytes(_6e5d_c2prim_lib_sub(llen,_6e5d_c2prim_lib_fromU64(1)))));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(block)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(0)))){
			continue;
		};
		_6e5d_c2prim_lib_assign((&e),expr(symmap,localvar,l));
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_listSet",24)),1,ret),2,_6e5d_c2prim_lib_asBytes(_6e5d_c2prim_lib_sub(idx,_6e5d_c2prim_lib_fromU64(1)))),3,e));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(e);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(e);
	return NULL;
}
static _6e5d_c2r_lib_Object (*buildOp(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block),_6e5d_c2r_lib_Object (*sym))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(localvar);
	_6e5d_c2r_lib_incref(block);
	_6e5d_c2r_lib_incref(sym);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*llen) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	_6e5d_c2prim_lib_assign((&llen),_6e5d_c2prim_lib_length(block));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_le(llen,_6e5d_c2prim_lib_fromU64(1)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("badexpr",7));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,block);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&sym),bname(sym));
	_6e5d_c2prim_lib_assign((&ret),expr(symmap,localvar,_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(1))));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(llen,_6e5d_c2prim_lib_fromU64(2)))){
		(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,sym),1,ret));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(block);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_decref(llen);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(block)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_fromU64(2)))){
			continue;
		};
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,sym),1,ret),2,expr(symmap,localvar,l)));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(sym);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(sym);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	return NULL;
}
static _6e5d_c2r_lib_Object (*tytest(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block),_6e5d_c2r_lib_Object (*ty))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(localvar);
	_6e5d_c2r_lib_incref(block);
	_6e5d_c2r_lib_incref(ty);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*e) = NULL;
	auto _6e5d_c2r_lib_Object (*t) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(2),_6e5d_c2prim_lib_length(block)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("badtytest",9));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,block);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&e),expr(symmap,localvar,_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(1))));
	_6e5d_c2prim_lib_assign((&t),NULL);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ty,_6e5d_c2prim_lib_fromBuf("nil",3)))){
		_6e5d_c2prim_lib_assign((&t),_6e5d_c2prim_lib_fromU64(0));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ty,_6e5d_c2prim_lib_fromBuf("u64",3)))){
		_6e5d_c2prim_lib_assign((&t),_6e5d_c2prim_lib_fromU64(1));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ty,_6e5d_c2prim_lib_fromBuf("i64",3)))){
		_6e5d_c2prim_lib_assign((&t),_6e5d_c2prim_lib_fromU64(2));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ty,_6e5d_c2prim_lib_fromBuf("f32",3)))){
		_6e5d_c2prim_lib_assign((&t),_6e5d_c2prim_lib_fromU64(3));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ty,_6e5d_c2prim_lib_fromBuf("fn",2)))){
		_6e5d_c2prim_lib_assign((&t),_6e5d_c2prim_lib_fromU64(4));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ty,_6e5d_c2prim_lib_fromBuf("bytes",5)))){
		_6e5d_c2prim_lib_assign((&t),_6e5d_c2prim_lib_fromU64(5));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ty,_6e5d_c2prim_lib_fromBuf("list",4)))){
		_6e5d_c2prim_lib_assign((&t),_6e5d_c2prim_lib_fromU64(6));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ty,_6e5d_c2prim_lib_fromBuf("map",3)))){
		_6e5d_c2prim_lib_assign((&t),_6e5d_c2prim_lib_fromU64(7));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("badty",5));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,block);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&e),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("==",2)),1,_6e5d_c2prim_lib_asBytes(t)),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_tid",20)),1,e)));
	(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromBool",25)),1,e));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(ty);
	_6e5d_c2r_lib_decref(e);
	_6e5d_c2r_lib_decref(t);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(ty);
	_6e5d_c2r_lib_decref(e);
	_6e5d_c2r_lib_decref(t);
	return NULL;
}
static _6e5d_c2r_lib_Object (*expr(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(localvar);
	_6e5d_c2r_lib_incref(block);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*llen) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*sym) = NULL;
	auto _6e5d_c2r_lib_Object (*flen) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*e) = NULL;
	auto _6e5d_c2r_lib_Object (*fty) = NULL;
	auto _6e5d_c2r_lib_Object (*idy) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(block))))){
		(_return=exprstr(symmap,localvar,block));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(block);
		_6e5d_c2r_lib_decref(llen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(sym);
		_6e5d_c2r_lib_decref(flen);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(e);
		_6e5d_c2r_lib_decref(fty);
		_6e5d_c2r_lib_decref(idy);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&llen),_6e5d_c2prim_lib_length(block));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(llen,_6e5d_c2prim_lib_fromU64(0)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("emptyblock",10));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(0)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(first))))){
		_6e5d_c2prim_lib_assign((&sym),_6e5d_c2prim_lib_getItem(symmap,first));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(sym)))))){
			(_return=buildOp(symmap,localvar,block,sym));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(symmap);
			_6e5d_c2r_lib_decref(localvar);
			_6e5d_c2r_lib_decref(block);
			_6e5d_c2r_lib_decref(llen);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(sym);
			_6e5d_c2r_lib_decref(flen);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(e);
			_6e5d_c2r_lib_decref(fty);
			_6e5d_c2r_lib_decref(idy);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_assign((&flen),_6e5d_c2prim_lib_length(first));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(flen,_6e5d_c2prim_lib_fromU64(0)))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("emptyfirst",10));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,block);
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(63),_6e5d_c2prim_lib_getItem(first,_6e5d_c2prim_lib_sub(flen,_6e5d_c2prim_lib_fromU64(1)))))){
			(_return=tytest(symmap,localvar,block,_6e5d_c1str_lib_slice(first,_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_sub(flen,_6e5d_c2prim_lib_fromU64(1)))));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(symmap);
			_6e5d_c2r_lib_decref(localvar);
			_6e5d_c2r_lib_decref(block);
			_6e5d_c2r_lib_decref(llen);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(sym);
			_6e5d_c2r_lib_decref(flen);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(e);
			_6e5d_c2r_lib_decref(fty);
			_6e5d_c2r_lib_decref(idy);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("&&",2)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("||",2))))))){
			_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,first));
			_6e5d_c2prim_lib_assign((&idx),NULL);
			while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
					_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
				}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
					_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
				};
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(block)))){
					break;
				};
				_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idx));
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(0)))){
					continue;
				};
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_toBool",23)),1,expr(symmap,localvar,l))));
			};
			(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromBool",25)),1,ret));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(symmap);
			_6e5d_c2r_lib_decref(localvar);
			_6e5d_c2r_lib_decref(block);
			_6e5d_c2r_lib_decref(llen);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(sym);
			_6e5d_c2r_lib_decref(flen);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(e);
			_6e5d_c2r_lib_decref(fty);
			_6e5d_c2r_lib_decref(idy);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("list",4)))){
			(_return=buildList(symmap,localvar,block));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(symmap);
			_6e5d_c2r_lib_decref(localvar);
			_6e5d_c2r_lib_decref(block);
			_6e5d_c2r_lib_decref(llen);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(sym);
			_6e5d_c2r_lib_decref(flen);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(e);
			_6e5d_c2r_lib_decref(fty);
			_6e5d_c2r_lib_decref(idy);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("map",3)))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(1),_6e5d_c2prim_lib_length(block)))){
				_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("unimpl",6));
				fprintf(stderr," ");
				_6e5d_c2prim_lib_printobj(stderr,block);
				_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
				_6e5d_c2prim_lib_abort();
			};
			(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_mapInit",24)));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(symmap);
			_6e5d_c2r_lib_decref(localvar);
			_6e5d_c2r_lib_decref(block);
			_6e5d_c2r_lib_decref(llen);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(sym);
			_6e5d_c2r_lib_decref(flen);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(e);
			_6e5d_c2r_lib_decref(fty);
			_6e5d_c2r_lib_decref(idy);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
	};
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(block)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idx));
		_6e5d_c2prim_lib_assign((&e),expr(symmap,localvar,l));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(idx,_6e5d_c2prim_lib_fromU64(0)))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,e));
			continue;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(e))))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromFn",23),_6e5d_c2prim_lib_getItem(e,_6e5d_c2prim_lib_fromU64(0)))))))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_getItem(e,_6e5d_c2prim_lib_fromU64(1))));
			continue;
		};
		_6e5d_c2prim_lib_assign((&fty),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("Arg",3)));
		_6e5d_c2prim_lib_assign((&idy),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idy))))){
				_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_add(idy,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idy,_6e5d_c2prim_lib_length(block)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idy));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(fty,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("Ptr",3)),1,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_Object",20))));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("cast",4)),1,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("Ptr",3)),1,fty)),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_toFn",21)),1,e))));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(sym);
	_6e5d_c2r_lib_decref(flen);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(e);
	_6e5d_c2r_lib_decref(fty);
	_6e5d_c2r_lib_decref(idy);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(sym);
	_6e5d_c2r_lib_decref(flen);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(e);
	_6e5d_c2r_lib_decref(fty);
	_6e5d_c2r_lib_decref(idy);
	return NULL;
}
static _6e5d_c2r_lib_Object (*assign(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(localvar);
	_6e5d_c2r_lib_incref(block);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*var) = NULL;
	_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(1)));
	(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_assign",23)),1,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("&p",2)),1,var)),2,expr(symmap,localvar,_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(2)))));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(var);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(var);
	return NULL;
}
static _6e5d_c2r_lib_Object (*setitem(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(localvar);
	_6e5d_c2r_lib_incref(block);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*var) = NULL;
	auto _6e5d_c2r_lib_Object (*vlen) = NULL;
	_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(1)));
	_6e5d_c2prim_lib_assign((&vlen),_6e5d_c2prim_lib_length(var));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(vlen,_6e5d_c2prim_lib_fromU64(3)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("bad left value",14));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,block);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromBuf("@",1),_6e5d_c2prim_lib_getItem(var,_6e5d_c2prim_lib_fromU64(0))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("bad left value",14));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,block);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_setItem",24)),1,expr(symmap,localvar,_6e5d_c2prim_lib_getItem(var,_6e5d_c2prim_lib_fromU64(1)))),2,expr(symmap,localvar,_6e5d_c2prim_lib_getItem(var,_6e5d_c2prim_lib_fromU64(2)))),3,expr(symmap,localvar,_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(2)))));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(var);
	_6e5d_c2r_lib_decref(vlen);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(var);
	_6e5d_c2r_lib_decref(vlen);
	return NULL;
}
static _6e5d_c2r_lib_Object (*opassign(_6e5d_c2r_lib_Object (*first))){
	_6e5d_c2r_lib_incref(first);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*llen) = NULL;
	auto _6e5d_c2r_lib_Object (*last) = NULL;
	_6e5d_c2prim_lib_assign((&llen),_6e5d_c2prim_lib_length(first));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),llen))){
		(_return=_6e5d_c2prim_lib_fromU64(0));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(llen);
		_6e5d_c2r_lib_decref(last);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&last),_6e5d_c2prim_lib_getItem(first,_6e5d_c2prim_lib_sub(llen,_6e5d_c2prim_lib_fromU64(1))));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(last,_6e5d_c2prim_lib_fromU64(61)))){
		(_return=_6e5d_c2prim_lib_fromU64(1));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(llen);
		_6e5d_c2r_lib_decref(last);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	(_return=_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(last);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(last);
	return NULL;
}
static _6e5d_c2r_lib_Object (*buildstmt(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*block),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(localvar);
	_6e5d_c2r_lib_incref(block);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*llen) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*var) = NULL;
	auto _6e5d_c2r_lib_Object (*flen) = NULL;
	auto _6e5d_c2r_lib_Object (*op) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*branch) = NULL;
	auto _6e5d_c2r_lib_Object (*idy) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	auto _6e5d_c2r_lib_Object (*fd) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(block))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("strstmt",7));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,block);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&llen),_6e5d_c2prim_lib_length(block));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),llen))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("emptystmt",9));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(0)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(first)))))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_check0",20)),1,expr(symmap,localvar,block))));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("=",1)))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(3),llen))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("badequal",8));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,block);
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(1)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(var))))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,assign(symmap,localvar,block)));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,setitem(symmap,localvar,block)));
		};
	}else if(_6e5d_c2prim_lib_toBool(opassign(first))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(3),llen))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("badopassign",11));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,block);
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&flen),_6e5d_c2prim_lib_length(first));
		_6e5d_c2prim_lib_assign((&op),_6e5d_c1str_lib_slice(first,_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_sub(flen,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(buildstmt(symmap,localvar,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("=",1)),1,_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(1))),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,op),1,_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(1))),2,_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(2)))),out));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("cond",4)))){
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("cond",4)));
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(block)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idx));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),idx))){
				continue;
			};
			_6e5d_c2prim_lib_assign((&branch),_6e5d_c2prim_lib_listInit());
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,branch));
			_6e5d_c2prim_lib_assign((&idy),NULL);
			while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idy))))){
					_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_fromU64(0));
				}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
					_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_add(idy,_6e5d_c2prim_lib_fromU64(1)));
				};
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idy,_6e5d_c2prim_lib_length(l)))){
					break;
				};
				_6e5d_c2prim_lib_assign((&ll),_6e5d_c2prim_lib_getItem(l,idy));
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),idy))){
					_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(branch,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_toBool",23)),1,expr(symmap,localvar,ll))));
					continue;
				};
				_6e5d_c2r_lib_check0(buildstmt(symmap,localvar,ll,branch));
			};
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ret));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("while",5)))){
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("while",5)));
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(block)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idx));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),idx))){
				continue;
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(1),idx))){
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_toBool",23)),1,expr(symmap,localvar,l))));
				continue;
			};
			_6e5d_c2r_lib_check0(buildstmt(symmap,localvar,l,ret));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ret));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("break",5)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("break",5))));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("continue",8)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("continue",8))));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("return",6)))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(llen,_6e5d_c2prim_lib_fromU64(2)))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("=",1)),1,_6e5d_c2prim_lib_fromBuf("_return",7)),2,expr(symmap,localvar,_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(1))))));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_incref",20)),1,_6e5d_c2prim_lib_fromBuf("_return",7))));
			_6e5d_c2prim_lib_assign((&idx),NULL);
			while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
					_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
				}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
					_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
				};
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(localvar)))){
					break;
				};
				_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(localvar,idx));
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_decref",20)),1,var)));
			};
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_deconly",21)),1,_6e5d_c2prim_lib_fromBuf("_return",7))));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),NULL);
			while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
					_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
				}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
					_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
				};
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(localvar)))){
					break;
				};
				_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(localvar,idx));
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_decref",20)),1,var)));
			};
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("return",6)),1,_6e5d_c2prim_lib_fromBuf("_return",7))));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("abort",5)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_abort",22))));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("nop",3)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("nop",3))));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("print",5)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("eprint",6))))))){
		_6e5d_c2prim_lib_assign((&fd),NULL);
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("eprint",6)))){
			_6e5d_c2prim_lib_assign((&fd),_6e5d_c2prim_lib_fromBuf("stderr",6));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&fd),_6e5d_c2prim_lib_fromBuf("stdout",6));
		};
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(block)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idx));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(0)))){
				continue;
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(idx,_6e5d_c2prim_lib_fromU64(1)))){
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("fprintf",7)),1,fd),2,_6e5d_c2prim_lib_fromBuf("' ",2))));
			};
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_printobj",25)),1,fd),2,expr(symmap,localvar,l))));
		};
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_check0",20)),1,expr(symmap,localvar,block))));
	};
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(var);
	_6e5d_c2r_lib_decref(flen);
	_6e5d_c2r_lib_decref(op);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(branch);
	_6e5d_c2r_lib_decref(idy);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_decref(fd);
	return NULL;
}
static _6e5d_c2r_lib_Object (*varscan(_6e5d_c2r_lib_Object (*stmt),_6e5d_c2r_lib_Object (*localvar),_6e5d_c2r_lib_Object (*ret))){
	_6e5d_c2r_lib_incref(stmt);
	_6e5d_c2r_lib_incref(localvar);
	_6e5d_c2r_lib_incref(ret);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*slen) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*idy) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	auto _6e5d_c2r_lib_Object (*var) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(stmt))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("strstmt",7));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&slen),_6e5d_c2prim_lib_length(stmt));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),slen))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("emptystmt",9));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(stmt,_6e5d_c2prim_lib_fromU64(0)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("while",5)))){
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(stmt)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(stmt,idx));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_fromU64(2)))){
				continue;
			};
			_6e5d_c2r_lib_check0(varscan(l,localvar,ret));
		};
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("cond",4)))){
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(stmt)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(stmt,idx));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_fromU64(1)))){
				continue;
			};
			_6e5d_c2prim_lib_assign((&idy),NULL);
			while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idy))))){
					_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_fromU64(0));
				}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
					_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_add(idy,_6e5d_c2prim_lib_fromU64(1)));
				};
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idy,_6e5d_c2prim_lib_length(l)))){
					break;
				};
				_6e5d_c2prim_lib_assign((&ll),_6e5d_c2prim_lib_getItem(l,idy));
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idy,_6e5d_c2prim_lib_fromU64(1)))){
					continue;
				};
				_6e5d_c2r_lib_check0(varscan(ll,localvar,ret));
			};
		};
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("=",1)))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(slen,_6e5d_c2prim_lib_fromU64(3)))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("badassign",9));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,stmt);
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(stmt,_6e5d_c2prim_lib_fromU64(1)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(var))))){
			_6e5d_c2r_lib_decref(stmt);
			_6e5d_c2r_lib_decref(localvar);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(slen);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(idy);
			_6e5d_c2r_lib_decref(ll);
			_6e5d_c2r_lib_decref(var);
			return _return;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c1str_lib_contains(localvar,var))){
			_6e5d_c2r_lib_decref(stmt);
			_6e5d_c2r_lib_decref(localvar);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(slen);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(idy);
			_6e5d_c2r_lib_decref(ll);
			_6e5d_c2r_lib_decref(var);
			return _return;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("auto",4)),1,var),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("Ptr",3)),1,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_Object",20))),3,_6e5d_c2prim_lib_fromBuf("NULL",4))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(localvar,var));
	};
	_6e5d_c2r_lib_decref(stmt);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(slen);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idy);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_decref(var);
	return NULL;
}
static _6e5d_c2r_lib_Object (*mainargs(_6e5d_c2r_lib_Object (*ret))){
	_6e5d_c2r_lib_incref(ret);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("auto",4)),1,_6e5d_c2prim_lib_fromBuf("args",4)),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("Ptr",3)),1,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_Object",20))),3,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_listInit",25)))));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_incref",20)),1,_6e5d_c2prim_lib_fromBuf("args",4))));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_resizeList",27)),1,_6e5d_c2prim_lib_fromBuf("args",4)),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("cast",4)),1,_6e5d_c2prim_lib_fromBuf("size_t",6)),2,_6e5d_c2prim_lib_fromBuf("_c1argc",7)))));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),5),0,_6e5d_c2prim_lib_fromBuf("for",3)),1,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("auto",4)),1,_6e5d_c2prim_lib_fromBuf("idx",3)),2,_6e5d_c2prim_lib_fromBuf("size_t",6)),3,_6e5d_c2prim_lib_fromBuf("0",1))),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("<",1)),1,_6e5d_c2prim_lib_fromBuf("idx",3)),2,_6e5d_c2prim_lib_fromBuf("_c1argc",7))),3,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("+=",2)),1,_6e5d_c2prim_lib_fromBuf("idx",3)),2,_6e5d_c2prim_lib_fromBuf("1",1))),4,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_listSet",24)),1,_6e5d_c2prim_lib_fromBuf("args",4)),2,_6e5d_c2prim_lib_fromBuf("idx",3)),3,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2prim_lib_fromBuf",24)),1,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("@",1)),1,_6e5d_c2prim_lib_fromBuf("_c1argv",7)),2,_6e5d_c2prim_lib_fromBuf("idx",3))),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("strlen",6)),1,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("@",1)),1,_6e5d_c2prim_lib_fromBuf("_c1argv",7)),2,_6e5d_c2prim_lib_fromBuf("idx",3))))))));
	_6e5d_c2r_lib_decref(ret);
	return NULL;
}
static _6e5d_c2r_lib_Object (*func(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*block))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(block);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*localvar) = NULL;
	auto _6e5d_c2r_lib_Object (*cvar) = NULL;
	auto _6e5d_c2r_lib_Object (*name) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*args) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*var) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	_6e5d_c2prim_lib_assign((&localvar),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&cvar),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&name),_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(1)));
	_6e5d_c2prim_lib_assign((&ret),NULL);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(name,_6e5d_c2prim_lib_fromBuf("main",4)))){
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("fn",2)),1,name),2,_6e5d_c2prim_lib_fromBuf("int",3)),3,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_c1argc",7)),1,_6e5d_c2prim_lib_fromBuf("int",3))),1,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_c1argv",7)),1,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("Ptr",3)),1,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("Ptr",3)),1,_6e5d_c2prim_lib_fromBuf("char",4)))))));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("fn",2)),1,name),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("Ptr",3)),1,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_Object",20))),3,cvar));
		_6e5d_c2prim_lib_assign((&args),_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(3)));
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(args)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(args,idx));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(cvar,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,var),1,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("Ptr",3)),1,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_Object",20)))));
		};
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(4),_6e5d_c2prim_lib_length(block)))){
		(_return=ret);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(symmap);
		_6e5d_c2r_lib_decref(block);
		_6e5d_c2r_lib_decref(localvar);
		_6e5d_c2r_lib_decref(cvar);
		_6e5d_c2r_lib_decref(name);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(args);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(var);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(name,_6e5d_c2prim_lib_fromBuf("main",4)))){
		_6e5d_c2r_lib_check0(mainargs(ret));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(localvar,_6e5d_c2prim_lib_fromBuf("args",4)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_assign((&args),_6e5d_c2prim_lib_getItem(block,_6e5d_c2prim_lib_fromU64(3)));
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(args)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(args,idx));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(localvar,var));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_incref",20)),1,var)));
		};
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("auto",4)),1,_6e5d_c2prim_lib_fromBuf("_return",7)),2,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("Ptr",3)),1,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_Object",20))),3,_6e5d_c2prim_lib_fromBuf("NULL",4))));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("cast",4)),1,_6e5d_c2prim_lib_fromBuf("void",4)),2,_6e5d_c2prim_lib_fromBuf("_return",7))));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(block)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_fromU64(4)))){
			continue;
		};
		_6e5d_c2r_lib_check0(varscan(l,localvar,ret));
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(block)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(block,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_fromU64(4)))){
			continue;
		};
		_6e5d_c2r_lib_check0(buildstmt(symmap,localvar,l,ret));
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(localvar)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(localvar,idx));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("_6e5d_c2r_lib_decref",20)),1,var)));
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(name,_6e5d_c2prim_lib_fromBuf("main",4)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("return",6)),1,_6e5d_c2prim_lib_fromBuf("NULL",4))));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(cvar);
	_6e5d_c2r_lib_decref(name);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(args);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(var);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(block);
	_6e5d_c2r_lib_decref(localvar);
	_6e5d_c2r_lib_decref(cvar);
	_6e5d_c2r_lib_decref(name);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(args);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(var);
	_6e5d_c2r_lib_decref(l);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1c0_lib_c1c0(_6e5d_c2r_lib_Object (*blocks))){
	_6e5d_c2r_lib_incref(blocks);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*symmap) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	_6e5d_c2prim_lib_assign((&symmap),_6e5d_c2prim_lib_mapInit());
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf(">",1),_6e5d_c2prim_lib_fromBuf("gt",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf(">=",2),_6e5d_c2prim_lib_fromBuf("ge",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("<",1),_6e5d_c2prim_lib_fromBuf("lt",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("<=",2),_6e5d_c2prim_lib_fromBuf("le",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("==",2),_6e5d_c2prim_lib_fromBuf("eq",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("!=",2),_6e5d_c2prim_lib_fromBuf("ne",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("+",1),_6e5d_c2prim_lib_fromBuf("add",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("-",1),_6e5d_c2prim_lib_fromBuf("sub",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("*",1),_6e5d_c2prim_lib_fromBuf("mul",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("/",1),_6e5d_c2prim_lib_fromBuf("div",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("%",1),_6e5d_c2prim_lib_fromBuf("mod",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("&",1),_6e5d_c2prim_lib_fromBuf("and",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("|",1),_6e5d_c2prim_lib_fromBuf("or",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("^",1),_6e5d_c2prim_lib_fromBuf("xor",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("<<",2),_6e5d_c2prim_lib_fromBuf("shl",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf(">>",2),_6e5d_c2prim_lib_fromBuf("shr",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("!",1),_6e5d_c2prim_lib_fromBuf("lnot",4));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("~",1),_6e5d_c2prim_lib_fromBuf("not",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("-n",2),_6e5d_c2prim_lib_fromBuf("inv",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("@",1),_6e5d_c2prim_lib_fromBuf("getItem",7));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("resize",6),_6e5d_c2prim_lib_fromBuf("resize",6));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("len",3),_6e5d_c2prim_lib_fromBuf("length",6));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->u64",5),_6e5d_c2prim_lib_fromBuf("asU64",5));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->i64",5),_6e5d_c2prim_lib_fromBuf("asI64",5));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->f32",5),_6e5d_c2prim_lib_fromBuf("asF32",5));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->bytes",7),_6e5d_c2prim_lib_fromBuf("asBytes",7));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->list",6),_6e5d_c2prim_lib_fromBuf("asList",6));
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(blocks)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(blocks,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("fn",2),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0))))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(2)),_6e5d_c2prim_lib_fromBuf(".",1))))))){
			_6e5d_c2prim_lib_assign((&l),func(symmap,l));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,l));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(blocks);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(blocks);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	return NULL;
}
