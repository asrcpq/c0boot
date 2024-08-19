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
_6e5d_c2r_Object (*_6e5d_c2prim_not(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_lt(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_gt(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_le(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_ge(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_eq(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_ne(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_and(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_or(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_xor(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_neg(_6e5d_c2r_Object (*obj)));
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
_6e5d_c2r_Object (*_6e5d_c2prim_asF32(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_asBytes(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_asList(_6e5d_c2r_Object (*obj)));
void _6e5d_c2prim_listSet(_6e5d_c2r_Object (*obj),size_t index,_6e5d_c2r_Object (*value));
void _6e5d_c2prim_resizeList(_6e5d_c2r_Object (*obj),size_t len);
_6e5d_c2r_Object (*_6e5d_c2prim_printobj(int fd,_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c0c_translate(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*deconly),_6e5d_c2r_Object (*out)));
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x)));
_6e5d_c2r_Object (*_6e5d_c1str_contains(_6e5d_c2r_Object (*li),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*_6e5d_c1str_append(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2)));
_6e5d_c2r_Object (*_6e5d_c1str_join(_6e5d_c2r_Object (*lists)));
_6e5d_c2r_Object (*_6e5d_c1ltr_dump(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1ltr_parse(_6e5d_c2r_Object (*s)));
_6e5d_c2r_Object (*_6e5d_c1path_isreg(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_mtime(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1file_writeall(_6e5d_c2r_Object (*dst),_6e5d_c2r_Object (*data)));
_6e5d_c2r_Object (*_6e5d_c1file_readall(_6e5d_c2r_Object (*file)));
_6e5d_c2r_Object (*_6e5d_c1file_close(_6e5d_c2r_Object (*fd)));
_6e5d_c2r_Object (*_6e5d_c1file_open(_6e5d_c2r_Object (*path),_6e5d_c2r_Object (*mode)));
_6e5d_c2r_Object (*_6e5d_c1m_c2gid(_6e5d_c2r_Object (*sym)));
_6e5d_c2r_Object (*header(_6e5d_c2r_Object (*src),_6e5d_c2r_Object (*dst)));
_6e5d_c2r_Object (*resolvety2(_6e5d_c2r_Object (*ty)));
_6e5d_c2r_Object (*resolvety(_6e5d_c2r_Object (*ty)));
_6e5d_c2r_Object (*recinclude(_6e5d_c2r_Object (*gid),_6e5d_c2r_Object (*sym),_6e5d_c2r_Object (*gids),_6e5d_c2r_Object (*cached),_6e5d_c2r_Object (*decls),_6e5d_c2r_Object (*incls)));
_6e5d_c2r_Object (*buildinclude(_6e5d_c2r_Object (*c0),_6e5d_c2r_Object (*gids)));
int main(int argc,char (*(*argv)));
_6e5d_c2r_Object (*header(_6e5d_c2r_Object (*src),_6e5d_c2r_Object (*dst))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(src);
	_6e5d_c2r_incref(dst);
	{
		auto _6e5d_c2r_Object (*data) = NULL;
		(_vartmp=data);
		(data=_6e5d_c2r_incref(_6e5d_c1file_readall(src)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(data))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		(_vartmp=data);
		(data=_6e5d_c2r_incref(_6e5d_c1ltr_parse(data)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*output) = NULL;
		(_vartmp=output);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(output=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*exported) = NULL;
		(_vartmp=exported);
		auto _6e5d_c2r_Object (*_var1) = NULL;
		(_var1=_6e5d_c2prim_listInit());
		(exported=_6e5d_c2r_incref(_var1));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(data)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(data,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("include",7)))&&_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_fromBuf(".",1))))))){
						{
							(_vartmp=exported);
							(exported=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2))));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(data)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(data,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*unit) = NULL;
					(_vartmp=unit);
					(unit=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("fn",2)))){
						{
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1str_contains(exported,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)))))){
								{
									_6e5d_c2r_decref(unit);
									_6e5d_c2r_decref(l);
									continue;
								};
							};
							_6e5d_c2r_check(_6e5d_c2prim_resize(l,_6e5d_c2prim_fromU64(4)));
							_6e5d_c2r_check(_6e5d_c1str_push(output,l));
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("struct",6)))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("union",5))))))){
						{
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1str_contains(exported,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)))))){
								{
									_6e5d_c2r_decref(unit);
									_6e5d_c2r_decref(l);
									continue;
								};
							};
							_6e5d_c2r_check(_6e5d_c1str_push(output,l));
						};
					};
					_6e5d_c2r_decref(unit);
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("caching",7));
		dprintf(2," ");
		_6e5d_c2prim_printobj(2,dst);
		dprintf(2,"""\x0a""");
		_6e5d_c2r_check(_6e5d_c1file_writeall(dst,_6e5d_c1ltr_dump(output)));
		_6e5d_c2r_decref(exported);
		_6e5d_c2r_decref(output);
		_6e5d_c2r_decref(data);
	};
	_6e5d_c2r_decref(dst);
	_6e5d_c2r_decref(src);
	return NULL;
}
_6e5d_c2r_Object (*resolvety2(_6e5d_c2r_Object (*ty))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(ty);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(ty))){
			{
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(1));
				_6e5d_c2prim_listSet(_var0,0,ty);
				(_vartmp=_var0);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*first) = NULL;
		(_vartmp=first);
		(first=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(first,_6e5d_c2prim_fromBuf("Array",5)))){
			{
				(_vartmp=resolvety(_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(first);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(_vartmp=_var0);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(first);
		_6e5d_c2r_decref(ty);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(first);
	};
	_6e5d_c2r_decref(ty);
	return NULL;
}
_6e5d_c2r_Object (*resolvety(_6e5d_c2r_Object (*ty))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(ty);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(ty))){
			{
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(1));
				_6e5d_c2prim_listSet(_var0,0,ty);
				(_vartmp=_var0);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*first) = NULL;
		(_vartmp=first);
		(first=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(first,_6e5d_c2prim_fromBuf("Arg",3)))){
			{
				auto _6e5d_c2r_Object (*ret) = NULL;
				(_vartmp=ret);
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				(ret=_6e5d_c2r_incref(_var0));
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(ty)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*l) = NULL;
							(_vartmp=l);
							(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ty,idx)));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
								{
									_6e5d_c2r_decref(l);
									continue;
								};
							};
							_6e5d_c2r_check(_6e5d_c1str_append(ret,resolvety(l)));
							_6e5d_c2r_decref(l);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				(_vartmp=ret);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(ret);
				_6e5d_c2r_decref(first);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
				_6e5d_c2r_decref(ret);
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				(_vartmp=resolvety(_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(first);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		_6e5d_c2r_decref(first);
	};
	_6e5d_c2r_decref(ty);
	return NULL;
}
_6e5d_c2r_Object (*recinclude(_6e5d_c2r_Object (*gid),_6e5d_c2r_Object (*sym),_6e5d_c2r_Object (*gids),_6e5d_c2r_Object (*cached),_6e5d_c2r_Object (*decls),_6e5d_c2r_Object (*incls))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(gid);
	_6e5d_c2r_incref(sym);
	_6e5d_c2r_incref(gids);
	_6e5d_c2r_incref(cached);
	_6e5d_c2r_incref(decls);
	_6e5d_c2r_incref(incls);
	{
		_6e5d_c2prim_setItem(gids,gid,_6e5d_c2prim_fromU64(1));
		auto _6e5d_c2r_Object (*state) = NULL;
		(_vartmp=state);
		(state=_6e5d_c2r_incref(_6e5d_c2prim_getItem(decls,sym)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(state))){
			{
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(1),state))){
			{
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("circular dep",12));
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,sym);
				dprintf(2,"""\x0a""");
				abort();
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(2),state))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_decref(state);
				_6e5d_c2r_decref(incls);
				_6e5d_c2r_decref(decls);
				_6e5d_c2r_decref(cached);
				_6e5d_c2r_decref(gids);
				_6e5d_c2r_decref(sym);
				_6e5d_c2r_decref(gid);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		_6e5d_c2prim_setItem(decls,sym,_6e5d_c2prim_fromU64(1));
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(_6e5d_c2prim_getItem(cached,sym)))){
			{
				auto _6e5d_c2r_Object (*cachesrc) = NULL;
				(_vartmp=cachesrc);
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(2));
				_6e5d_c2prim_listSet(_var0,0,gid);
				_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf("/build/lib.ltr",14));
				(cachesrc=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
				_6e5d_c2r_decref(_vartmp);
				auto _6e5d_c2r_Object (*cachedst) = NULL;
				(_vartmp=cachedst);
				auto _6e5d_c2r_Object (*_var1) = NULL;
				(_var1=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var1,_6e5d_c2prim_fromU64(2));
				_6e5d_c2prim_listSet(_var1,0,gid);
				_6e5d_c2prim_listSet(_var1,1,_6e5d_c2prim_fromBuf("/build/lib.h",12));
				(cachedst=_6e5d_c2r_incref(_6e5d_c1str_join(_var1)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1path_isreg(cachesrc)))){
					{
						_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("c0c missing",11));
						dprintf(2," ");
						_6e5d_c2prim_printobj(2,cachesrc);
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1path_isreg(cachedst)))||_6e5d_c2prim_toBool(_6e5d_c2prim_lt(_6e5d_c1path_mtime(cachedst),_6e5d_c1path_mtime(cachesrc))))))){
					{
						_6e5d_c2r_check(header(cachesrc,cachedst));
					};
				};
				auto _6e5d_c2r_Object (*data) = NULL;
				(_vartmp=data);
				(data=_6e5d_c2r_incref(_6e5d_c1file_readall(cachedst)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(data))){
					{
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				(_vartmp=data);
				(data=_6e5d_c2r_incref(_6e5d_c1ltr_parse(data)));
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(data)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*l) = NULL;
							(_vartmp=l);
							(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(data,idx)));
							_6e5d_c2r_decref(_vartmp);
							auto _6e5d_c2r_Object (*name) = NULL;
							(_vartmp=name);
							(name=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
							_6e5d_c2prim_setItem(cached,name,l);
							_6e5d_c2r_decref(name);
							_6e5d_c2r_decref(l);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				_6e5d_c2r_decref(data);
				_6e5d_c2r_decref(cachedst);
				_6e5d_c2r_decref(cachesrc);
			};
		};
		auto _6e5d_c2r_Object (*data) = NULL;
		(_vartmp=data);
		(data=_6e5d_c2r_incref(_6e5d_c2prim_getItem(cached,sym)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(data))){
			{
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("import failed:",14));
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,gid);
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,sym);
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		auto _6e5d_c2r_Object (*deps) = NULL;
		(_vartmp=deps);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(deps=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*refs) = NULL;
		(_vartmp=refs);
		auto _6e5d_c2r_Object (*_var1) = NULL;
		(_var1=_6e5d_c2prim_listInit());
		(refs=_6e5d_c2r_incref(_var1));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromBuf("fn",2),_6e5d_c2prim_getItem(data,_6e5d_c2prim_fromU64(0))))){
			{
				_6e5d_c2r_check(_6e5d_c1str_append(deps,resolvety(_6e5d_c2prim_getItem(data,_6e5d_c2prim_fromU64(2)))));
				auto _6e5d_c2r_Object (*argbinds) = NULL;
				(_vartmp=argbinds);
				(argbinds=_6e5d_c2r_incref(_6e5d_c2prim_getItem(data,_6e5d_c2prim_fromU64(3))));
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(argbinds)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*argbind) = NULL;
							(_vartmp=argbind);
							(argbind=_6e5d_c2r_incref(_6e5d_c2prim_getItem(argbinds,idx)));
							_6e5d_c2r_decref(_vartmp);
							_6e5d_c2r_check(_6e5d_c1str_append(deps,resolvety2(_6e5d_c2prim_getItem(argbind,_6e5d_c2prim_fromU64(1)))));
							_6e5d_c2r_check(_6e5d_c1str_append(refs,resolvety(_6e5d_c2prim_getItem(argbind,_6e5d_c2prim_fromU64(1)))));
							_6e5d_c2r_decref(argbind);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				_6e5d_c2r_decref(argbinds);
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(data)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*argbind) = NULL;
							(_vartmp=argbind);
							(argbind=_6e5d_c2r_incref(_6e5d_c2prim_getItem(data,idx)));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,_6e5d_c2prim_fromU64(2)))){
								{
									_6e5d_c2r_decref(argbind);
									continue;
								};
							};
							_6e5d_c2r_check(_6e5d_c1str_append(deps,resolvety2(_6e5d_c2prim_getItem(argbind,_6e5d_c2prim_fromU64(1)))));
							_6e5d_c2r_check(_6e5d_c1str_append(refs,resolvety(_6e5d_c2prim_getItem(argbind,_6e5d_c2prim_fromU64(1)))));
							_6e5d_c2r_decref(argbind);
						};
					};
					_6e5d_c2r_decref(idx);
				};
			};
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(deps)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(deps,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromU64('\x5f')))){
						{
							_6e5d_c2r_decref(l);
							continue;
						};
					};
					_6e5d_c2r_check(recinclude(_6e5d_c1m_c2gid(l),l,gids,cached,decls,incls));
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_check(_6e5d_c1str_push(incls,data));
		_6e5d_c2prim_setItem(decls,sym,_6e5d_c2prim_fromU64(2));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(refs)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(refs,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromU64('\x5f')))){
						{
							_6e5d_c2r_decref(l);
							continue;
						};
					};
					_6e5d_c2r_check(recinclude(_6e5d_c1m_c2gid(l),l,gids,cached,decls,incls));
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_decref(refs);
		_6e5d_c2r_decref(deps);
		_6e5d_c2r_decref(data);
		_6e5d_c2r_decref(state);
	};
	_6e5d_c2r_decref(incls);
	_6e5d_c2r_decref(decls);
	_6e5d_c2r_decref(cached);
	_6e5d_c2r_decref(gids);
	_6e5d_c2r_decref(sym);
	_6e5d_c2r_decref(gid);
	return NULL;
}
_6e5d_c2r_Object (*buildinclude(_6e5d_c2r_Object (*c0),_6e5d_c2r_Object (*gids))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(c0);
	_6e5d_c2r_incref(gids);
	{
		auto _6e5d_c2r_Object (*cached) = NULL;
		(_vartmp=cached);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_mapInit());
		(cached=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*decls) = NULL;
		(_vartmp=decls);
		auto _6e5d_c2r_Object (*_var1) = NULL;
		(_var1=_6e5d_c2prim_mapInit());
		(decls=_6e5d_c2r_incref(_var1));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*incls) = NULL;
		(_vartmp=incls);
		auto _6e5d_c2r_Object (*_var2) = NULL;
		(_var2=_6e5d_c2prim_listInit());
		(incls=_6e5d_c2r_incref(_var2));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(c0)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(c0,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*unit) = NULL;
					(_vartmp=unit);
					(unit=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("include",7)))){
						{
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_fromBuf(".",1)))){
								{
									_6e5d_c2r_decref(unit);
									_6e5d_c2r_decref(l);
									continue;
								};
							};
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(3),_6e5d_c2prim_length(l)))){
								{
									_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("bad include",11));
									dprintf(2," ");
									_6e5d_c2prim_printobj(2,l);
									dprintf(2,"""\x0a""");
									abort();
								};
							};
							auto _6e5d_c2r_Object (*syms) = NULL;
							(_vartmp=syms);
							(syms=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2))));
							_6e5d_c2r_decref(_vartmp);
							{
								auto _6e5d_c2r_Object (*idy) = NULL;
								(_vartmp=idy);
								(idy=_6e5d_c2r_incref(NULL));
								_6e5d_c2r_decref(_vartmp);
								while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
									{
										if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idy))){
											{
												(_vartmp=idy);
												(idy=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
												_6e5d_c2r_decref(_vartmp);
											};
										}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
											{
												(_vartmp=idy);
												(idy=_6e5d_c2r_incref(_6e5d_c2prim_add(idy,_6e5d_c2prim_fromU64(1))));
												_6e5d_c2r_decref(_vartmp);
											};
										};
										if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idy,_6e5d_c2prim_length(syms)))){
											{
												break;
											};
										};
										auto _6e5d_c2r_Object (*sym) = NULL;
										(_vartmp=sym);
										(sym=_6e5d_c2r_incref(_6e5d_c2prim_getItem(syms,idy)));
										_6e5d_c2r_decref(_vartmp);
										_6e5d_c2r_check(recinclude(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)),sym,gids,cached,decls,incls));
										_6e5d_c2r_decref(sym);
									};
								};
								_6e5d_c2r_decref(idy);
							};
							_6e5d_c2r_decref(syms);
						};
					};
					_6e5d_c2r_decref(unit);
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=incls);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(incls);
		_6e5d_c2r_decref(decls);
		_6e5d_c2r_decref(cached);
		_6e5d_c2r_decref(gids);
		_6e5d_c2r_decref(c0);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(incls);
		_6e5d_c2r_decref(decls);
		_6e5d_c2r_decref(cached);
	};
	_6e5d_c2r_decref(gids);
	_6e5d_c2r_decref(c0);
	return NULL;
}
int main(int argc,char (*(*argv))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	auto _6e5d_c2r_Object (*args) = _6e5d_c2prim_listInit();
	_6e5d_c2r_incref(args);
	_6e5d_c2prim_resizeList(args,((size_t )argc));
	for(auto size_t idx = 0;(idx<argc);(idx+=1)){
		_6e5d_c2prim_listSet(args,idx,_6e5d_c2prim_fromBuf(argv[idx],strlen(argv[idx])));
	};
	{
		auto _6e5d_c2r_Object (*path) = NULL;
		(_vartmp=path);
		(path=_6e5d_c2r_incref(_6e5d_c2prim_asBytes(_6e5d_c2prim_getItem(args,_6e5d_c2prim_fromU64(1)))));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*c0) = NULL;
		(_vartmp=c0);
		(c0=_6e5d_c2r_incref(_6e5d_c1file_readall(path)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(c0))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		(_vartmp=c0);
		(c0=_6e5d_c2r_incref(_6e5d_c1ltr_parse(c0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*out) = NULL;
		(_vartmp=out);
		(out=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("#include<stddef.h>""\x0a""#include<stdio.h>""\x0a""#include<stdlib.h>""\x0a""#include<string.h>""\x0a""#include<stdbool.h>""\x0a""#include<stdint.h>""\x0a""#include<assert.h>""\x0a""",133)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*lpath) = NULL;
		(_vartmp=lpath);
		(lpath=_6e5d_c2r_incref(_6e5d_c2prim_length(path)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_gt(lpath,_6e5d_c2prim_fromU64(4))))){
			{
				abort();
			};
		};
		_6e5d_c2r_check(_6e5d_c2prim_resize(path,_6e5d_c2prim_sub(lpath,_6e5d_c2prim_fromU64(4))));
		auto _6e5d_c2r_Object (*cfile) = NULL;
		(_vartmp=cfile);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(2));
		_6e5d_c2prim_listSet(_var0,0,path);
		_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf(".c",2));
		(cfile=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*depfile) = NULL;
		(_vartmp=depfile);
		auto _6e5d_c2r_Object (*_var1) = NULL;
		(_var1=_6e5d_c2prim_listInit());
		_6e5d_c2prim_resize(_var1,_6e5d_c2prim_fromU64(2));
		_6e5d_c2prim_listSet(_var1,0,path);
		_6e5d_c2prim_listSet(_var1,1,_6e5d_c2prim_fromBuf(".dep",4));
		(depfile=_6e5d_c2r_incref(_6e5d_c1str_join(_var1)));
		_6e5d_c2r_decref(_vartmp);
		(_vartmp=depfile);
		(depfile=_6e5d_c2r_incref(_6e5d_c1file_open(depfile,_6e5d_c2prim_fromU64(577))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(depfile))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(c0)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(c0,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*unit) = NULL;
					(_vartmp=unit);
					(unit=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("syslib",6)))){
						{
							auto _6e5d_c2r_Object (*includes) = NULL;
							(_vartmp=includes);
							(includes=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2))));
							_6e5d_c2r_decref(_vartmp);
							{
								auto _6e5d_c2r_Object (*idy) = NULL;
								(_vartmp=idy);
								(idy=_6e5d_c2r_incref(NULL));
								_6e5d_c2r_decref(_vartmp);
								while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
									{
										if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idy))){
											{
												(_vartmp=idy);
												(idy=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
												_6e5d_c2r_decref(_vartmp);
											};
										}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
											{
												(_vartmp=idy);
												(idy=_6e5d_c2r_incref(_6e5d_c2prim_add(idy,_6e5d_c2prim_fromU64(1))));
												_6e5d_c2r_decref(_vartmp);
											};
										};
										if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idy,_6e5d_c2prim_length(includes)))){
											{
												break;
											};
										};
										auto _6e5d_c2r_Object (*incl) = NULL;
										(_vartmp=incl);
										(incl=_6e5d_c2r_incref(_6e5d_c2prim_getItem(includes,idy)));
										_6e5d_c2r_decref(_vartmp);
										_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("#include<",9)));
										_6e5d_c2r_check(_6e5d_c1str_append(out,incl));
										_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf(">""\x0a""",2)));
										_6e5d_c2r_decref(incl);
									};
								};
								_6e5d_c2r_decref(idy);
							};
							auto _6e5d_c2r_Object (*syslib) = NULL;
							(_vartmp=syslib);
							(syslib=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(syslib))){
								{
									{
										auto _6e5d_c2r_Object (*idy) = NULL;
										(_vartmp=idy);
										(idy=_6e5d_c2r_incref(NULL));
										_6e5d_c2r_decref(_vartmp);
										while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
											{
												if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idy))){
													{
														(_vartmp=idy);
														(idy=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
														_6e5d_c2r_decref(_vartmp);
													};
												}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
													{
														(_vartmp=idy);
														(idy=_6e5d_c2r_incref(_6e5d_c2prim_add(idy,_6e5d_c2prim_fromU64(1))));
														_6e5d_c2r_decref(_vartmp);
													};
												};
												if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idy,_6e5d_c2prim_length(syslib)))){
													{
														break;
													};
												};
												auto _6e5d_c2r_Object (*link) = NULL;
												(_vartmp=link);
												(link=_6e5d_c2r_incref(_6e5d_c2prim_getItem(syslib,idy)));
												_6e5d_c2r_decref(_vartmp);
												_6e5d_c2r_check(_6e5d_c1file_writeall(depfile,link));
												_6e5d_c2r_check(_6e5d_c1file_writeall(depfile,_6e5d_c2prim_fromBuf("""\x0a""",1)));
												_6e5d_c2r_decref(link);
											};
										};
										_6e5d_c2r_decref(idy);
									};
								};
							}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
								{
									_6e5d_c2r_check(_6e5d_c1file_writeall(depfile,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
									_6e5d_c2r_check(_6e5d_c1file_writeall(depfile,_6e5d_c2prim_fromBuf("""\x0a""",1)));
								};
							};
							_6e5d_c2r_decref(syslib);
							_6e5d_c2r_decref(includes);
						};
					};
					_6e5d_c2r_decref(unit);
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		auto _6e5d_c2r_Object (*gids) = NULL;
		(_vartmp=gids);
		auto _6e5d_c2r_Object (*_var2) = NULL;
		(_var2=_6e5d_c2prim_mapInit());
		(gids=_6e5d_c2r_incref(_var2));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*incls) = NULL;
		(_vartmp=incls);
		(incls=_6e5d_c2r_incref(buildinclude(c0,gids)));
		_6e5d_c2r_decref(_vartmp);
		(_vartmp=gids);
		(gids=_6e5d_c2r_incref(_6e5d_c2prim_asList(gids)));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(gids)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*gid) = NULL;
					(_vartmp=gid);
					(gid=_6e5d_c2r_incref(_6e5d_c2prim_getItem(gids,idx)));
					_6e5d_c2r_decref(_vartmp);
					_6e5d_c2r_check(_6e5d_c1file_writeall(depfile,gid));
					_6e5d_c2r_check(_6e5d_c1file_writeall(depfile,_6e5d_c2prim_fromBuf("""\x0a""",1)));
					_6e5d_c2r_decref(gid);
				};
			};
			_6e5d_c2r_decref(idx);
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(incls)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(incls,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("struct",6)))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("union",5))))))){
						{
							_6e5d_c2r_check(_6e5d_c0c_translate(l,_6e5d_c2prim_fromU64(1),out));
						};
					};
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(incls)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(incls,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("struct",6)))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("union",5))))))){
						{
							_6e5d_c2r_check(_6e5d_c0c_translate(l,_6e5d_c2prim_fromU64(0),out));
						};
					};
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(incls)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(incls,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("fn",2)))){
						{
							_6e5d_c2r_check(_6e5d_c0c_translate(l,_6e5d_c2prim_fromU64(1),out));
						};
					};
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(c0)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(c0,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("struct",6)))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("union",5))))))){
						{
							_6e5d_c2r_check(_6e5d_c0c_translate(l,_6e5d_c2prim_fromU64(1),out));
						};
					};
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(c0)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(c0,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("struct",6)))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("union",5))))))){
						{
							_6e5d_c2r_check(_6e5d_c0c_translate(l,_6e5d_c2prim_fromU64(0),out));
						};
					};
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(c0)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(c0,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("fn",2)))){
						{
							_6e5d_c2r_check(_6e5d_c0c_translate(l,_6e5d_c2prim_fromU64(1),out));
						};
					};
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(c0)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(c0,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("struct",6)))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromBuf("union",5)))))))){
						{
							_6e5d_c2r_check(_6e5d_c0c_translate(l,_6e5d_c2prim_fromU64(0),out));
						};
					};
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_check(_6e5d_c1file_writeall(cfile,out));
		_6e5d_c2r_check(_6e5d_c1file_close(depfile));
		_6e5d_c2r_decref(incls);
		_6e5d_c2r_decref(gids);
		_6e5d_c2r_decref(depfile);
		_6e5d_c2r_decref(cfile);
		_6e5d_c2r_decref(lpath);
		_6e5d_c2r_decref(out);
		_6e5d_c2r_decref(c0);
		_6e5d_c2r_decref(path);
	};
	_6e5d_c2r_decref(args);
	return 0;
}
