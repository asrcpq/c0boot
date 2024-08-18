#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
typedef struct _6e5d_vec_Vec _6e5d_vec_Vec;
typedef struct _6e5d_hashmap_Hashmap _6e5d_hashmap_Hashmap;
typedef union _6e5d_c2r_Value _6e5d_c2r_Value;
typedef struct _6e5d_c2r_Object _6e5d_c2r_Object;
struct _6e5d_vec_Vec{
	size_t size;
	size_t capacity;
	size_t len;
	void (*p);
};
struct _6e5d_hashmap_Hashmap{
	size_t size_key;
	size_t size_value;
	size_t size_entry;
	size_t len;
	void (*buckets);
	uint8_t bitshift;
	uint64_t (*hasher)(void (*),size_t );
	bool (*eq)(void (*),void (*),size_t );
};
union _6e5d_c2r_Value{
	int64_t i64;
	uint64_t u64;
	float f32;
	void (*pfn)(void );
	_6e5d_vec_Vec (*v);
	_6e5d_hashmap_Hashmap (*map);
	uint8_t (*lbuf);
};
struct _6e5d_c2r_Object{
	_6e5d_c2r_Value value;
	uint32_t rc;
	int8_t ty;
};
_6e5d_c2r_Object (*_6e5d_c2r_incref(_6e5d_c2r_Object (*po)));
void _6e5d_c2r_decref(_6e5d_c2r_Object (*po));
void _6e5d_c2r_check(_6e5d_c2r_Object (*po));
void _6e5d_c2r_deconly(_6e5d_c2r_Object (*po));
_6e5d_c2r_Object (*_6e5d_c2prim_length(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_getItem(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index)));
_6e5d_c2r_Object (*_6e5d_c2prim_setItem(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index),_6e5d_c2r_Object (*value)));
_6e5d_c2r_Object (*_6e5d_c2prim_resize(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*vlen)));
_6e5d_c2r_Object (*_6e5d_c2prim_add(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_sub(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_mul(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_div(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_mod(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_shl(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_shr(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_neg(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_not(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_lt(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_gt(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_le(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_ge(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_eq(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_ne(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_isBytes(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isU64(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isI64(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isNil(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isList(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isF32(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_bytesInit());
_6e5d_c2r_Object (*_6e5d_c2prim_listInit());
_6e5d_c2r_Object (*_6e5d_c2prim_mapInit());
_6e5d_c2r_Object (*_6e5d_c2prim_fromI64(int64_t val));
_6e5d_c2r_Object (*_6e5d_c2prim_fromU64(uint64_t val));
_6e5d_c2r_Object (*_6e5d_c2prim_fromF32(float val));
_6e5d_c2r_Object (*_6e5d_c2prim_fromBool(bool val));
_6e5d_c2r_Object (*_6e5d_c2prim_fromBuf(void (*p),size_t len));
_6e5d_c2r_Object (*_6e5d_c2prim_fromFn(void (*f)(void )));
int64_t _6e5d_c2prim_toI64(_6e5d_c2r_Object (*obj));
uint64_t _6e5d_c2prim_toU64(_6e5d_c2r_Object (*obj));
float _6e5d_c2prim_toF32(_6e5d_c2r_Object (*obj));
bool _6e5d_c2prim_toBool(_6e5d_c2r_Object (*obj));
_6e5d_c2r_Object (*_6e5d_c2prim_asI64(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_asU64(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_asBytes(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_asList(_6e5d_c2r_Object (*obj)));
void _6e5d_c2prim_listSet(_6e5d_c2r_Object (*obj),size_t index,_6e5d_c2r_Object (*value));
void _6e5d_c2prim_resizeList(_6e5d_c2r_Object (*obj),size_t len);
_6e5d_c2r_Object (*_6e5d_c2prim_printobj(int fd,_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1str_contains(_6e5d_c2r_Object (*li),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*_6e5d_c1str_startswith(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2)));
_6e5d_c2r_Object (*_6e5d_c1str_endswith(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2)));
_6e5d_c2r_Object (*_6e5d_c1str_rstrip(_6e5d_c2r_Object (*by),_6e5d_c2r_Object (*chars)));
_6e5d_c2r_Object (*_6e5d_c1str_lstripped(_6e5d_c2r_Object (*by),_6e5d_c2r_Object (*chars)));
_6e5d_c2r_Object (*_6e5d_c1str_stripped(_6e5d_c2r_Object (*by),_6e5d_c2r_Object (*chars)));
_6e5d_c2r_Object (*_6e5d_c1str_pop(_6e5d_c2r_Object (*l)));
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x)));
_6e5d_c2r_Object (*_6e5d_c1str_reverse(_6e5d_c2r_Object (*a)));
_6e5d_c2r_Object (*_6e5d_c1str_splitws(_6e5d_c2r_Object (*s)));
_6e5d_c2r_Object (*_6e5d_c1str_splitoff(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*idx)));
_6e5d_c2r_Object (*_6e5d_c1str_split(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*delim)));
_6e5d_c2r_Object (*_6e5d_c1str_lsplit(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*delim),_6e5d_c2r_Object (*times)));
_6e5d_c2r_Object (*_6e5d_c1str_rsplit(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*delim),_6e5d_c2r_Object (*times)));
_6e5d_c2r_Object (*_6e5d_c1str_bufcopy(_6e5d_c2r_Object (*f),_6e5d_c2r_Object (*t)));
_6e5d_c2r_Object (*_6e5d_c1str_slice(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*i1),_6e5d_c2r_Object (*i2)));
_6e5d_c2r_Object (*_6e5d_c1str_lindex(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*_6e5d_c1str_rindex(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*_6e5d_c1str_append(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2)));
_6e5d_c2r_Object (*_6e5d_c1str_join2(_6e5d_c2r_Object (*delim),_6e5d_c2r_Object (*lists)));
_6e5d_c2r_Object (*_6e5d_c1str_join(_6e5d_c2r_Object (*lists)));
_6e5d_c2r_Object (*_6e5d_c1str_swaprm(_6e5d_c2r_Object (*li),_6e5d_c2r_Object (*idx)));
_6e5d_c2r_Object (*_6e5d_c1str_lower(_6e5d_c2r_Object (*s)));
_6e5d_c2r_Object (*swap(_6e5d_c2r_Object (*a),_6e5d_c2r_Object (*x),_6e5d_c2r_Object (*y)));
_6e5d_c2r_Object (*sort2(_6e5d_c2r_Object (*array),_6e5d_c2r_Object (*left),_6e5d_c2r_Object (*right),_6e5d_c2r_Object (*op)));
_6e5d_c2r_Object (*_6e5d_c1str_sort(_6e5d_c2r_Object (*array),_6e5d_c2r_Object (*op)));
_6e5d_c2r_Object (*_6e5d_c1str_ledump(_6e5d_c2r_Object (*v),_6e5d_c2r_Object (*buf)));
_6e5d_c2r_Object (*_6e5d_c1str_n2h(_6e5d_c2r_Object (*n)));
_6e5d_c2r_Object (*_6e5d_c1str_hexdump(_6e5d_c2r_Object (*b)));
_6e5d_c2r_Object (*_6e5d_c1str_lfind(_6e5d_c2r_Object (*h),_6e5d_c2r_Object (*n)));
_6e5d_c2r_Object (*_6e5d_c1str_contains(_6e5d_c2r_Object (*li),_6e5d_c2r_Object (*item))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(li);
	_6e5d_c2r_incref(item);
	{
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(li)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(item,_6e5d_c2prim_getItem(li,idx)))){
					{
						(_vartmp=_6e5d_c2prim_fromU64(1));
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(idx);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(item);
						_6e5d_c2r_decref(li);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=_6e5d_c2prim_fromU64(0));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(item);
		_6e5d_c2r_decref(li);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(l);
	};
	_6e5d_c2r_decref(item);
	_6e5d_c2r_decref(li);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_startswith(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s1);
	_6e5d_c2r_incref(s2);
	{
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*l1) = NULL;
		(_vartmp=l1);
		(l1=_6e5d_c2r_incref(_6e5d_c2prim_length(s1)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*l2) = NULL;
		(_vartmp=l2);
		(l2=_6e5d_c2r_incref(_6e5d_c2prim_length(s2)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l2))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,l1))){
					{
						(_vartmp=_6e5d_c2prim_fromU64(0));
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(l2);
						_6e5d_c2r_decref(l1);
						_6e5d_c2r_decref(idx);
						_6e5d_c2r_decref(s2);
						_6e5d_c2r_decref(s1);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_getItem(s1,idx),_6e5d_c2prim_getItem(s2,idx)))){
					{
						(_vartmp=_6e5d_c2prim_fromU64(0));
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(l2);
						_6e5d_c2r_decref(l1);
						_6e5d_c2r_decref(idx);
						_6e5d_c2r_decref(s2);
						_6e5d_c2r_decref(s1);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=_6e5d_c2prim_fromU64(1));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(l2);
		_6e5d_c2r_decref(l1);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(s2);
		_6e5d_c2r_decref(s1);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(l2);
		_6e5d_c2r_decref(l1);
		_6e5d_c2r_decref(idx);
	};
	_6e5d_c2r_decref(s2);
	_6e5d_c2r_decref(s1);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_endswith(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s1);
	_6e5d_c2r_incref(s2);
	{
		auto _6e5d_c2r_Object (*l1) = NULL;
		(_vartmp=l1);
		(l1=_6e5d_c2r_incref(_6e5d_c2prim_length(s1)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*l2) = NULL;
		(_vartmp=l2);
		(l2=_6e5d_c2r_incref(_6e5d_c2prim_length(s2)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(l1,l2))){
			{
				(_vartmp=_6e5d_c2prim_fromU64(0));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(l2);
				_6e5d_c2r_decref(l1);
				_6e5d_c2r_decref(s2);
				_6e5d_c2r_decref(s1);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(l2,_6e5d_c2prim_fromU64(0)))){
					{
						(_vartmp=_6e5d_c2prim_fromU64(1));
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(l2);
						_6e5d_c2r_decref(l1);
						_6e5d_c2r_decref(s2);
						_6e5d_c2r_decref(s1);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				(_vartmp=l2);
				(l2=_6e5d_c2r_incref(_6e5d_c2prim_sub(l2,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				(_vartmp=l1);
				(l1=_6e5d_c2r_incref(_6e5d_c2prim_sub(l1,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_getItem(s1,l1),_6e5d_c2prim_getItem(s2,l2)))){
					{
						(_vartmp=_6e5d_c2prim_fromU64(0));
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(l2);
						_6e5d_c2r_decref(l1);
						_6e5d_c2r_decref(s2);
						_6e5d_c2r_decref(s1);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
			};
		};
		_6e5d_c2r_decref(l2);
		_6e5d_c2r_decref(l1);
	};
	_6e5d_c2r_decref(s2);
	_6e5d_c2r_decref(s1);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_rstrip(_6e5d_c2r_Object (*by),_6e5d_c2r_Object (*chars))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(by);
	_6e5d_c2r_incref(chars);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isBytes(by)))){
			{
				abort();
			};
		};
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(by)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(l,_6e5d_c2prim_fromU64(0)))){
			{
				(_vartmp=l);
				(l=_6e5d_c2r_incref(_6e5d_c2prim_sub(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1str_contains(chars,_6e5d_c2prim_getItem(by,l))))){
					{
						break;
					};
				};
				_6e5d_c2r_check(_6e5d_c2prim_resize(by,l));
			};
		};
		_6e5d_c2r_decref(l);
	};
	_6e5d_c2r_decref(chars);
	_6e5d_c2r_decref(by);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_lstripped(_6e5d_c2r_Object (*by),_6e5d_c2r_Object (*chars))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(by);
	_6e5d_c2r_incref(chars);
	{
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(by)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1str_contains(chars,_6e5d_c2prim_getItem(by,idx))))){
					{
						break;
					};
				};
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=_6e5d_c1str_slice(by,idx,l));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(chars);
		_6e5d_c2r_decref(by);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(idx);
	};
	_6e5d_c2r_decref(chars);
	_6e5d_c2r_decref(by);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_stripped(_6e5d_c2r_Object (*by),_6e5d_c2r_Object (*chars))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(by);
	_6e5d_c2r_incref(chars);
	{
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		(ret=_6e5d_c2r_incref(_6e5d_c1str_lstripped(by,chars)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c1str_rstrip(ret,chars));
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(chars);
		_6e5d_c2r_decref(by);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(chars);
	_6e5d_c2r_decref(by);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_pop(_6e5d_c2r_Object (*l))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(l);
	{
		auto _6e5d_c2r_Object (*length) = NULL;
		(_vartmp=length);
		(length=_6e5d_c2r_incref(_6e5d_c2prim_length(l)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(length,_6e5d_c2prim_fromU64(0)))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(length);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		(_vartmp=length);
		(length=_6e5d_c2r_incref(_6e5d_c2prim_sub(length,_6e5d_c2prim_fromU64(1))));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*obj) = NULL;
		(_vartmp=obj);
		(obj=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,length)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c2prim_resize(l,length));
		(_vartmp=obj);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(obj);
		_6e5d_c2r_decref(length);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(obj);
		_6e5d_c2r_decref(length);
	};
	_6e5d_c2r_decref(l);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(x);
	{
		auto _6e5d_c2r_Object (*length) = NULL;
		(_vartmp=length);
		(length=_6e5d_c2r_incref(_6e5d_c2prim_length(l)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c2prim_resize(l,_6e5d_c2prim_add(length,_6e5d_c2prim_fromU64(1))));
		_6e5d_c2prim_setItem(l,length,x);
		_6e5d_c2r_decref(length);
	};
	_6e5d_c2r_decref(x);
	_6e5d_c2r_decref(l);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_reverse(_6e5d_c2r_Object (*a))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(a);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(a)))){
			{
				(_vartmp=a);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(a);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*i) = NULL;
		(_vartmp=i);
		(i=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*j) = NULL;
		(_vartmp=j);
		(j=_6e5d_c2r_incref(_6e5d_c2prim_sub(_6e5d_c2prim_length(a),_6e5d_c2prim_fromU64(1))));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(i,j))){
			{
				auto _6e5d_c2r_Object (*c) = NULL;
				(_vartmp=c);
				(c=_6e5d_c2r_incref(_6e5d_c2prim_getItem(a,j)));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2prim_setItem(a,j,_6e5d_c2prim_getItem(a,i));
				_6e5d_c2prim_setItem(a,i,c);
				(_vartmp=i);
				(i=_6e5d_c2r_incref(_6e5d_c2prim_add(i,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				(_vartmp=j);
				(j=_6e5d_c2r_incref(_6e5d_c2prim_sub(j,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_decref(c);
			};
		};
		_6e5d_c2r_decref(j);
		_6e5d_c2r_decref(i);
	};
	_6e5d_c2r_decref(a);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_splitws(_6e5d_c2r_Object (*s))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	{
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(ret=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(s)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*prev) = NULL;
		(_vartmp=prev);
		(prev=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_le(idx,l))){
			{
				auto _6e5d_c2r_Object (*ch) = NULL;
				(_vartmp=ch);
				(ch=_6e5d_c2r_incref(NULL));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l))){
					{
						(_vartmp=ch);
						(ch=_6e5d_c2r_incref(_6e5d_c2prim_getItem(s,idx)));
						_6e5d_c2r_decref(_vartmp);
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,l))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(ch,_6e5d_c2prim_fromU64('\x20')))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(ch,_6e5d_c2prim_fromU64('\x09')))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(ch,_6e5d_c2prim_fromU64('\x0a')))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(ch,_6e5d_c2prim_fromU64('\x0d'))))))){
					{
						if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(idx,prev))){
							{
								_6e5d_c2r_check(_6e5d_c1str_push(ret,_6e5d_c1str_slice(s,prev,idx)));
							};
						};
						(_vartmp=prev);
						(prev=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
						_6e5d_c2r_decref(_vartmp);
					};
				};
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_decref(ch);
			};
		};
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(prev);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(prev);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_splitoff(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*idx))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	_6e5d_c2r_incref(idx);
	{
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		(ret=_6e5d_c2r_incref(_6e5d_c1str_slice(s,_6e5d_c2prim_fromU64(0),idx)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*remain) = NULL;
		(_vartmp=remain);
		(remain=_6e5d_c2r_incref(_6e5d_c1str_slice(s,idx,_6e5d_c2prim_length(s))));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c1str_bufcopy(remain,s));
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(remain);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(remain);
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(idx);
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_split(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*delim))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	_6e5d_c2r_incref(delim);
	{
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(ret=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*prev) = NULL;
		(_vartmp=prev);
		(prev=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		{
			auto _6e5d_c2r_Object (*idx) = NULL;
			(_vartmp=idx);
			(idx=_6e5d_c2r_incref(NULL));
			_6e5d_c2r_decref(_vartmp);
			while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
				{
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idx))){
						{
							(_vartmp=idx);
							(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
							_6e5d_c2r_decref(_vartmp);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							(_vartmp=idx);
							(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(s)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ch) = NULL;
					(_vartmp=ch);
					(ch=_6e5d_c2r_incref(_6e5d_c2prim_getItem(s,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(ch,delim))){
						{
							_6e5d_c2r_decref(ch);
							continue;
						};
					};
					_6e5d_c2r_check(_6e5d_c1str_push(ret,_6e5d_c1str_slice(s,prev,idx)));
					(_vartmp=prev);
					(prev=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
					_6e5d_c2r_decref(_vartmp);
					_6e5d_c2r_decref(ch);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_check(_6e5d_c1str_push(ret,_6e5d_c1str_slice(s,prev,_6e5d_c2prim_length(s))));
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(prev);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(delim);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(prev);
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(delim);
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_lsplit(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*delim),_6e5d_c2r_Object (*times))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	_6e5d_c2r_incref(delim);
	_6e5d_c2r_incref(times);
	{
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(ret=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,times))){
			{
				auto _6e5d_c2r_Object (*pos) = NULL;
				(_vartmp=pos);
				(pos=_6e5d_c2r_incref(_6e5d_c1str_lindex(s,delim)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(pos))){
					{
						_6e5d_c2r_decref(pos);
						break;
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(ret,_6e5d_c1str_slice(s,_6e5d_c2prim_fromU64(0),pos)));
				(_vartmp=s);
				(s=_6e5d_c2r_incref(_6e5d_c1str_slice(s,_6e5d_c2prim_add(pos,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_length(s))));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(s))){
					{
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_decref(pos);
			};
		};
		_6e5d_c2r_check(_6e5d_c1str_push(ret,s));
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(times);
		_6e5d_c2r_decref(delim);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(times);
	_6e5d_c2r_decref(delim);
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_rsplit(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*delim),_6e5d_c2r_Object (*times))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	_6e5d_c2r_incref(delim);
	_6e5d_c2r_incref(times);
	{
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(ret=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,times))){
			{
				auto _6e5d_c2r_Object (*pos) = NULL;
				(_vartmp=pos);
				(pos=_6e5d_c2r_incref(_6e5d_c1str_rindex(s,delim)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(pos))){
					{
						_6e5d_c2r_decref(pos);
						break;
					};
				};
				auto _6e5d_c2r_Object (*s2) = NULL;
				(_vartmp=s2);
				(s2=_6e5d_c2r_incref(_6e5d_c1str_slice(s,_6e5d_c2prim_add(pos,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_length(s))));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_check(_6e5d_c1str_push(ret,s2));
				(_vartmp=s);
				(s=_6e5d_c2r_incref(_6e5d_c1str_slice(s,_6e5d_c2prim_fromU64(0),pos)));
				_6e5d_c2r_decref(_vartmp);
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_decref(s2);
				_6e5d_c2r_decref(pos);
			};
		};
		_6e5d_c2r_check(_6e5d_c1str_push(ret,s));
		_6e5d_c2r_check(_6e5d_c1str_reverse(ret));
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(times);
		_6e5d_c2r_decref(delim);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(times);
	_6e5d_c2r_decref(delim);
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_bufcopy(_6e5d_c2r_Object (*f),_6e5d_c2r_Object (*t))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(f);
	_6e5d_c2r_incref(t);
	{
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(f)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c2prim_resize(t,l));
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l))){
			{
				_6e5d_c2prim_setItem(t,idx,_6e5d_c2prim_getItem(f,idx));
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(l);
	};
	_6e5d_c2r_decref(t);
	_6e5d_c2r_decref(f);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_slice(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*i1),_6e5d_c2r_Object (*i2))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	_6e5d_c2r_incref(i1);
	_6e5d_c2r_incref(i2);
	{
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(s)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(i2,l))){
			{
				(_vartmp=i2);
				(i2=_6e5d_c2r_incref(l));
				_6e5d_c2r_decref(_vartmp);
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(i1,i2))){
			{
				(_vartmp=_6e5d_c2prim_fromBuf("",0));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_decref(i2);
				_6e5d_c2r_decref(i1);
				_6e5d_c2r_decref(s);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*l2) = NULL;
		(_vartmp=l2);
		(l2=_6e5d_c2r_incref(_6e5d_c2prim_sub(i2,i1)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		(ret=_6e5d_c2r_incref(NULL));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(s))){
			{
				(_vartmp=ret);
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				(ret=_6e5d_c2r_incref(_var0));
				_6e5d_c2r_decref(_vartmp);
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(s))){
			{
				(_vartmp=ret);
				(ret=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("",0)));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		_6e5d_c2r_check(_6e5d_c2prim_resize(ret,l2));
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l2))){
			{
				_6e5d_c2prim_setItem(ret,idx,_6e5d_c2prim_getItem(s,_6e5d_c2prim_add(i1,idx)));
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(l2);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(i2);
		_6e5d_c2r_decref(i1);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(l2);
		_6e5d_c2r_decref(l);
	};
	_6e5d_c2r_decref(i2);
	_6e5d_c2r_decref(i1);
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_lindex(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*item))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	_6e5d_c2r_incref(item);
	{
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(s)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(s,idx),item))){
					{
						(_vartmp=idx);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(idx);
						_6e5d_c2r_decref(item);
						_6e5d_c2r_decref(s);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=NULL);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(item);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(idx);
	};
	_6e5d_c2r_decref(item);
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_rindex(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*item))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	_6e5d_c2r_incref(item);
	{
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_length(s)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(idx,_6e5d_c2prim_fromU64(0)))){
			{
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_sub(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(s,idx),item))){
					{
						(_vartmp=idx);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(idx);
						_6e5d_c2r_decref(item);
						_6e5d_c2r_decref(s);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
			};
		};
		(_vartmp=NULL);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(item);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(idx);
	};
	_6e5d_c2r_decref(item);
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_append(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s1);
	_6e5d_c2r_incref(s2);
	{
		auto _6e5d_c2r_Object (*l1) = NULL;
		(_vartmp=l1);
		(l1=_6e5d_c2r_incref(_6e5d_c2prim_length(s1)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*l2) = NULL;
		(_vartmp=l2);
		(l2=_6e5d_c2r_incref(_6e5d_c2prim_length(s2)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c2prim_resize(s1,_6e5d_c2prim_add(l1,l2)));
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l2))){
			{
				_6e5d_c2prim_setItem(s1,_6e5d_c2prim_add(idx,l1),_6e5d_c2prim_getItem(s2,idx));
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(l2);
		_6e5d_c2r_decref(l1);
	};
	_6e5d_c2r_decref(s2);
	_6e5d_c2r_decref(s1);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_join2(_6e5d_c2r_Object (*delim),_6e5d_c2r_Object (*lists))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(delim);
	_6e5d_c2r_incref(lists);
	{
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(lists)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		(ret=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("",0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(idx,_6e5d_c2prim_fromU64(0)))){
					{
						_6e5d_c2r_check(_6e5d_c1str_append(ret,delim));
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_append(ret,_6e5d_c2prim_getItem(lists,idx)));
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(lists);
		_6e5d_c2r_decref(delim);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(l);
	};
	_6e5d_c2r_decref(lists);
	_6e5d_c2r_decref(delim);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_join(_6e5d_c2r_Object (*lists))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(lists);
	{
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(lists)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		(ret=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("",0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l))){
			{
				_6e5d_c2r_check(_6e5d_c1str_append(ret,_6e5d_c2prim_getItem(lists,idx)));
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(lists);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(l);
	};
	_6e5d_c2r_decref(lists);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_swaprm(_6e5d_c2r_Object (*li),_6e5d_c2r_Object (*idx))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(li);
	_6e5d_c2r_incref(idx);
	{
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(li)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,l))){
			{
				abort();
			};
		};
		auto _6e5d_c2r_Object (*rm) = NULL;
		(_vartmp=rm);
		(rm=_6e5d_c2r_incref(_6e5d_c2prim_getItem(li,idx)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2prim_setItem(li,idx,_6e5d_c2prim_getItem(li,_6e5d_c2prim_sub(l,_6e5d_c2prim_fromU64(1))));
		_6e5d_c2r_check(_6e5d_c2prim_resize(li,_6e5d_c2prim_sub(l,_6e5d_c2prim_fromU64(1))));
		(_vartmp=rm);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(rm);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(li);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(rm);
		_6e5d_c2r_decref(l);
	};
	_6e5d_c2r_decref(idx);
	_6e5d_c2r_decref(li);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_lower(_6e5d_c2r_Object (*s))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	{
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(s)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,l))){
			{
				auto _6e5d_c2r_Object (*c) = NULL;
				(_vartmp=c);
				(c=_6e5d_c2r_incref(_6e5d_c2prim_getItem(s,idx)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_ge(c,_6e5d_c2prim_fromU64('\x41')))&&_6e5d_c2prim_toBool(_6e5d_c2prim_le(c,_6e5d_c2prim_fromU64('\x5a'))))))){
					{
						_6e5d_c2prim_setItem(s,idx,_6e5d_c2prim_add(_6e5d_c2prim_fromU64('\x61'),_6e5d_c2prim_sub(c,_6e5d_c2prim_fromU64('\x41'))));
					};
				};
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_decref(c);
			};
		};
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(idx);
	};
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*swap(_6e5d_c2r_Object (*a),_6e5d_c2r_Object (*x),_6e5d_c2r_Object (*y))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(a);
	_6e5d_c2r_incref(x);
	_6e5d_c2r_incref(y);
	{
		auto _6e5d_c2r_Object (*tmp) = NULL;
		(_vartmp=tmp);
		(tmp=_6e5d_c2r_incref(_6e5d_c2prim_getItem(a,x)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2prim_setItem(a,x,_6e5d_c2prim_getItem(a,y));
		_6e5d_c2prim_setItem(a,y,tmp);
		_6e5d_c2r_decref(tmp);
	};
	_6e5d_c2r_decref(y);
	_6e5d_c2r_decref(x);
	_6e5d_c2r_decref(a);
	return NULL;
}
_6e5d_c2r_Object (*sort2(_6e5d_c2r_Object (*array),_6e5d_c2r_Object (*left),_6e5d_c2r_Object (*right),_6e5d_c2r_Object (*op))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(array);
	_6e5d_c2r_incref(left);
	_6e5d_c2r_incref(right);
	_6e5d_c2r_incref(op);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(left,right))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_decref(op);
				_6e5d_c2r_decref(right);
				_6e5d_c2r_decref(left);
				_6e5d_c2r_decref(array);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				auto _6e5d_c2r_Object (*cmp) = NULL;
				(_vartmp=cmp);
				(cmp=_6e5d_c2r_incref(_6e5d_c2prim_getItem(array,right)));
				_6e5d_c2r_decref(_vartmp);
				auto _6e5d_c2r_Object (*idx) = NULL;
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(left));
				_6e5d_c2r_decref(_vartmp);
				auto _6e5d_c2r_Object (*idy) = NULL;
				(_vartmp=idy);
				(idy=_6e5d_c2r_incref(right));
				_6e5d_c2r_decref(_vartmp);
				while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,idy))){
					{
						if(_6e5d_c2prim_toBool(((_6e5d_c2r_Object (*(*)(_6e5d_c2r_Object (*),_6e5d_c2r_Object (*))))((op->value).pfn))(cmp,_6e5d_c2prim_getItem(array,idx)))){
							{
								(_vartmp=idy);
								(idy=_6e5d_c2r_incref(_6e5d_c2prim_sub(idy,_6e5d_c2prim_fromU64(1))));
								_6e5d_c2r_decref(_vartmp);
								_6e5d_c2r_check(swap(array,idx,idy));
							};
						}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
							{
								(_vartmp=idx);
								(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
								_6e5d_c2r_decref(_vartmp);
							};
						};
					};
				};
				_6e5d_c2r_check(swap(array,idx,right));
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(idx,_6e5d_c2prim_fromU64(0)))){
					{
						_6e5d_c2r_check(sort2(array,left,_6e5d_c2prim_sub(idx,_6e5d_c2prim_fromU64(1)),op));
					};
				};
				_6e5d_c2r_check(sort2(array,_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1)),right,op));
				_6e5d_c2r_decref(idy);
				_6e5d_c2r_decref(idx);
				_6e5d_c2r_decref(cmp);
			};
		};
	};
	_6e5d_c2r_decref(op);
	_6e5d_c2r_decref(right);
	_6e5d_c2r_decref(left);
	_6e5d_c2r_decref(array);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_sort(_6e5d_c2r_Object (*array),_6e5d_c2r_Object (*op))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(array);
	_6e5d_c2r_incref(op);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isList(array)))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(op);
				_6e5d_c2r_decref(array);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(array)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),l))){
			{
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				(_vartmp=_var0);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_decref(op);
				_6e5d_c2r_decref(array);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		_6e5d_c2r_check(sort2(array,_6e5d_c2prim_fromU64(0),_6e5d_c2prim_sub(l,_6e5d_c2prim_fromU64(1)),op));
		_6e5d_c2r_decref(l);
	};
	_6e5d_c2r_decref(op);
	_6e5d_c2r_decref(array);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_ledump(_6e5d_c2r_Object (*v),_6e5d_c2r_Object (*buf))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(v);
	_6e5d_c2r_incref(buf);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isU64(v))){
			{
				_6e5d_c2r_check(_6e5d_c1str_push(buf,v));
				_6e5d_c2r_check(_6e5d_c1str_push(buf,_6e5d_c2prim_shr(v,_6e5d_c2prim_fromU64(8))));
				_6e5d_c2r_check(_6e5d_c1str_push(buf,_6e5d_c2prim_shr(v,_6e5d_c2prim_fromU64(16))));
				_6e5d_c2r_check(_6e5d_c1str_push(buf,_6e5d_c2prim_shr(v,_6e5d_c2prim_fromU64(24))));
				_6e5d_c2r_check(_6e5d_c1str_push(buf,_6e5d_c2prim_shr(v,_6e5d_c2prim_fromU64(32))));
				_6e5d_c2r_check(_6e5d_c1str_push(buf,_6e5d_c2prim_shr(v,_6e5d_c2prim_fromU64(40))));
				_6e5d_c2r_check(_6e5d_c1str_push(buf,_6e5d_c2prim_shr(v,_6e5d_c2prim_fromU64(48))));
				_6e5d_c2r_check(_6e5d_c1str_push(buf,_6e5d_c2prim_shr(v,_6e5d_c2prim_fromU64(56))));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				abort();
			};
		};
	};
	_6e5d_c2r_decref(buf);
	_6e5d_c2r_decref(v);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_n2h(_6e5d_c2r_Object (*n))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(n);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(n,_6e5d_c2prim_fromU64(10)))){
			{
				(_vartmp=_6e5d_c2prim_add(_6e5d_c2prim_fromU64('\x30'),n));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(n);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				(_vartmp=_6e5d_c2prim_add(_6e5d_c2prim_fromU64('\x61'),_6e5d_c2prim_sub(n,_6e5d_c2prim_fromU64(10))));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(n);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
	};
	_6e5d_c2r_decref(n);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_hexdump(_6e5d_c2r_Object (*b))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(b);
	{
		auto _6e5d_c2r_Object (*out) = NULL;
		(_vartmp=out);
		(out=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("",0)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c2prim_resize(out,_6e5d_c2prim_mul(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(b))));
		{
			auto _6e5d_c2r_Object (*idx) = NULL;
			(_vartmp=idx);
			(idx=_6e5d_c2r_incref(NULL));
			_6e5d_c2r_decref(_vartmp);
			while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
				{
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idx))){
						{
							(_vartmp=idx);
							(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
							_6e5d_c2r_decref(_vartmp);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							(_vartmp=idx);
							(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(b)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*bb) = NULL;
					(_vartmp=bb);
					(bb=_6e5d_c2r_incref(_6e5d_c2prim_getItem(b,idx)));
					_6e5d_c2r_decref(_vartmp);
					_6e5d_c2prim_setItem(out,_6e5d_c2prim_mul(_6e5d_c2prim_fromU64(2),idx),_6e5d_c1str_n2h(_6e5d_c2prim_div(bb,_6e5d_c2prim_fromU64(16))));
					_6e5d_c2prim_setItem(out,_6e5d_c2prim_add(_6e5d_c2prim_fromU64(1),_6e5d_c2prim_mul(_6e5d_c2prim_fromU64(2),idx)),_6e5d_c1str_n2h(_6e5d_c2prim_mod(bb,_6e5d_c2prim_fromU64(16))));
					_6e5d_c2r_decref(bb);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=out);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(out);
		_6e5d_c2r_decref(b);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(out);
	};
	_6e5d_c2r_decref(b);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1str_lfind(_6e5d_c2r_Object (*h),_6e5d_c2r_Object (*n))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(h);
	_6e5d_c2r_incref(n);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(n)))){
			{
				abort();
			};
		};
		auto _6e5d_c2r_Object (*lps) = NULL;
		(_vartmp=lps);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(lps=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c2prim_resize(lps,_6e5d_c2prim_length(n)));
		auto _6e5d_c2r_Object (*prev) = NULL;
		(_vartmp=prev);
		(prev=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		{
			auto _6e5d_c2r_Object (*idx) = NULL;
			(_vartmp=idx);
			(idx=_6e5d_c2r_incref(NULL));
			_6e5d_c2r_decref(_vartmp);
			while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
				{
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idx))){
						{
							(_vartmp=idx);
							(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
							_6e5d_c2r_decref(_vartmp);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							(_vartmp=idx);
							(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(n)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*nn) = NULL;
					(_vartmp=nn);
					(nn=_6e5d_c2r_incref(_6e5d_c2prim_getItem(n,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
						{
							(_vartmp=prev);
							(prev=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
							_6e5d_c2r_decref(_vartmp);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(nn,_6e5d_c2prim_getItem(n,prev)))){
						{
							(_vartmp=prev);
							(prev=_6e5d_c2r_incref(_6e5d_c2prim_add(prev,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							(_vartmp=prev);
							(prev=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					_6e5d_c2prim_setItem(lps,idx,prev);
					_6e5d_c2r_decref(nn);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=prev);
		(prev=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,_6e5d_c2prim_length(h)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(h,idx),_6e5d_c2prim_getItem(n,prev)))){
					{
						(_vartmp=prev);
						(prev=_6e5d_c2r_incref(_6e5d_c2prim_add(prev,_6e5d_c2prim_fromU64(1))));
						_6e5d_c2r_decref(_vartmp);
						(_vartmp=idx);
						(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
						_6e5d_c2r_decref(_vartmp);
						if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(prev,_6e5d_c2prim_length(n)))){
							{
								(_vartmp=_6e5d_c2prim_sub(idx,prev));
								_6e5d_c2r_incref(_vartmp);
								_6e5d_c2r_decref(idx);
								_6e5d_c2r_decref(prev);
								_6e5d_c2r_decref(lps);
								_6e5d_c2r_decref(n);
								_6e5d_c2r_decref(h);
								_6e5d_c2r_deconly(_vartmp);
								return _vartmp;
							};
						};
					};
				}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(prev,_6e5d_c2prim_fromU64(0)))){
					{
						(_vartmp=idx);
						(idx=_6e5d_c2r_incref(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1))));
						_6e5d_c2r_decref(_vartmp);
					};
				}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
					{
						auto _6e5d_c2r_Object (*jumpback) = NULL;
						(_vartmp=jumpback);
						(jumpback=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
						_6e5d_c2r_decref(_vartmp);
						if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(prev,_6e5d_c2prim_fromU64(0)))){
							{
								(_vartmp=jumpback);
								(jumpback=_6e5d_c2r_incref(_6e5d_c2prim_getItem(lps,_6e5d_c2prim_sub(prev,_6e5d_c2prim_fromU64(1)))));
								_6e5d_c2r_decref(_vartmp);
							};
						};
						(_vartmp=prev);
						(prev=_6e5d_c2r_incref(jumpback));
						_6e5d_c2r_decref(_vartmp);
						_6e5d_c2r_decref(jumpback);
					};
				};
			};
		};
		(_vartmp=NULL);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(prev);
		_6e5d_c2r_decref(lps);
		_6e5d_c2r_decref(n);
		_6e5d_c2r_decref(h);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(prev);
		_6e5d_c2r_decref(lps);
	};
	_6e5d_c2r_decref(n);
	_6e5d_c2r_decref(h);
	return NULL;
}
