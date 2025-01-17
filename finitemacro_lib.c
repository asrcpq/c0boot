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
_6e5d_c2r_lib_Object (*_6e5d_finitemacro_lib_reportunused(_6e5d_c2r_lib_Object (*all),_6e5d_c2r_lib_Object (*used),_6e5d_c2r_lib_Object (*msg)));
_6e5d_c2r_lib_Object (*_6e5d_finitemacro_lib_substitute(_6e5d_c2r_lib_Object (*args),_6e5d_c2r_lib_Object (*rest),_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*body),_6e5d_c2r_lib_Object (*used)));
static _6e5d_c2r_lib_Object (*procfn(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*body)));
static _6e5d_c2r_lib_Object (*proc(_6e5d_c2r_lib_Object (*macros),_6e5d_c2r_lib_Object (*rest),_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*l)));
_6e5d_c2r_lib_Object (*_6e5d_finitemacro_lib_build(_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*ret)));
_6e5d_c2r_lib_Object (*_6e5d_finitemacro_lib_reportunused(_6e5d_c2r_lib_Object (*all),_6e5d_c2r_lib_Object (*used),_6e5d_c2r_lib_Object (*msg))){
	_6e5d_c2r_lib_incref(all);
	_6e5d_c2r_lib_incref(used);
	_6e5d_c2r_lib_incref(msg);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*missing) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*s) = NULL;
	_6e5d_c2prim_lib_assign((&missing),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&all),_6e5d_c2prim_lib_asList(all));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(all)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&s),_6e5d_c2prim_lib_getItem(all,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(_6e5d_c2prim_lib_getItem(used,s)))))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(missing,s));
		};
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(missing))){
		_6e5d_c2r_lib_decref(all);
		_6e5d_c2r_lib_decref(used);
		_6e5d_c2r_lib_decref(msg);
		_6e5d_c2r_lib_decref(missing);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(s);
		return _return;
	};
	_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("unusedname",10));
	fprintf(stderr," ");
	_6e5d_c2prim_lib_printobj(stderr,msg);
	fprintf(stderr," ");
	_6e5d_c2prim_lib_printobj(stderr,missing);
	_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
	_6e5d_c2r_lib_decref(all);
	_6e5d_c2r_lib_decref(used);
	_6e5d_c2r_lib_decref(msg);
	_6e5d_c2r_lib_decref(missing);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(s);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_finitemacro_lib_substitute(_6e5d_c2r_lib_Object (*args),_6e5d_c2r_lib_Object (*rest),_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*body),_6e5d_c2r_lib_Object (*used))){
	_6e5d_c2r_lib_incref(args);
	_6e5d_c2r_lib_incref(rest);
	_6e5d_c2r_lib_incref(file);
	_6e5d_c2r_lib_incref(body);
	_6e5d_c2r_lib_incref(used);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*val) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*cat) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(body))))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(file)))))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(body,_6e5d_c2prim_lib_fromBuf("_FILE",5))))))){
			(_return=file);
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(args);
			_6e5d_c2r_lib_decref(rest);
			_6e5d_c2r_lib_decref(file);
			_6e5d_c2r_lib_decref(body);
			_6e5d_c2r_lib_decref(used);
			_6e5d_c2r_lib_decref(val);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(cat);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_assign((&val),_6e5d_c2prim_lib_getItem(args,body));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(val))))){
			(_return=body);
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(args);
			_6e5d_c2r_lib_decref(rest);
			_6e5d_c2r_lib_decref(file);
			_6e5d_c2r_lib_decref(body);
			_6e5d_c2r_lib_decref(used);
			_6e5d_c2r_lib_decref(val);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(cat);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_setItem(used,body,_6e5d_c2prim_lib_fromU64(1));
		(_return=val);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(args);
		_6e5d_c2r_lib_decref(rest);
		_6e5d_c2r_lib_decref(file);
		_6e5d_c2r_lib_decref(body);
		_6e5d_c2r_lib_decref(used);
		_6e5d_c2r_lib_decref(val);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(cat);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(body)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(body,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(rest)))))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(l))))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(l,_6e5d_c2prim_lib_fromBuf("_REST",5))))))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(ret,rest));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_finitemacro_lib_substitute(args,rest,file,l,used)));
		};
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(ret)))){
		(_return=_6e5d_c2prim_lib_listInit());
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(args);
		_6e5d_c2r_lib_decref(rest);
		_6e5d_c2r_lib_decref(file);
		_6e5d_c2r_lib_decref(body);
		_6e5d_c2r_lib_decref(used);
		_6e5d_c2r_lib_decref(val);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(cat);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(ret,_6e5d_c2prim_lib_fromU64(0)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(first,_6e5d_c2prim_lib_fromBuf("_STRCAT",7)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(file)))))))){
		(_return=ret);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(args);
		_6e5d_c2r_lib_decref(rest);
		_6e5d_c2r_lib_decref(file);
		_6e5d_c2r_lib_decref(body);
		_6e5d_c2r_lib_decref(used);
		_6e5d_c2r_lib_decref(val);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(cat);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&cat),_6e5d_c2prim_lib_fromBuf("",0));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(ret)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(ret,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(0)))){
			continue;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("substitute _STRCAT failed",25));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,body);
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,ret);
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(cat,l));
	};
	(_return=cat);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(args);
	_6e5d_c2r_lib_decref(rest);
	_6e5d_c2r_lib_decref(file);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(used);
	_6e5d_c2r_lib_decref(val);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(cat);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(args);
	_6e5d_c2r_lib_decref(rest);
	_6e5d_c2r_lib_decref(file);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(used);
	_6e5d_c2r_lib_decref(val);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(cat);
	return NULL;
}
static _6e5d_c2r_lib_Object (*procfn(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*body))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(file);
	_6e5d_c2r_lib_incref(body);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*vars) = NULL;
	auto _6e5d_c2r_lib_Object (*args) = NULL;
	auto _6e5d_c2r_lib_Object (*rest) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*var) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	_6e5d_c2prim_lib_assign((&vars),_6e5d_c2prim_lib_getItem(body,_6e5d_c2prim_lib_fromU64(1)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(vars))),_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(l)))))){
		(_return=NULL);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(file);
		_6e5d_c2r_lib_decref(body);
		_6e5d_c2r_lib_decref(vars);
		_6e5d_c2r_lib_decref(args);
		_6e5d_c2r_lib_decref(rest);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(var);
		_6e5d_c2r_lib_decref(ll);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&args),_6e5d_c2prim_lib_mapInit());
	_6e5d_c2prim_lib_assign((&rest),_6e5d_c2prim_lib_listInit());
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(vars))))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(_6e5d_c2prim_lib_length(l),_6e5d_c2prim_lib_length(vars)))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("insufficient args",17));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,l);
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,vars);
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(vars)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&var),_6e5d_c2prim_lib_getItem(vars,idx));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(0)))){
				continue;
			};
			_6e5d_c2prim_lib_setItem(args,var,_6e5d_c2prim_lib_getItem(l,idx));
		};
		_6e5d_c2prim_lib_assign((&rest),_6e5d_c1str_lib_slice(l,_6e5d_c2prim_lib_length(vars),_6e5d_c2prim_lib_length(l)));
	};
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(body)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&ll),_6e5d_c2prim_lib_getItem(body,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_fromU64(2)))){
			continue;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ll,_6e5d_c2prim_lib_fromBuf("_REST",5)))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(l,rest));
			continue;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(l,_6e5d_finitemacro_lib_substitute(args,rest,file,ll,_6e5d_c2prim_lib_mapInit())));
	};
	(_return=l);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(file);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(vars);
	_6e5d_c2r_lib_decref(args);
	_6e5d_c2r_lib_decref(rest);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(var);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(file);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(vars);
	_6e5d_c2r_lib_decref(args);
	_6e5d_c2r_lib_decref(rest);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(var);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
static _6e5d_c2r_lib_Object (*proc(_6e5d_c2r_lib_Object (*macros),_6e5d_c2r_lib_Object (*rest),_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*l))){
	_6e5d_c2r_lib_incref(macros);
	_6e5d_c2r_lib_incref(rest);
	_6e5d_c2r_lib_incref(file);
	_6e5d_c2r_lib_incref(l);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l2) = NULL;
	auto _6e5d_c2r_lib_Object (*expand) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	_6e5d_c2prim_lib_assign((&l2),NULL);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(l))))){
		_6e5d_c2prim_lib_assign((&expand),_6e5d_c2prim_lib_getItem(macros,l));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(expand))))){
			(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_asBytes(l)));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(macros);
			_6e5d_c2r_lib_decref(rest);
			_6e5d_c2r_lib_decref(file);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(l2);
			_6e5d_c2r_lib_decref(expand);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(ll);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_assign((&l2),procfn(l,file,expand));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(l)))){
			(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,ret));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(macros);
			_6e5d_c2r_lib_decref(rest);
			_6e5d_c2r_lib_decref(file);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(l2);
			_6e5d_c2r_lib_decref(expand);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(ll);
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
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(l)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&ll),_6e5d_c2prim_lib_getItem(l,idx));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(ret,proc(macros,rest,file,ll)));
		};
		_6e5d_c2prim_lib_assign((&l),ret);
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(l)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)))))))))){
			(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,l));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(macros);
			_6e5d_c2r_lib_decref(rest);
			_6e5d_c2r_lib_decref(file);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(l2);
			_6e5d_c2r_lib_decref(expand);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(ll);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_assign((&expand),_6e5d_c2prim_lib_getItem(macros,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0))));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(expand))))){
			(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,l));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(macros);
			_6e5d_c2r_lib_decref(rest);
			_6e5d_c2r_lib_decref(file);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(l2);
			_6e5d_c2r_lib_decref(expand);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(ll);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_assign((&l2),procfn(l,file,expand));
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(l2))))){
		(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,l));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(macros);
		_6e5d_c2r_lib_decref(rest);
		_6e5d_c2r_lib_decref(file);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(l2);
		_6e5d_c2r_lib_decref(expand);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(ll);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(l2))))){
		(_return=proc(macros,NULL,file,l2));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(macros);
		_6e5d_c2r_lib_decref(rest);
		_6e5d_c2r_lib_decref(file);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(l2);
		_6e5d_c2r_lib_decref(expand);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(ll);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(l2)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&ll),_6e5d_c2prim_lib_getItem(l2,idx));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(ret,proc(macros,NULL,file,ll)));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(macros);
	_6e5d_c2r_lib_decref(rest);
	_6e5d_c2r_lib_decref(file);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(l2);
	_6e5d_c2r_lib_decref(expand);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(macros);
	_6e5d_c2r_lib_decref(rest);
	_6e5d_c2r_lib_decref(file);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(l2);
	_6e5d_c2r_lib_decref(expand);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_finitemacro_lib_build(_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*ret))){
	_6e5d_c2r_lib_incref(file);
	_6e5d_c2r_lib_incref(obj);
	_6e5d_c2r_lib_incref(ret);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*macros) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*name) = NULL;
	_6e5d_c2prim_lib_assign((&macros),_6e5d_c2prim_lib_mapInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(obj)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(obj,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(l))))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(l)))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("macro",5),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)))))))){
			_6e5d_c2prim_lib_assign((&name),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1)));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(name))))){
				_6e5d_c2prim_lib_assign((&name),_6e5d_c2prim_lib_getItem(name,_6e5d_c2prim_lib_fromU64(0)));
			};
			_6e5d_c2prim_lib_setItem(macros,name,l);
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,l));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(ret,proc(macros,NULL,file,l)));
		};
	};
	_6e5d_c2r_lib_decref(file);
	_6e5d_c2r_lib_decref(obj);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(macros);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(name);
	return NULL;
}
