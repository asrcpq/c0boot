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
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_contains(_6e5d_c2r_lib_Object (*li),_6e5d_c2r_lib_Object (*item)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_startswith(_6e5d_c2r_lib_Object (*s1),_6e5d_c2r_lib_Object (*s2)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_endswith(_6e5d_c2r_lib_Object (*s1),_6e5d_c2r_lib_Object (*s2)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_rstrip(_6e5d_c2r_lib_Object (*by),_6e5d_c2r_lib_Object (*chars)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lstripped(_6e5d_c2r_lib_Object (*by),_6e5d_c2r_lib_Object (*chars)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_stripped(_6e5d_c2r_lib_Object (*by),_6e5d_c2r_lib_Object (*chars)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_pop(_6e5d_c2r_lib_Object (*l)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_push(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*x)));
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
static _6e5d_c2r_lib_Object (*swap(_6e5d_c2r_lib_Object (*a),_6e5d_c2r_lib_Object (*x),_6e5d_c2r_lib_Object (*y)));
static _6e5d_c2r_lib_Object (*sort2(_6e5d_c2r_lib_Object (*array),_6e5d_c2r_lib_Object (*left),_6e5d_c2r_lib_Object (*right),_6e5d_c2r_lib_Object (*op)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_sort(_6e5d_c2r_lib_Object (*array),_6e5d_c2r_lib_Object (*op)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_ledump(_6e5d_c2r_lib_Object (*v),_6e5d_c2r_lib_Object (*buf)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_n2h(_6e5d_c2r_lib_Object (*n)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_hexdump(_6e5d_c2r_lib_Object (*b)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lfind(_6e5d_c2r_lib_Object (*h),_6e5d_c2r_lib_Object (*n)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_contains(_6e5d_c2r_lib_Object (*li),_6e5d_c2r_lib_Object (*item))){
	_6e5d_c2r_lib_incref(li);
	_6e5d_c2r_lib_incref(item);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(li));
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(item,_6e5d_c2prim_lib_getItem(li,idx)))){
			(_return=_6e5d_c2prim_lib_fromU64(1));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(li);
			_6e5d_c2r_lib_decref(item);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	(_return=_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(li);
	_6e5d_c2r_lib_decref(item);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(li);
	_6e5d_c2r_lib_decref(item);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idx);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_startswith(_6e5d_c2r_lib_Object (*s1),_6e5d_c2r_lib_Object (*s2))){
	_6e5d_c2r_lib_incref(s1);
	_6e5d_c2r_lib_incref(s2);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l1) = NULL;
	auto _6e5d_c2r_lib_Object (*l2) = NULL;
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&l1),_6e5d_c2prim_lib_length(s1));
	_6e5d_c2prim_lib_assign((&l2),_6e5d_c2prim_lib_length(s2));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l2))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,l1))){
			(_return=_6e5d_c2prim_lib_fromU64(0));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(s1);
			_6e5d_c2r_lib_decref(s2);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l1);
			_6e5d_c2r_lib_decref(l2);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_getItem(s1,idx),_6e5d_c2prim_lib_getItem(s2,idx)))){
			(_return=_6e5d_c2prim_lib_fromU64(0));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(s1);
			_6e5d_c2r_lib_decref(s2);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l1);
			_6e5d_c2r_lib_decref(l2);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	(_return=_6e5d_c2prim_lib_fromU64(1));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(s1);
	_6e5d_c2r_lib_decref(s2);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l1);
	_6e5d_c2r_lib_decref(l2);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(s1);
	_6e5d_c2r_lib_decref(s2);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l1);
	_6e5d_c2r_lib_decref(l2);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_endswith(_6e5d_c2r_lib_Object (*s1),_6e5d_c2r_lib_Object (*s2))){
	_6e5d_c2r_lib_incref(s1);
	_6e5d_c2r_lib_incref(s2);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l1) = NULL;
	auto _6e5d_c2r_lib_Object (*l2) = NULL;
	_6e5d_c2prim_lib_assign((&l1),_6e5d_c2prim_lib_length(s1));
	_6e5d_c2prim_lib_assign((&l2),_6e5d_c2prim_lib_length(s2));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(l1,l2))){
		(_return=_6e5d_c2prim_lib_fromU64(0));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(s1);
		_6e5d_c2r_lib_decref(s2);
		_6e5d_c2r_lib_decref(l1);
		_6e5d_c2r_lib_decref(l2);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(l2,_6e5d_c2prim_lib_fromU64(0)))){
			(_return=_6e5d_c2prim_lib_fromU64(1));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(s1);
			_6e5d_c2r_lib_decref(s2);
			_6e5d_c2r_lib_decref(l1);
			_6e5d_c2r_lib_decref(l2);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_assign((&l2),_6e5d_c2prim_lib_sub(l2,_6e5d_c2prim_lib_fromU64(1)));
		_6e5d_c2prim_lib_assign((&l1),_6e5d_c2prim_lib_sub(l1,_6e5d_c2prim_lib_fromU64(1)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_getItem(s1,l1),_6e5d_c2prim_lib_getItem(s2,l2)))){
			(_return=_6e5d_c2prim_lib_fromU64(0));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(s1);
			_6e5d_c2r_lib_decref(s2);
			_6e5d_c2r_lib_decref(l1);
			_6e5d_c2r_lib_decref(l2);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
	};
	_6e5d_c2r_lib_decref(s1);
	_6e5d_c2r_lib_decref(s2);
	_6e5d_c2r_lib_decref(l1);
	_6e5d_c2r_lib_decref(l2);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_rstrip(_6e5d_c2r_lib_Object (*by),_6e5d_c2r_lib_Object (*chars))){
	_6e5d_c2r_lib_incref(by);
	_6e5d_c2r_lib_incref(chars);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(by)))))){
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(by));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(l,_6e5d_c2prim_lib_fromU64(0)))){
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_sub(l,_6e5d_c2prim_lib_fromU64(1)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c1str_lib_contains(chars,_6e5d_c2prim_lib_getItem(by,l))))){
			break;
		};
		_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(by,l));
	};
	_6e5d_c2r_lib_decref(by);
	_6e5d_c2r_lib_decref(chars);
	_6e5d_c2r_lib_decref(l);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lstripped(_6e5d_c2r_lib_Object (*by),_6e5d_c2r_lib_Object (*chars))){
	_6e5d_c2r_lib_incref(by);
	_6e5d_c2r_lib_incref(chars);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(by));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c1str_lib_contains(chars,_6e5d_c2prim_lib_getItem(by,idx))))){
			break;
		};
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	(_return=_6e5d_c1str_lib_slice(by,idx,l));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(by);
	_6e5d_c2r_lib_decref(chars);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(by);
	_6e5d_c2r_lib_decref(chars);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_stripped(_6e5d_c2r_lib_Object (*by),_6e5d_c2r_lib_Object (*chars))){
	_6e5d_c2r_lib_incref(by);
	_6e5d_c2r_lib_incref(chars);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c1str_lib_lstripped(by,chars));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_rstrip(ret,chars));
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(by);
	_6e5d_c2r_lib_decref(chars);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(by);
	_6e5d_c2r_lib_decref(chars);
	_6e5d_c2r_lib_decref(ret);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_pop(_6e5d_c2r_lib_Object (*l))){
	_6e5d_c2r_lib_incref(l);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*length) = NULL;
	auto _6e5d_c2r_lib_Object (*obj) = NULL;
	_6e5d_c2prim_lib_assign((&length),_6e5d_c2prim_lib_length(l));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(length,_6e5d_c2prim_lib_fromU64(0)))){
		(_return=NULL);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(length);
		_6e5d_c2r_lib_decref(obj);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&length),_6e5d_c2prim_lib_sub(length,_6e5d_c2prim_lib_fromU64(1)));
	_6e5d_c2prim_lib_assign((&obj),_6e5d_c2prim_lib_getItem(l,length));
	_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(l,length));
	(_return=obj);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(length);
	_6e5d_c2r_lib_decref(obj);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(length);
	_6e5d_c2r_lib_decref(obj);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_push(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*x))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(x);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*length) = NULL;
	_6e5d_c2prim_lib_assign((&length),_6e5d_c2prim_lib_length(l));
	_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(l,_6e5d_c2prim_lib_add(length,_6e5d_c2prim_lib_fromU64(1))));
	_6e5d_c2prim_lib_setItem(l,length,x);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(x);
	_6e5d_c2r_lib_decref(length);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_reverse(_6e5d_c2r_lib_Object (*a))){
	_6e5d_c2r_lib_incref(a);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*i) = NULL;
	auto _6e5d_c2r_lib_Object (*j) = NULL;
	auto _6e5d_c2r_lib_Object (*c) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(a)))){
		(_return=a);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(a);
		_6e5d_c2r_lib_decref(i);
		_6e5d_c2r_lib_decref(j);
		_6e5d_c2r_lib_decref(c);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&i),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&j),_6e5d_c2prim_lib_sub(_6e5d_c2prim_lib_length(a),_6e5d_c2prim_lib_fromU64(1)));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(i,j))){
		_6e5d_c2prim_lib_assign((&c),_6e5d_c2prim_lib_getItem(a,j));
		_6e5d_c2prim_lib_setItem(a,j,_6e5d_c2prim_lib_getItem(a,i));
		_6e5d_c2prim_lib_setItem(a,i,c);
		_6e5d_c2prim_lib_assign((&i),_6e5d_c2prim_lib_add(i,_6e5d_c2prim_lib_fromU64(1)));
		_6e5d_c2prim_lib_assign((&j),_6e5d_c2prim_lib_sub(j,_6e5d_c2prim_lib_fromU64(1)));
	};
	_6e5d_c2r_lib_decref(a);
	_6e5d_c2r_lib_decref(i);
	_6e5d_c2r_lib_decref(j);
	_6e5d_c2r_lib_decref(c);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_splitws(_6e5d_c2r_lib_Object (*s))){
	_6e5d_c2r_lib_incref(s);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*prev) = NULL;
	auto _6e5d_c2r_lib_Object (*ch) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(s));
	_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_fromU64(0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_le(idx,l))){
		_6e5d_c2prim_lib_assign((&ch),_6e5d_c2prim_lib_fromU64(0));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l))){
			_6e5d_c2prim_lib_assign((&ch),_6e5d_c2prim_lib_getItem(s,idx));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,l))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ch,_6e5d_c2prim_lib_fromU64(32)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ch,_6e5d_c2prim_lib_fromU64(9)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ch,_6e5d_c2prim_lib_fromU64(10)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ch,_6e5d_c2prim_lib_fromU64(13))))))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(idx,prev))){
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c1str_lib_slice(s,prev,idx)));
			};
			_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(prev);
	_6e5d_c2r_lib_decref(ch);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(prev);
	_6e5d_c2r_lib_decref(ch);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_splitoff(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*idx))){
	_6e5d_c2r_lib_incref(s);
	_6e5d_c2r_lib_incref(idx);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*remain) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c1str_lib_slice(s,_6e5d_c2prim_lib_fromU64(0),idx));
	_6e5d_c2prim_lib_assign((&remain),_6e5d_c1str_lib_slice(s,idx,_6e5d_c2prim_lib_length(s)));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_bufcopy(remain,s));
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(remain);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(remain);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_split(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim))){
	_6e5d_c2r_lib_incref(s);
	_6e5d_c2r_lib_incref(delim);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*prev) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ch) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(s)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&ch),_6e5d_c2prim_lib_getItem(s,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(ch,delim))){
			continue;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c1str_lib_slice(s,prev,idx)));
		_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c1str_lib_slice(s,prev,_6e5d_c2prim_lib_length(s))));
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(delim);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(prev);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ch);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(delim);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(prev);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ch);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lsplit(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim),_6e5d_c2r_lib_Object (*times))){
	_6e5d_c2r_lib_incref(s);
	_6e5d_c2r_lib_incref(delim);
	_6e5d_c2r_lib_incref(times);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*pos) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,times))){
		_6e5d_c2prim_lib_assign((&pos),_6e5d_c1str_lib_lindex(s,delim));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(pos))))){
			break;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,_6e5d_c1str_lib_slice(s,_6e5d_c2prim_lib_fromU64(0),pos)));
		_6e5d_c2prim_lib_assign((&s),_6e5d_c1str_lib_slice(s,_6e5d_c2prim_lib_add(pos,_6e5d_c2prim_lib_fromU64(1)),_6e5d_c2prim_lib_length(s)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(s))))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,s));
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(delim);
	_6e5d_c2r_lib_decref(times);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(pos);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(delim);
	_6e5d_c2r_lib_decref(times);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(pos);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_rsplit(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim),_6e5d_c2r_lib_Object (*times))){
	_6e5d_c2r_lib_incref(s);
	_6e5d_c2r_lib_incref(delim);
	_6e5d_c2r_lib_incref(times);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*pos) = NULL;
	auto _6e5d_c2r_lib_Object (*s2) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,times))){
		_6e5d_c2prim_lib_assign((&pos),_6e5d_c1str_lib_rindex(s,delim));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(pos))))){
			break;
		};
		_6e5d_c2prim_lib_assign((&s2),_6e5d_c1str_lib_slice(s,_6e5d_c2prim_lib_add(pos,_6e5d_c2prim_lib_fromU64(1)),_6e5d_c2prim_lib_length(s)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,s2));
		_6e5d_c2prim_lib_assign((&s),_6e5d_c1str_lib_slice(s,_6e5d_c2prim_lib_fromU64(0),pos));
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,s));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_reverse(ret));
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(delim);
	_6e5d_c2r_lib_decref(times);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(pos);
	_6e5d_c2r_lib_decref(s2);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(delim);
	_6e5d_c2r_lib_decref(times);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(pos);
	_6e5d_c2r_lib_decref(s2);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_bufcopy(_6e5d_c2r_lib_Object (*f),_6e5d_c2r_lib_Object (*t))){
	_6e5d_c2r_lib_incref(f);
	_6e5d_c2r_lib_incref(t);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(f));
	_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(t,l));
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l))){
		_6e5d_c2prim_lib_setItem(t,idx,_6e5d_c2prim_lib_getItem(f,idx));
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	_6e5d_c2r_lib_decref(f);
	_6e5d_c2r_lib_decref(t);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idx);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_slice(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*i1),_6e5d_c2r_lib_Object (*i2))){
	_6e5d_c2r_lib_incref(s);
	_6e5d_c2r_lib_incref(i1);
	_6e5d_c2r_lib_incref(i2);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*l2) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(s));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(i2,l))){
		_6e5d_c2prim_lib_assign((&i2),l);
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(i1,i2))){
		(_return=_6e5d_c2prim_lib_fromBuf("",0));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(s);
		_6e5d_c2r_lib_decref(i1);
		_6e5d_c2r_lib_decref(i2);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(l2);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&l2),_6e5d_c2prim_lib_sub(i2,i1));
	_6e5d_c2prim_lib_assign((&ret),NULL);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(s))))){
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(s))))){
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_fromBuf("",0));
	};
	_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(ret,l2));
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l2))){
		_6e5d_c2prim_lib_setItem(ret,idx,_6e5d_c2prim_lib_getItem(s,_6e5d_c2prim_lib_add(i1,idx)));
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(i1);
	_6e5d_c2r_lib_decref(i2);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(l2);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(i1);
	_6e5d_c2r_lib_decref(i2);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(l2);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lindex(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*item))){
	_6e5d_c2r_lib_incref(s);
	_6e5d_c2r_lib_incref(item);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(s));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(s,idx),item))){
			(_return=idx);
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(s);
			_6e5d_c2r_lib_decref(item);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	(_return=NULL);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(item);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(item);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_rindex(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*item))){
	_6e5d_c2r_lib_incref(s);
	_6e5d_c2r_lib_incref(item);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_length(s));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(idx,_6e5d_c2prim_lib_fromU64(0)))){
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_sub(idx,_6e5d_c2prim_lib_fromU64(1)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(s,idx),item))){
			(_return=idx);
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(s);
			_6e5d_c2r_lib_decref(item);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
	};
	(_return=NULL);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(item);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(item);
	_6e5d_c2r_lib_decref(idx);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_append(_6e5d_c2r_lib_Object (*s1),_6e5d_c2r_lib_Object (*s2))){
	_6e5d_c2r_lib_incref(s1);
	_6e5d_c2r_lib_incref(s2);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l1) = NULL;
	auto _6e5d_c2r_lib_Object (*l2) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	_6e5d_c2prim_lib_assign((&l1),_6e5d_c2prim_lib_length(s1));
	_6e5d_c2prim_lib_assign((&l2),_6e5d_c2prim_lib_length(s2));
	_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(s1,_6e5d_c2prim_lib_add(l1,l2)));
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l2))){
		_6e5d_c2prim_lib_setItem(s1,_6e5d_c2prim_lib_add(idx,l1),_6e5d_c2prim_lib_getItem(s2,idx));
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	_6e5d_c2r_lib_decref(s1);
	_6e5d_c2r_lib_decref(s2);
	_6e5d_c2r_lib_decref(l1);
	_6e5d_c2r_lib_decref(l2);
	_6e5d_c2r_lib_decref(idx);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_join2(_6e5d_c2r_lib_Object (*delim),_6e5d_c2r_lib_Object (*lists))){
	_6e5d_c2r_lib_incref(delim);
	_6e5d_c2r_lib_incref(lists);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(lists));
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_fromBuf("",0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(idx,_6e5d_c2prim_lib_fromU64(0)))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(ret,delim));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(ret,_6e5d_c2prim_lib_getItem(lists,idx)));
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(delim);
	_6e5d_c2r_lib_decref(lists);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(delim);
	_6e5d_c2r_lib_decref(lists);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ret);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_join(_6e5d_c2r_lib_Object (*lists))){
	_6e5d_c2r_lib_incref(lists);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(lists));
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_fromBuf("",0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(ret,_6e5d_c2prim_lib_getItem(lists,idx)));
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(lists);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(lists);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ret);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_swaprm(_6e5d_c2r_lib_Object (*li),_6e5d_c2r_lib_Object (*idx))){
	_6e5d_c2r_lib_incref(li);
	_6e5d_c2r_lib_incref(idx);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*rm) = NULL;
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(li));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,l))){
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&rm),_6e5d_c2prim_lib_getItem(li,idx));
	_6e5d_c2prim_lib_setItem(li,idx,_6e5d_c2prim_lib_getItem(li,_6e5d_c2prim_lib_sub(l,_6e5d_c2prim_lib_fromU64(1))));
	_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(li,_6e5d_c2prim_lib_sub(l,_6e5d_c2prim_lib_fromU64(1))));
	(_return=rm);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(li);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(rm);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(li);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(rm);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lower(_6e5d_c2r_lib_Object (*s))){
	_6e5d_c2r_lib_incref(s);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*c) = NULL;
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(s));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,l))){
		_6e5d_c2prim_lib_assign((&c),_6e5d_c2prim_lib_getItem(s,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(c,_6e5d_c2prim_lib_fromU64(65)))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_le(c,_6e5d_c2prim_lib_fromU64(90))))))){
			_6e5d_c2prim_lib_setItem(s,idx,_6e5d_c2prim_lib_add(_6e5d_c2prim_lib_fromU64(97),_6e5d_c2prim_lib_sub(c,_6e5d_c2prim_lib_fromU64(65))));
		};
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(c);
	return NULL;
}
static _6e5d_c2r_lib_Object (*swap(_6e5d_c2r_lib_Object (*a),_6e5d_c2r_lib_Object (*x),_6e5d_c2r_lib_Object (*y))){
	_6e5d_c2r_lib_incref(a);
	_6e5d_c2r_lib_incref(x);
	_6e5d_c2r_lib_incref(y);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*tmp) = NULL;
	_6e5d_c2prim_lib_assign((&tmp),_6e5d_c2prim_lib_getItem(a,x));
	_6e5d_c2prim_lib_setItem(a,x,_6e5d_c2prim_lib_getItem(a,y));
	_6e5d_c2prim_lib_setItem(a,y,tmp);
	_6e5d_c2r_lib_decref(a);
	_6e5d_c2r_lib_decref(x);
	_6e5d_c2r_lib_decref(y);
	_6e5d_c2r_lib_decref(tmp);
	return NULL;
}
static _6e5d_c2r_lib_Object (*sort2(_6e5d_c2r_lib_Object (*array),_6e5d_c2r_lib_Object (*left),_6e5d_c2r_lib_Object (*right),_6e5d_c2r_lib_Object (*op))){
	_6e5d_c2r_lib_incref(array);
	_6e5d_c2r_lib_incref(left);
	_6e5d_c2r_lib_incref(right);
	_6e5d_c2r_lib_incref(op);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*cmp) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*idy) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(left,right))){
		_6e5d_c2r_lib_decref(array);
		_6e5d_c2r_lib_decref(left);
		_6e5d_c2r_lib_decref(right);
		_6e5d_c2r_lib_decref(op);
		_6e5d_c2r_lib_decref(cmp);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(idy);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_assign((&cmp),_6e5d_c2prim_lib_getItem(array,right));
		_6e5d_c2prim_lib_assign((&idx),left);
		_6e5d_c2prim_lib_assign((&idy),right);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,idy))){
			if(_6e5d_c2prim_lib_toBool(((_6e5d_c2r_lib_Object (*(*)(_6e5d_c2r_lib_Object (*),_6e5d_c2r_lib_Object (*))))_6e5d_c2prim_lib_toFn(op))(cmp,_6e5d_c2prim_lib_getItem(array,idx)))){
				_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_sub(idy,_6e5d_c2prim_lib_fromU64(1)));
				_6e5d_c2r_lib_check0(swap(array,idx,idy));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
		};
		_6e5d_c2r_lib_check0(swap(array,idx,right));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(idx,_6e5d_c2prim_lib_fromU64(0)))){
			_6e5d_c2r_lib_check0(sort2(array,left,_6e5d_c2prim_lib_sub(idx,_6e5d_c2prim_lib_fromU64(1)),op));
		};
		_6e5d_c2r_lib_check0(sort2(array,_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)),right,op));
	};
	_6e5d_c2r_lib_decref(array);
	_6e5d_c2r_lib_decref(left);
	_6e5d_c2r_lib_decref(right);
	_6e5d_c2r_lib_decref(op);
	_6e5d_c2r_lib_decref(cmp);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(idy);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_sort(_6e5d_c2r_lib_Object (*array),_6e5d_c2r_lib_Object (*op))){
	_6e5d_c2r_lib_incref(array);
	_6e5d_c2r_lib_incref(op);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(array)))))){
		(_return=NULL);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(array);
		_6e5d_c2r_lib_decref(op);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(array));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),l))){
		(_return=_6e5d_c2prim_lib_listInit());
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(array);
		_6e5d_c2r_lib_decref(op);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2r_lib_check0(sort2(array,_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_sub(l,_6e5d_c2prim_lib_fromU64(1)),op));
	_6e5d_c2r_lib_decref(array);
	_6e5d_c2r_lib_decref(op);
	_6e5d_c2r_lib_decref(l);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_ledump(_6e5d_c2r_lib_Object (*v),_6e5d_c2r_lib_Object (*buf))){
	_6e5d_c2r_lib_incref(v);
	_6e5d_c2r_lib_incref(buf);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((1==_6e5d_c2prim_lib_tid(v))))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(buf,v));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(buf,_6e5d_c2prim_lib_shr(v,_6e5d_c2prim_lib_fromU64(8))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(buf,_6e5d_c2prim_lib_shr(v,_6e5d_c2prim_lib_fromU64(16))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(buf,_6e5d_c2prim_lib_shr(v,_6e5d_c2prim_lib_fromU64(24))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(buf,_6e5d_c2prim_lib_shr(v,_6e5d_c2prim_lib_fromU64(32))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(buf,_6e5d_c2prim_lib_shr(v,_6e5d_c2prim_lib_fromU64(40))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(buf,_6e5d_c2prim_lib_shr(v,_6e5d_c2prim_lib_fromU64(48))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(buf,_6e5d_c2prim_lib_shr(v,_6e5d_c2prim_lib_fromU64(56))));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2r_lib_decref(v);
	_6e5d_c2r_lib_decref(buf);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_n2h(_6e5d_c2r_lib_Object (*n))){
	_6e5d_c2r_lib_incref(n);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(n,_6e5d_c2prim_lib_fromU64(10)))){
		(_return=_6e5d_c2prim_lib_add(_6e5d_c2prim_lib_fromU64(48),n));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(n);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		(_return=_6e5d_c2prim_lib_add(_6e5d_c2prim_lib_fromU64(97),_6e5d_c2prim_lib_sub(n,_6e5d_c2prim_lib_fromU64(10))));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(n);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2r_lib_decref(n);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_hexdump(_6e5d_c2r_lib_Object (*b))){
	_6e5d_c2r_lib_incref(b);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*out) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*bb) = NULL;
	_6e5d_c2prim_lib_assign((&out),_6e5d_c2prim_lib_fromBuf("",0));
	_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(out,_6e5d_c2prim_lib_mul(_6e5d_c2prim_lib_fromU64(2),_6e5d_c2prim_lib_length(b))));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(b)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&bb),_6e5d_c2prim_lib_getItem(b,idx));
		_6e5d_c2prim_lib_setItem(out,_6e5d_c2prim_lib_mul(_6e5d_c2prim_lib_fromU64(2),idx),_6e5d_c1str_lib_n2h(_6e5d_c2prim_lib_div(bb,_6e5d_c2prim_lib_fromU64(16))));
		_6e5d_c2prim_lib_setItem(out,_6e5d_c2prim_lib_add(_6e5d_c2prim_lib_fromU64(1),_6e5d_c2prim_lib_mul(_6e5d_c2prim_lib_fromU64(2),idx)),_6e5d_c1str_lib_n2h(_6e5d_c2prim_lib_mod(bb,_6e5d_c2prim_lib_fromU64(16))));
	};
	(_return=out);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(b);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(bb);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(b);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(bb);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lfind(_6e5d_c2r_lib_Object (*h),_6e5d_c2r_lib_Object (*n))){
	_6e5d_c2r_lib_incref(h);
	_6e5d_c2r_lib_incref(n);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*lps) = NULL;
	auto _6e5d_c2r_lib_Object (*prev) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*nn) = NULL;
	auto _6e5d_c2r_lib_Object (*jumpback) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(n)))){
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&lps),_6e5d_c2prim_lib_listInit());
	_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(lps,_6e5d_c2prim_lib_length(n)));
	_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(n)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&nn),_6e5d_c2prim_lib_getItem(n,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(0)))){
			_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(nn,_6e5d_c2prim_lib_getItem(n,prev)))){
			_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_add(prev,_6e5d_c2prim_lib_fromU64(1)));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_fromU64(0));
		};
		_6e5d_c2prim_lib_setItem(lps,idx,prev);
	};
	_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_length(h)))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(h,idx),_6e5d_c2prim_lib_getItem(n,prev)))){
			_6e5d_c2prim_lib_assign((&prev),_6e5d_c2prim_lib_add(prev,_6e5d_c2prim_lib_fromU64(1)));
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(prev,_6e5d_c2prim_lib_length(n)))){
				(_return=_6e5d_c2prim_lib_sub(idx,prev));
				_6e5d_c2r_lib_incref(_return);
				_6e5d_c2r_lib_decref(h);
				_6e5d_c2r_lib_decref(n);
				_6e5d_c2r_lib_decref(lps);
				_6e5d_c2r_lib_decref(prev);
				_6e5d_c2r_lib_decref(idx);
				_6e5d_c2r_lib_decref(nn);
				_6e5d_c2r_lib_decref(jumpback);
				_6e5d_c2r_lib_deconly(_return);
				return _return;
			};
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(prev,_6e5d_c2prim_lib_fromU64(0)))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&jumpback),_6e5d_c2prim_lib_fromU64(0));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(prev,_6e5d_c2prim_lib_fromU64(0)))){
				_6e5d_c2prim_lib_assign((&jumpback),_6e5d_c2prim_lib_getItem(lps,_6e5d_c2prim_lib_sub(prev,_6e5d_c2prim_lib_fromU64(1))));
			};
			_6e5d_c2prim_lib_assign((&prev),jumpback);
		};
	};
	(_return=NULL);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(h);
	_6e5d_c2r_lib_decref(n);
	_6e5d_c2r_lib_decref(lps);
	_6e5d_c2r_lib_decref(prev);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(nn);
	_6e5d_c2r_lib_decref(jumpback);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(h);
	_6e5d_c2r_lib_decref(n);
	_6e5d_c2r_lib_decref(lps);
	_6e5d_c2r_lib_decref(prev);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(nn);
	_6e5d_c2r_lib_decref(jumpback);
	return NULL;
}
