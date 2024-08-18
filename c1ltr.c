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
typedef struct _6e5d_ltr2_Ltr _6e5d_ltr2_Ltr;
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
struct _6e5d_ltr2_Ltr{
	uint64_t len;
	void (*value);
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
void _6e5d_ltr2_parse(void (*s),_6e5d_ltr2_Ltr (*ltr));
void _6e5d_ltr2_deinit(_6e5d_ltr2_Ltr (*l));
_6e5d_vec_Vec (*_6e5d_c2r_asVec(_6e5d_c2r_Object (*po)));
_6e5d_c2r_Object (*_6e5d_c1str_join(_6e5d_c2r_Object (*lists)));
_6e5d_c2r_Object (*_6e5d_c1str_n2h(_6e5d_c2r_Object (*n)));
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x)));
_6e5d_c2r_Object (*_6e5d_c1str_contains(_6e5d_c2r_Object (*li),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*_6e5d_c1str_append(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2)));
void _6e5d_vec_pushv(_6e5d_vec_Vec (*v),void (*val));
_6e5d_c2r_Object (*ltr2obj(_6e5d_ltr2_Ltr (*ltr)));
_6e5d_c2r_Object (*_6e5d_c1ltr_parse(_6e5d_c2r_Object (*s)));
_6e5d_c2r_Object (*escaped(_6e5d_c2r_Object (*l)));
_6e5d_c2r_Object (*newl(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*indent)));
_6e5d_c2r_Object (*recdump(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*indent)));
_6e5d_c2r_Object (*_6e5d_c1ltr_dump(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*ltr2obj(_6e5d_ltr2_Ltr (*ltr))){
	if(((1lu<<63)&(ltr->len))){
		auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_listInit();
		_6e5d_c2prim_resizeList(ret,((size_t )((1lu<<63)^(ltr->len))));
		auto size_t idx = 0;
		for(auto _6e5d_ltr2_Ltr (*ll) = (ltr->value);(ll<(((_6e5d_ltr2_Ltr (*))(ltr->value))+((size_t )((1lu<<63)^(ltr->len)))));(ll+=1)){
			_6e5d_c2prim_listSet(ret,idx,ltr2obj(ll));
			(idx+=1);
		};
		return ret;
	}else if(true){
		auto size_t len = ((size_t )(ltr->len));
		return _6e5d_c2prim_fromBuf((ltr->value),len);
	};
}
_6e5d_c2r_Object (*_6e5d_c1ltr_parse(_6e5d_c2r_Object (*s))){
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(s);
	auto uint8_t zero = 0;
	_6e5d_vec_pushv(v,(&zero));
	auto _6e5d_ltr2_Ltr ltr;
	_6e5d_ltr2_parse((v->p),(&ltr));
	_6e5d_c2r_check(s);
	auto _6e5d_c2r_Object (*obj) = ltr2obj((&ltr));
	_6e5d_ltr2_deinit((&ltr));
	return obj;
}
_6e5d_c2r_Object (*escaped(_6e5d_c2r_Object (*l))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(l);
	{
		auto _6e5d_c2r_Object (*special) = NULL;
		(_vartmp=special);
		(special=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf(" []""\x22""""\x5c""#",6)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*quote) = NULL;
		(_vartmp=quote);
		(quote=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*s) = NULL;
		(_vartmp=s);
		(s=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("",0)));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ll) = NULL;
					(_vartmp=ll);
					(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c1str_contains(special,ll))){
						{
							(_vartmp=quote);
							(quote=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(1)));
							_6e5d_c2r_decref(_vartmp);
							_6e5d_c2r_check(_6e5d_c1str_push(s,_6e5d_c2prim_fromU64('\x5c')));
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_lt(ll,_6e5d_c2prim_fromU64(32)))||_6e5d_c2prim_toBool(_6e5d_c2prim_ge(ll,_6e5d_c2prim_fromU64(127))))))){
						{
							(_vartmp=quote);
							(quote=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(1)));
							_6e5d_c2r_decref(_vartmp);
							_6e5d_c2r_check(_6e5d_c1str_append(s,_6e5d_c2prim_fromBuf("""\x5c""x",2)));
							_6e5d_c2r_check(_6e5d_c1str_push(s,_6e5d_c1str_n2h(_6e5d_c2prim_div(ll,_6e5d_c2prim_fromU64(16)))));
							_6e5d_c2r_check(_6e5d_c1str_push(s,_6e5d_c1str_n2h(_6e5d_c2prim_mod(ll,_6e5d_c2prim_fromU64(16)))));
							_6e5d_c2r_decref(ll);
							continue;
						};
					};
					_6e5d_c2r_check(_6e5d_c1str_push(s,ll));
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		if(_6e5d_c2prim_toBool(quote)){
			{
				(_vartmp=s);
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(3));
				_6e5d_c2prim_listSet(_var0,0,_6e5d_c2prim_fromBuf("""\x22""",1));
				_6e5d_c2prim_listSet(_var0,1,s);
				_6e5d_c2prim_listSet(_var0,2,_6e5d_c2prim_fromBuf("""\x22""",1));
				(s=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=s);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_decref(quote);
		_6e5d_c2r_decref(special);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(s);
		_6e5d_c2r_decref(quote);
		_6e5d_c2r_decref(special);
	};
	_6e5d_c2r_decref(l);
	return NULL;
}
_6e5d_c2r_Object (*newl(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*indent))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	_6e5d_c2r_incref(indent);
	{
		_6e5d_c2r_check(_6e5d_c1str_push(s,_6e5d_c2prim_fromU64('\x0a')));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,indent))){
						{
							break;
						};
					};
					_6e5d_c2r_check(_6e5d_c1str_push(s,_6e5d_c2prim_fromU64('\x09')));
				};
			};
			_6e5d_c2r_decref(idx);
		};
	};
	_6e5d_c2r_decref(indent);
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*recdump(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*indent))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(s);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(indent);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(l))){
			{
				_6e5d_c2r_check(_6e5d_c1str_append(s,escaped(l)));
				(_vartmp=NULL);
				_6e5d_c2r_decref(indent);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_decref(s);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isList(l)))){
			{
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("unsupported type",16));
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,l);
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		_6e5d_c2r_check(_6e5d_c1str_push(s,_6e5d_c2prim_fromU64('\x5b')));
		auto _6e5d_c2r_Object (*newline) = NULL;
		(_vartmp=newline);
		(newline=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*llen) = NULL;
		(_vartmp=llen);
		(llen=_6e5d_c2r_incref(_6e5d_c2prim_length(l)));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ll) = NULL;
					(_vartmp=ll);
					(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_neg(newline))&&_6e5d_c2prim_toBool(_6e5d_c2prim_isList(ll))&&_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_lt(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(2)),llen))||_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(2)),llen))&&_6e5d_c2prim_toBool(_6e5d_c2prim_isList(_6e5d_c2prim_getItem(l,_6e5d_c2prim_sub(llen,_6e5d_c2prim_fromU64(1))))))))))))))){
						{
							(_vartmp=newline);
							(newline=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(1)));
							_6e5d_c2r_decref(_vartmp);
							(_vartmp=indent);
							(indent=_6e5d_c2r_incref(_6e5d_c2prim_add(indent,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					if(_6e5d_c2prim_toBool(newline)){
						{
							_6e5d_c2r_check(newl(s,indent));
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(idx,_6e5d_c2prim_fromU64(0)))){
						{
							_6e5d_c2r_check(_6e5d_c1str_push(s,_6e5d_c2prim_fromU64('\x20')));
						};
					};
					_6e5d_c2r_check(recdump(s,ll,indent));
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		if(_6e5d_c2prim_toBool(newline)){
			{
				(_vartmp=indent);
				(indent=_6e5d_c2r_incref(_6e5d_c2prim_sub(indent,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_check(newl(s,indent));
			};
		};
		_6e5d_c2r_check(_6e5d_c1str_push(s,_6e5d_c2prim_fromU64('\x5d')));
		_6e5d_c2r_decref(llen);
		_6e5d_c2r_decref(newline);
	};
	_6e5d_c2r_decref(indent);
	_6e5d_c2r_decref(l);
	_6e5d_c2r_decref(s);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1ltr_dump(_6e5d_c2r_Object (*obj))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(obj);
	{
		auto _6e5d_c2r_Object (*s) = NULL;
		(_vartmp=s);
		(s=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("",0)));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(obj)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(obj,idx)));
					_6e5d_c2r_decref(_vartmp);
					_6e5d_c2r_check(recdump(s,l,_6e5d_c2prim_fromU64(0)));
					_6e5d_c2r_check(_6e5d_c1str_push(s,_6e5d_c2prim_fromU64('\x0a')));
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=s);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(s);
		_6e5d_c2r_decref(obj);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(s);
	};
	_6e5d_c2r_decref(obj);
	return NULL;
}
