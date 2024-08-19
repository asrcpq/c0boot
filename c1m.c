#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
typedef union _6e5d_c2r_Value _6e5d_c2r_Value;
typedef struct _6e5d_vec_Vec _6e5d_vec_Vec;
typedef struct _6e5d_hashmap_Hashmap _6e5d_hashmap_Hashmap;
typedef struct _6e5d_c2r_Object _6e5d_c2r_Object;
union _6e5d_c2r_Value{
	int64_t i64;
	uint64_t u64;
	float f32;
	void (*pfn)(void );
	_6e5d_vec_Vec (*v);
	_6e5d_hashmap_Hashmap (*map);
	uint8_t (*lbuf);
};
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
_6e5d_c2r_Object (*_6e5d_c1ltr_parse(_6e5d_c2r_Object (*s)));
_6e5d_c2r_Object (*_6e5d_c1ltr_dump(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_parent(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_basename(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_rel(_6e5d_c2r_Object (*abs),_6e5d_c2r_Object (*r)));
_6e5d_c2r_Object (*_6e5d_c1path_norm(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_pmkdir(_6e5d_c2r_Object (*path0)));
_6e5d_c2r_Object (*_6e5d_c1path_mtime(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_isreg(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_isdir(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1file_readall(_6e5d_c2r_Object (*file)));
_6e5d_c2r_Object (*_6e5d_c1file_writeall(_6e5d_c2r_Object (*dst),_6e5d_c2r_Object (*data)));
_6e5d_c2r_Object (*_6e5d_c1str_contains(_6e5d_c2r_Object (*li),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x)));
_6e5d_c2r_Object (*_6e5d_c1str_append(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2)));
_6e5d_c2r_Object (*_6e5d_c1str_slice(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*i1),_6e5d_c2r_Object (*i2)));
_6e5d_c2r_Object (*_6e5d_c1m_gid2c(_6e5d_c2r_Object (*gid)));
_6e5d_c2r_Object (*_6e5d_c1m_c2gid(_6e5d_c2r_Object (*sym)));
_6e5d_c2r_Object (*loadcached(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*path2gid(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*importmacro(_6e5d_c2r_Object (*macros),_6e5d_c2r_Object (*gid),_6e5d_c2r_Object (*table),_6e5d_c2r_Object (*l)));
_6e5d_c2r_Object (*substitute(_6e5d_c2r_Object (*args),_6e5d_c2r_Object (*rest),_6e5d_c2r_Object (*file),_6e5d_c2r_Object (*body)));
_6e5d_c2r_Object (*procfn(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*file),_6e5d_c2r_Object (*body)));
_6e5d_c2r_Object (*proc(_6e5d_c2r_Object (*macros),_6e5d_c2r_Object (*rest),_6e5d_c2r_Object (*file),_6e5d_c2r_Object (*mi),_6e5d_c2r_Object (*l)));
_6e5d_c2r_Object (*mcache2(_6e5d_c2r_Object (*gid),_6e5d_c2r_Object (*path),_6e5d_c2r_Object (*ret)));
_6e5d_c2r_Object (*mcache(_6e5d_c2r_Object (*gid)));
_6e5d_c2r_Object (*_6e5d_c1m_build(_6e5d_c2r_Object (*src),_6e5d_c2r_Object (*dst)));
_6e5d_c2r_Object (*_6e5d_c1m_gid2c(_6e5d_c2r_Object (*gid))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(gid);
	{
		(_vartmp=gid);
		(gid=_6e5d_c2r_incref(_6e5d_c2prim_asBytes(gid)));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(gid)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ch) = NULL;
					(_vartmp=ch);
					(ch=_6e5d_c2r_incref(_6e5d_c2prim_getItem(gid,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(ch,_6e5d_c2prim_fromU64('\x2f')))){
						{
							_6e5d_c2prim_setItem(gid,idx,_6e5d_c2prim_fromU64('\x5f'));
						};
					};
					_6e5d_c2r_decref(ch);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=gid);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(gid);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
	};
	_6e5d_c2r_decref(gid);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1m_c2gid(_6e5d_c2r_Object (*sym))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(sym);
	{
		(_vartmp=sym);
		(sym=_6e5d_c2r_incref(_6e5d_c2prim_asBytes(sym)));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(sym)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ch) = NULL;
					(_vartmp=ch);
					(ch=_6e5d_c2r_incref(_6e5d_c2prim_getItem(sym,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(ch,_6e5d_c2prim_fromU64('\x5f')))){
						{
							_6e5d_c2prim_setItem(sym,idx,_6e5d_c2prim_fromU64('\x2f'));
						};
					};
					_6e5d_c2r_decref(ch);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=_6e5d_c1path_parent(sym));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(sym);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
	};
	_6e5d_c2r_decref(sym);
	return NULL;
}
_6e5d_c2r_Object (*loadcached(_6e5d_c2r_Object (*path))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(path);
	{
		auto _6e5d_c2r_Object (*obj) = NULL;
		(_vartmp=obj);
		(obj=_6e5d_c2r_incref(_6e5d_c1file_readall(path)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(obj))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		(_vartmp=obj);
		(obj=_6e5d_c2r_incref(_6e5d_c1ltr_parse(obj)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(obj))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_mapInit());
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(obj)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ll) = NULL;
					(_vartmp=ll);
					(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(obj,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*name) = NULL;
					(_vartmp=name);
					(name=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ll,_6e5d_c2prim_fromU64(1))));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(name))){
						{
							_6e5d_c2prim_setItem(ret,name,ll);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(name))){
						{
							(_vartmp=name);
							(name=_6e5d_c2r_incref(_6e5d_c2prim_getItem(name,_6e5d_c2prim_fromU64(0))));
							_6e5d_c2r_decref(_vartmp);
							_6e5d_c2prim_setItem(ret,name,ll);
						};
					};
					_6e5d_c2r_decref(name);
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(obj);
		_6e5d_c2r_decref(path);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(obj);
	};
	_6e5d_c2r_decref(path);
	return NULL;
}
_6e5d_c2r_Object (*path2gid(_6e5d_c2r_Object (*path))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(path);
	{
		(_vartmp=path);
		(path=_6e5d_c2r_incref(_6e5d_c2prim_asBytes(path)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c1str_contains(_6e5d_c1path_basename(path),_6e5d_c2prim_fromU64('\x2e')))){
			{
				(_vartmp=path);
				(path=_6e5d_c2r_incref(_6e5d_c1path_parent(path)));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=path);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(path);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
	};
	_6e5d_c2r_decref(path);
	return NULL;
}
_6e5d_c2r_Object (*importmacro(_6e5d_c2r_Object (*macros),_6e5d_c2r_Object (*gid),_6e5d_c2r_Object (*table),_6e5d_c2r_Object (*l))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(macros);
	_6e5d_c2r_incref(gid);
	_6e5d_c2r_incref(table);
	_6e5d_c2r_incref(l);
	{
		auto _6e5d_c2r_Object (*alias) = NULL;
		(_vartmp=alias);
		(alias=_6e5d_c2r_incref(NULL));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*real) = NULL;
		(_vartmp=real);
		(real=_6e5d_c2r_incref(NULL));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*symbols) = NULL;
		(_vartmp=symbols);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(symbols=_6e5d_c2r_incref(_var0));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(ll))){
						{
							(_vartmp=alias);
							(alias=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ll,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
							(_vartmp=real);
							(real=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ll,_6e5d_c2prim_fromU64(0))));
							_6e5d_c2r_decref(_vartmp);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							(_vartmp=alias);
							(alias=_6e5d_c2r_incref(ll));
							_6e5d_c2r_decref(_vartmp);
							(_vartmp=real);
							(real=_6e5d_c2r_incref(ll));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					auto _6e5d_c2r_Object (*asmacro) = NULL;
					(_vartmp=asmacro);
					(asmacro=_6e5d_c2r_incref(_6e5d_c2prim_getItem(table,real)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(asmacro))){
						{
							auto _6e5d_c2r_Object (*c) = NULL;
							(_vartmp=c);
							(c=_6e5d_c2r_incref(_6e5d_c1m_gid2c(_6e5d_c1path_rel(gid,real))));
							_6e5d_c2r_decref(_vartmp);
							auto _6e5d_c2r_Object (*_var1) = NULL;
							(_var1=_6e5d_c2prim_listInit());
							_6e5d_c2prim_resize(_var1,_6e5d_c2prim_fromU64(3));
							auto _6e5d_c2r_Object (*_var2) = NULL;
							(_var2=_6e5d_c2prim_listInit());
							_6e5d_c2prim_resize(_var2,_6e5d_c2prim_fromU64(1));
							_6e5d_c2prim_listSet(_var2,0,c);
							_6e5d_c2prim_listSet(_var1,0,_var2);
							_6e5d_c2prim_listSet(_var1,1,alias);
							_6e5d_c2prim_listSet(_var1,2,c);
							_6e5d_c2prim_setItem(macros,alias,_var1);
							_6e5d_c2r_check(_6e5d_c1str_push(symbols,c));
							_6e5d_c2r_decref(c);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							_6e5d_c2prim_setItem(macros,alias,asmacro);
						};
					};
					_6e5d_c2r_decref(asmacro);
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=symbols);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(symbols);
		_6e5d_c2r_decref(real);
		_6e5d_c2r_decref(alias);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(table);
		_6e5d_c2r_decref(gid);
		_6e5d_c2r_decref(macros);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(symbols);
		_6e5d_c2r_decref(real);
		_6e5d_c2r_decref(alias);
	};
	_6e5d_c2r_decref(l);
	_6e5d_c2r_decref(table);
	_6e5d_c2r_decref(gid);
	_6e5d_c2r_decref(macros);
	return NULL;
}
_6e5d_c2r_Object (*substitute(_6e5d_c2r_Object (*args),_6e5d_c2r_Object (*rest),_6e5d_c2r_Object (*file),_6e5d_c2r_Object (*body))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(args);
	_6e5d_c2r_incref(rest);
	_6e5d_c2r_incref(file);
	_6e5d_c2r_incref(body);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(body))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isNil(file)))&&_6e5d_c2prim_toBool(_6e5d_c2prim_eq(body,_6e5d_c2prim_fromBuf("_FILE",5))))))){
					{
						(_vartmp=file);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(body);
						_6e5d_c2r_decref(file);
						_6e5d_c2r_decref(rest);
						_6e5d_c2r_decref(args);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				auto _6e5d_c2r_Object (*val) = NULL;
				(_vartmp=val);
				(val=_6e5d_c2r_incref(_6e5d_c2prim_getItem(args,body)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(val))){
					{
						(_vartmp=body);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(val);
						_6e5d_c2r_decref(body);
						_6e5d_c2r_decref(file);
						_6e5d_c2r_decref(rest);
						_6e5d_c2r_decref(args);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				(_vartmp=val);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(val);
				_6e5d_c2r_decref(body);
				_6e5d_c2r_decref(file);
				_6e5d_c2r_decref(rest);
				_6e5d_c2r_decref(args);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
				_6e5d_c2r_decref(val);
			};
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(body)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(body,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(l))&&_6e5d_c2prim_toBool(_6e5d_c2prim_eq(l,_6e5d_c2prim_fromBuf("_REST",5))))))){
						{
							_6e5d_c2r_check(_6e5d_c1str_append(ret,rest));
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							_6e5d_c2r_check(_6e5d_c1str_push(ret,substitute(args,rest,file,l)));
						};
					};
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(ret)))){
			{
				auto _6e5d_c2r_Object (*_var1) = NULL;
				(_var1=_6e5d_c2prim_listInit());
				(_vartmp=_var1);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(ret);
				_6e5d_c2r_decref(body);
				_6e5d_c2r_decref(file);
				_6e5d_c2r_decref(rest);
				_6e5d_c2r_decref(args);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*first) = NULL;
		(_vartmp=first);
		(first=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ret,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_ne(first,_6e5d_c2prim_fromBuf("_STRCAT",7)))||_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(file)))))){
			{
				(_vartmp=ret);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(first);
				_6e5d_c2r_decref(ret);
				_6e5d_c2r_decref(body);
				_6e5d_c2r_decref(file);
				_6e5d_c2r_decref(rest);
				_6e5d_c2r_decref(args);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*cat) = NULL;
		(_vartmp=cat);
		(cat=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("",0)));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(ret)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*l) = NULL;
					(_vartmp=l);
					(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ret,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
						{
							_6e5d_c2r_decref(l);
							continue;
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(idx))){
						{
							_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("substitute _STRCAT failed",25));
							dprintf(2," ");
							_6e5d_c2prim_printobj(2,body);
							dprintf(2," ");
							_6e5d_c2prim_printobj(2,ret);
							dprintf(2,"""\x0a""");
							abort();
						};
					};
					_6e5d_c2r_check(_6e5d_c1str_append(cat,l));
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=cat);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(cat);
		_6e5d_c2r_decref(first);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(body);
		_6e5d_c2r_decref(file);
		_6e5d_c2r_decref(rest);
		_6e5d_c2r_decref(args);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(cat);
		_6e5d_c2r_decref(first);
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(body);
	_6e5d_c2r_decref(file);
	_6e5d_c2r_decref(rest);
	_6e5d_c2r_decref(args);
	return NULL;
}
_6e5d_c2r_Object (*procfn(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*file),_6e5d_c2r_Object (*body))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(file);
	_6e5d_c2r_incref(body);
	{
		auto _6e5d_c2r_Object (*vars) = NULL;
		(_vartmp=vars);
		(vars=_6e5d_c2r_incref(_6e5d_c2prim_getItem(body,_6e5d_c2prim_fromU64(1))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_isList(vars),_6e5d_c2prim_isList(l)))){
			{
				(_vartmp=l);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(vars);
				_6e5d_c2r_decref(body);
				_6e5d_c2r_decref(file);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*args) = NULL;
		(_vartmp=args);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_mapInit());
		(args=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*rest) = NULL;
		(_vartmp=rest);
		auto _6e5d_c2r_Object (*_var1) = NULL;
		(_var1=_6e5d_c2prim_listInit());
		(rest=_6e5d_c2r_incref(_var1));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(vars))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(_6e5d_c2prim_length(l),_6e5d_c2prim_length(vars)))){
					{
						_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("insufficient args",17));
						dprintf(2," ");
						_6e5d_c2prim_printobj(2,l);
						dprintf(2," ");
						_6e5d_c2prim_printobj(2,vars);
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(vars)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*var) = NULL;
							(_vartmp=var);
							(var=_6e5d_c2r_incref(_6e5d_c2prim_getItem(vars,idx)));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
								{
									_6e5d_c2r_decref(var);
									continue;
								};
							};
							_6e5d_c2prim_setItem(args,var,_6e5d_c2prim_getItem(l,idx));
							_6e5d_c2r_decref(var);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				(_vartmp=rest);
				(rest=_6e5d_c2r_incref(_6e5d_c1str_slice(l,_6e5d_c2prim_length(vars),_6e5d_c2prim_length(l))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=l);
		auto _6e5d_c2r_Object (*_var2) = NULL;
		(_var2=_6e5d_c2prim_listInit());
		(l=_6e5d_c2r_incref(_var2));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(body)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ll) = NULL;
					(_vartmp=ll);
					(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(body,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,_6e5d_c2prim_fromU64(2)))){
						{
							_6e5d_c2r_decref(ll);
							continue;
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(ll,_6e5d_c2prim_fromBuf("_REST",5)))){
						{
							_6e5d_c2r_check(_6e5d_c1str_append(l,rest));
							_6e5d_c2r_decref(ll);
							continue;
						};
					};
					_6e5d_c2r_check(_6e5d_c1str_push(l,substitute(args,rest,file,ll)));
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=l);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(rest);
		_6e5d_c2r_decref(args);
		_6e5d_c2r_decref(vars);
		_6e5d_c2r_decref(body);
		_6e5d_c2r_decref(file);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(rest);
		_6e5d_c2r_decref(args);
		_6e5d_c2r_decref(vars);
	};
	_6e5d_c2r_decref(body);
	_6e5d_c2r_decref(file);
	_6e5d_c2r_decref(l);
	return NULL;
}
_6e5d_c2r_Object (*proc(_6e5d_c2r_Object (*macros),_6e5d_c2r_Object (*rest),_6e5d_c2r_Object (*file),_6e5d_c2r_Object (*mi),_6e5d_c2r_Object (*l))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(macros);
	_6e5d_c2r_incref(rest);
	_6e5d_c2r_incref(file);
	_6e5d_c2r_incref(mi);
	_6e5d_c2r_incref(l);
	{
		auto _6e5d_c2r_Object (*incls) = NULL;
		(_vartmp=incls);
		(incls=_6e5d_c2r_incref(NULL));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(l))){
			{
				auto _6e5d_c2r_Object (*expand) = NULL;
				(_vartmp=expand);
				(expand=_6e5d_c2r_incref(_6e5d_c2prim_getItem(macros,l)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(expand))){
					{
						auto _6e5d_c2r_Object (*_var0) = NULL;
						(_var0=_6e5d_c2prim_listInit());
						_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(1));
						_6e5d_c2prim_listSet(_var0,0,_6e5d_c2prim_asBytes(l));
						(_vartmp=_var0);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(expand);
						_6e5d_c2r_decref(incls);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(mi);
						_6e5d_c2r_decref(file);
						_6e5d_c2r_decref(rest);
						_6e5d_c2r_decref(macros);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				(_vartmp=incls);
				(incls=_6e5d_c2r_incref(_6e5d_c2prim_getItem(expand,_6e5d_c2prim_fromU64(0))));
				_6e5d_c2r_decref(_vartmp);
				(_vartmp=l);
				(l=_6e5d_c2r_incref(procfn(l,file,expand)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(l))){
					{
						auto _6e5d_c2r_Object (*_var0) = NULL;
						(_var0=_6e5d_c2prim_listInit());
						_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(1));
						_6e5d_c2prim_listSet(_var0,0,l);
						(_vartmp=_var0);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(expand);
						_6e5d_c2r_decref(incls);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(mi);
						_6e5d_c2r_decref(file);
						_6e5d_c2r_decref(rest);
						_6e5d_c2r_decref(macros);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				_6e5d_c2r_decref(expand);
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				auto _6e5d_c2r_Object (*ret) = NULL;
				(_vartmp=ret);
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				(ret=_6e5d_c2r_incref(_var0));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(l)))){
					{
						auto _6e5d_c2r_Object (*_var1) = NULL;
						(_var1=_6e5d_c2prim_listInit());
						_6e5d_c2prim_resize(_var1,_6e5d_c2prim_fromU64(1));
						_6e5d_c2prim_listSet(_var1,0,ret);
						(_vartmp=_var1);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(ret);
						_6e5d_c2r_decref(incls);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(mi);
						_6e5d_c2r_decref(file);
						_6e5d_c2r_decref(rest);
						_6e5d_c2r_decref(macros);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*ll) = NULL;
							(_vartmp=ll);
							(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
							_6e5d_c2r_decref(_vartmp);
							_6e5d_c2r_check(_6e5d_c1str_append(ret,proc(macros,rest,file,mi,ll)));
							_6e5d_c2r_decref(ll);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				(_vartmp=l);
				(l=_6e5d_c2r_incref(ret));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(l)))||_6e5d_c2prim_toBool(_6e5d_c2prim_isList(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)))))))){
					{
						auto _6e5d_c2r_Object (*_var1) = NULL;
						(_var1=_6e5d_c2prim_listInit());
						_6e5d_c2prim_resize(_var1,_6e5d_c2prim_fromU64(1));
						_6e5d_c2prim_listSet(_var1,0,l);
						(_vartmp=_var1);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(ret);
						_6e5d_c2r_decref(incls);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(mi);
						_6e5d_c2r_decref(file);
						_6e5d_c2r_decref(rest);
						_6e5d_c2r_decref(macros);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				auto _6e5d_c2r_Object (*expand) = NULL;
				(_vartmp=expand);
				(expand=_6e5d_c2r_incref(_6e5d_c2prim_getItem(macros,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0)))));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(expand))){
					{
						auto _6e5d_c2r_Object (*_var1) = NULL;
						(_var1=_6e5d_c2prim_listInit());
						_6e5d_c2prim_resize(_var1,_6e5d_c2prim_fromU64(1));
						_6e5d_c2prim_listSet(_var1,0,l);
						(_vartmp=_var1);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(expand);
						_6e5d_c2r_decref(ret);
						_6e5d_c2r_decref(incls);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(mi);
						_6e5d_c2r_decref(file);
						_6e5d_c2r_decref(rest);
						_6e5d_c2r_decref(macros);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				(_vartmp=incls);
				(incls=_6e5d_c2r_incref(_6e5d_c2prim_getItem(expand,_6e5d_c2prim_fromU64(0))));
				_6e5d_c2r_decref(_vartmp);
				(_vartmp=l);
				(l=_6e5d_c2r_incref(procfn(l,file,expand)));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_decref(expand);
				_6e5d_c2r_decref(ret);
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(incls)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*incl) = NULL;
					(_vartmp=incl);
					(incl=_6e5d_c2r_incref(_6e5d_c2prim_getItem(incls,idx)));
					_6e5d_c2r_decref(_vartmp);
					_6e5d_c2prim_setItem(mi,incl,_6e5d_c2prim_fromU64(0));
					_6e5d_c2r_decref(incl);
				};
			};
			_6e5d_c2r_decref(idx);
		};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ll) = NULL;
					(_vartmp=ll);
					(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
					_6e5d_c2r_decref(_vartmp);
					_6e5d_c2r_check(_6e5d_c1str_append(ret,proc(macros,NULL,file,mi,ll)));
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(incls);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(mi);
		_6e5d_c2r_decref(file);
		_6e5d_c2r_decref(rest);
		_6e5d_c2r_decref(macros);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(incls);
	};
	_6e5d_c2r_decref(l);
	_6e5d_c2r_decref(mi);
	_6e5d_c2r_decref(file);
	_6e5d_c2r_decref(rest);
	_6e5d_c2r_decref(macros);
	return NULL;
}
_6e5d_c2r_Object (*mcache2(_6e5d_c2r_Object (*gid),_6e5d_c2r_Object (*path),_6e5d_c2r_Object (*ret))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(gid);
	_6e5d_c2r_incref(path);
	_6e5d_c2r_incref(ret);
	{
		auto _6e5d_c2r_Object (*cached) = NULL;
		(_vartmp=cached);
		(cached=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("/6e5d/c1m/c0.ltr/../cache",25)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c1str_append(cached,path));
		(_vartmp=cached);
		(cached=_6e5d_c2r_incref(_6e5d_c1path_norm(cached)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(ret))&&_6e5d_c2prim_toBool(_6e5d_c1path_isreg(cached))&&_6e5d_c2prim_toBool(_6e5d_c2prim_le(_6e5d_c1path_mtime(path),_6e5d_c1path_mtime(cached))))))){
			{
				(_vartmp=cached);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(cached);
				_6e5d_c2r_decref(ret);
				_6e5d_c2r_decref(path);
				_6e5d_c2r_decref(gid);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("c1m caching",11));
		dprintf(2," ");
		_6e5d_c2prim_printobj(2,path);
		dprintf(2,"""\x0a""");
		auto _6e5d_c2r_Object (*obj) = NULL;
		(_vartmp=obj);
		(obj=_6e5d_c2r_incref(_6e5d_c1file_readall(path)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(obj))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		(_vartmp=obj);
		(obj=_6e5d_c2r_incref(_6e5d_c1ltr_parse(obj)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(obj))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		auto _6e5d_c2r_Object (*macros) = NULL;
		(_vartmp=macros);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_mapInit());
		(macros=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*tocache) = NULL;
		(_vartmp=tocache);
		auto _6e5d_c2r_Object (*_var1) = NULL;
		(_var1=_6e5d_c2prim_listInit());
		(tocache=_6e5d_c2r_incref(_var1));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*includes) = NULL;
		(_vartmp=includes);
		auto _6e5d_c2r_Object (*_var2) = NULL;
		(_var2=_6e5d_c2prim_mapInit());
		(includes=_6e5d_c2r_incref(_var2));
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
					auto _6e5d_c2r_Object (*ismacrodef) = NULL;
					(_vartmp=ismacrodef);
					(ismacrodef=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*isinclude) = NULL;
					(_vartmp=isinclude);
					(isinclude=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_isList(l))&&_6e5d_c2prim_toBool(_6e5d_c2prim_lt(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(l))))))){
						{
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromBuf("macro",5),_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))))){
								{
									(_vartmp=ismacrodef);
									(ismacrodef=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(1)));
									_6e5d_c2r_decref(_vartmp);
								};
							};
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromBuf("include",7),_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))))){
								{
									(_vartmp=isinclude);
									(isinclude=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(1)));
									_6e5d_c2r_decref(_vartmp);
								};
							};
						};
					};
					if(_6e5d_c2prim_toBool(ismacrodef)){
						{
							auto _6e5d_c2r_Object (*name) = NULL;
							(_vartmp=name);
							(name=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
							auto _6e5d_c2r_Object (*mi) = NULL;
							(_vartmp=mi);
							auto _6e5d_c2r_Object (*_var3) = NULL;
							(_var3=_6e5d_c2prim_mapInit());
							(mi=_6e5d_c2r_incref(_var3));
							_6e5d_c2r_decref(_vartmp);
							auto _6e5d_c2r_Object (*new) = NULL;
							(_vartmp=new);
							auto _6e5d_c2r_Object (*_var4) = NULL;
							(_var4=_6e5d_c2prim_listInit());
							_6e5d_c2prim_resize(_var4,_6e5d_c2prim_fromU64(2));
							_6e5d_c2prim_listSet(_var4,0,NULL);
							_6e5d_c2prim_listSet(_var4,1,name);
							(new=_6e5d_c2r_incref(_var4));
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
										if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idy,_6e5d_c2prim_length(l)))){
											{
												break;
											};
										};
										auto _6e5d_c2r_Object (*ll) = NULL;
										(_vartmp=ll);
										(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idy)));
										_6e5d_c2r_decref(_vartmp);
										if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idy,_6e5d_c2prim_fromU64(2)))){
											{
												_6e5d_c2r_decref(ll);
												continue;
											};
										};
										auto _6e5d_c2r_Object (*body) = NULL;
										(_vartmp=body);
										(body=_6e5d_c2r_incref(proc(macros,NULL,NULL,mi,ll)));
										_6e5d_c2r_decref(_vartmp);
										_6e5d_c2r_check(_6e5d_c1str_append(new,body));
										_6e5d_c2r_decref(body);
										_6e5d_c2r_decref(ll);
									};
								};
								_6e5d_c2r_decref(idy);
							};
							_6e5d_c2prim_setItem(new,_6e5d_c2prim_fromU64(0),_6e5d_c2prim_asList(mi));
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(name))){
								{
									(_vartmp=name);
									(name=_6e5d_c2r_incref(_6e5d_c2prim_getItem(name,_6e5d_c2prim_fromU64(0))));
									_6e5d_c2r_decref(_vartmp);
								};
							};
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isBytes(name)))){
								{
									abort();
								};
							};
							_6e5d_c2prim_setItem(macros,name,new);
							_6e5d_c2r_check(_6e5d_c1str_push(tocache,new));
							_6e5d_c2r_decref(new);
							_6e5d_c2r_decref(mi);
							_6e5d_c2r_decref(name);
						};
					}else if(_6e5d_c2prim_toBool(isinclude)){
						{
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_fromBuf(".",1)))){
								{
									auto _6e5d_c2r_Object (*syms) = NULL;
									(_vartmp=syms);
									auto _6e5d_c2r_Object (*_var3) = NULL;
									(_var3=_6e5d_c2prim_mapInit());
									(syms=_6e5d_c2r_incref(importmacro(macros,gid,_var3,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2)))));
									_6e5d_c2r_decref(_vartmp);
									_6e5d_c2r_decref(syms);
								};
							}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isNil(ret)))){
								{
									auto _6e5d_c2r_Object (*abs) = NULL;
									(_vartmp=abs);
									(abs=_6e5d_c2r_incref(_6e5d_c1path_rel(gid,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)))));
									_6e5d_c2r_decref(_vartmp);
									auto _6e5d_c2r_Object (*table) = NULL;
									(_vartmp=table);
									(table=_6e5d_c2r_incref(loadcached(mcache(abs))));
									_6e5d_c2r_decref(_vartmp);
									_6e5d_c2r_check(importmacro(macros,abs,table,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2))));
									_6e5d_c2r_decref(table);
									_6e5d_c2r_decref(abs);
								};
							};
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(ret))){
								{
									_6e5d_c2r_decref(isinclude);
									_6e5d_c2r_decref(ismacrodef);
									_6e5d_c2r_decref(l);
									continue;
								};
							};
							auto _6e5d_c2r_Object (*mi) = NULL;
							(_vartmp=mi);
							auto _6e5d_c2r_Object (*_var3) = NULL;
							(_var3=_6e5d_c2prim_mapInit());
							(mi=_6e5d_c2r_incref(_var3));
							_6e5d_c2r_decref(_vartmp);
							_6e5d_c2r_check(_6e5d_c1str_append(ret,proc(macros,NULL,path,mi,l)));
							(_vartmp=mi);
							(mi=_6e5d_c2r_incref(_6e5d_c2prim_asList(mi)));
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
										if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idy,_6e5d_c2prim_length(mi)))){
											{
												break;
											};
										};
										auto _6e5d_c2r_Object (*incl) = NULL;
										(_vartmp=incl);
										(incl=_6e5d_c2r_incref(_6e5d_c2prim_getItem(mi,idy)));
										_6e5d_c2r_decref(_vartmp);
										auto _6e5d_c2r_Object (*gid2) = NULL;
										(_vartmp=gid2);
										(gid2=_6e5d_c2r_incref(_6e5d_c1m_c2gid(incl)));
										_6e5d_c2r_decref(_vartmp);
										auto _6e5d_c2r_Object (*ilist) = NULL;
										(_vartmp=ilist);
										(ilist=_6e5d_c2r_incref(_6e5d_c2prim_getItem(includes,gid2)));
										_6e5d_c2r_decref(_vartmp);
										if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(ilist))){
											{
												(_vartmp=ilist);
												auto _6e5d_c2r_Object (*_var4) = NULL;
												(_var4=_6e5d_c2prim_listInit());
												(ilist=_6e5d_c2r_incref(_var4));
												_6e5d_c2r_decref(_vartmp);
												_6e5d_c2prim_setItem(includes,gid2,ilist);
											};
										};
										if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1str_contains(ilist,incl)))){
											{
												_6e5d_c2r_check(_6e5d_c1str_push(ilist,incl));
											};
										};
										_6e5d_c2r_decref(ilist);
										_6e5d_c2r_decref(gid2);
										_6e5d_c2r_decref(incl);
									};
								};
								_6e5d_c2r_decref(idy);
							};
							_6e5d_c2r_decref(mi);
						};
					};
					_6e5d_c2r_decref(isinclude);
					_6e5d_c2r_decref(ismacrodef);
					_6e5d_c2r_decref(l);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isNil(ret)))){
			{
				auto _6e5d_c2r_Object (*inclgids) = NULL;
				(_vartmp=inclgids);
				(inclgids=_6e5d_c2r_incref(_6e5d_c2prim_asList(includes)));
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(inclgids)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*gid2) = NULL;
							(_vartmp=gid2);
							(gid2=_6e5d_c2r_incref(_6e5d_c2prim_getItem(inclgids,idx)));
							_6e5d_c2r_decref(_vartmp);
							auto _6e5d_c2r_Object (*writegid) = NULL;
							(_vartmp=writegid);
							(writegid=_6e5d_c2r_incref(gid2));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(gid2,gid))){
								{
									(_vartmp=writegid);
									(writegid=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf(".",1)));
									_6e5d_c2r_decref(_vartmp);
								};
							};
							auto _6e5d_c2r_Object (*_var3) = NULL;
							(_var3=_6e5d_c2prim_listInit());
							_6e5d_c2prim_resize(_var3,_6e5d_c2prim_fromU64(3));
							_6e5d_c2prim_listSet(_var3,0,_6e5d_c2prim_fromBuf("include",7));
							_6e5d_c2prim_listSet(_var3,1,writegid);
							_6e5d_c2prim_listSet(_var3,2,_6e5d_c2prim_getItem(includes,gid2));
							_6e5d_c2r_check(_6e5d_c1str_push(ret,_var3));
							_6e5d_c2r_decref(writegid);
							_6e5d_c2r_decref(gid2);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				_6e5d_c2r_decref(inclgids);
			};
		};
		auto _6e5d_c2r_Object (*output) = NULL;
		(_vartmp=output);
		(output=_6e5d_c2r_incref(_6e5d_c1ltr_dump(tocache)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(output))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		_6e5d_c2r_check(_6e5d_c1str_push(output,_6e5d_c2prim_fromU64('\x0a')));
		_6e5d_c2r_check(_6e5d_c1path_pmkdir(_6e5d_c1path_parent(cached)));
		auto _6e5d_c2r_Object (*_) = NULL;
		(_vartmp=_);
		(_=_6e5d_c2r_incref(_6e5d_c1file_writeall(cached,output)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(_))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		(_vartmp=cached);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(_);
		_6e5d_c2r_decref(output);
		_6e5d_c2r_decref(includes);
		_6e5d_c2r_decref(tocache);
		_6e5d_c2r_decref(macros);
		_6e5d_c2r_decref(obj);
		_6e5d_c2r_decref(cached);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(path);
		_6e5d_c2r_decref(gid);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(_);
		_6e5d_c2r_decref(output);
		_6e5d_c2r_decref(includes);
		_6e5d_c2r_decref(tocache);
		_6e5d_c2r_decref(macros);
		_6e5d_c2r_decref(obj);
		_6e5d_c2r_decref(cached);
	};
	_6e5d_c2r_decref(ret);
	_6e5d_c2r_decref(path);
	_6e5d_c2r_decref(gid);
	return NULL;
}
_6e5d_c2r_Object (*mcache(_6e5d_c2r_Object (*gid))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(gid);
	{
		auto _6e5d_c2r_Object (*path) = NULL;
		(_vartmp=path);
		(path=_6e5d_c2r_incref(gid));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c1path_isdir(path))){
			{
				(_vartmp=path);
				(path=_6e5d_c2r_incref(_6e5d_c1path_rel(path,_6e5d_c2prim_fromBuf("c0.ltr",6))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1path_isreg(path)))){
			{
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("failed to import",16));
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,path);
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		(_vartmp=mcache2(gid,path,NULL));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(path);
		_6e5d_c2r_decref(gid);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(path);
	};
	_6e5d_c2r_decref(gid);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1m_build(_6e5d_c2r_Object (*src),_6e5d_c2r_Object (*dst))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(src);
	_6e5d_c2r_incref(dst);
	{
		auto _6e5d_c2r_Object (*obj) = NULL;
		(_vartmp=obj);
		(obj=_6e5d_c2r_incref(_6e5d_c1file_readall(src)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(obj))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		(_vartmp=obj);
		(obj=_6e5d_c2r_incref(_6e5d_c1ltr_parse(obj)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(obj))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		auto _6e5d_c2r_Object (*gid) = NULL;
		(_vartmp=gid);
		(gid=_6e5d_c2r_incref(path2gid(src)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*out) = NULL;
		(_vartmp=out);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(out=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(mcache2(gid,src,out));
		auto _6e5d_c2r_Object (*output) = NULL;
		(_vartmp=output);
		(output=_6e5d_c2r_incref(_6e5d_c1ltr_dump(out)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(output))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		_6e5d_c2r_check(_6e5d_c1str_push(output,_6e5d_c2prim_fromU64('\x0a')));
		auto _6e5d_c2r_Object (*_) = NULL;
		(_vartmp=_);
		(_=_6e5d_c2r_incref(_6e5d_c1file_writeall(dst,output)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(_))){
			{
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		_6e5d_c2r_decref(_);
		_6e5d_c2r_decref(output);
		_6e5d_c2r_decref(out);
		_6e5d_c2r_decref(gid);
		_6e5d_c2r_decref(obj);
	};
	_6e5d_c2r_decref(dst);
	_6e5d_c2r_decref(src);
	return NULL;
}
