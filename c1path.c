#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<dirent.h>
#include<unistd.h>
#include<limits.h>
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
int64_t _6e5d_c2prim_cstr(_6e5d_c2r_Object (*obj),char (*out),size_t maxlen);
_6e5d_c2r_Object (*_6e5d_c1str_rsplit(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*delim),_6e5d_c2r_Object (*times)));
_6e5d_c2r_Object (*_6e5d_c1str_rindex(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x)));
_6e5d_c2r_Object (*_6e5d_c1str_append(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2)));
_6e5d_c2r_Object (*_6e5d_c1str_join(_6e5d_c2r_Object (*lists)));
size_t _6e5d_c0path_normalize(char (*path));
_6e5d_c2r_Object (*_6e5d_c1path_rename(_6e5d_c2r_Object (*src),_6e5d_c2r_Object (*dst)));
_6e5d_c2r_Object (*_6e5d_c1path_basename(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*mkdir0(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_parent(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_mkdir1(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_pmkdir(_6e5d_c2r_Object (*path0)));
_6e5d_c2r_Object (*_6e5d_c1path_unlink(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_rmdir(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*norm2(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_norm(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_cwd());
_6e5d_c2r_Object (*_6e5d_c1path_chdir(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_rel(_6e5d_c2r_Object (*abs),_6e5d_c2r_Object (*r)));
_6e5d_c2r_Object (*_6e5d_c1path_ls(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_ls2(_6e5d_c2r_Object (*d)));
_6e5d_c2r_Object (*_6e5d_c1path_isreg(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_isdir(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_exist(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_walkfiles(_6e5d_c2r_Object (*d)));
_6e5d_c2r_Object (*_6e5d_c1path_mtime(_6e5d_c2r_Object (*obj)));
static thread_local char pathbuf[PATH_MAX];
static thread_local char pathbuf2[PATH_MAX];
_6e5d_c2r_Object (*_6e5d_c1path_rename(_6e5d_c2r_Object (*src),_6e5d_c2r_Object (*dst))){
	auto int64_t cstrlen1 = _6e5d_c2prim_cstr(src,pathbuf,PATH_MAX);
	auto int64_t cstrlen2 = _6e5d_c2prim_cstr(dst,pathbuf2,PATH_MAX);
	_6e5d_c2r_check(src);
	_6e5d_c2r_check(dst);
	if((cstrlen1<0)){
		return NULL;
	}else if((cstrlen2<0)){
		return NULL;
	};
	assert((0==rename(pathbuf,pathbuf2)));
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1path_basename(_6e5d_c2r_Object (*path))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(path);
	{
		auto _6e5d_c2r_Object (*sp) = NULL;
		(_vartmp=sp);
		(sp=_6e5d_c2r_incref(_6e5d_c1str_rsplit(path,_6e5d_c2prim_fromU64('\x2f'),_6e5d_c2prim_fromU64(1))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_le(_6e5d_c2prim_length(sp),_6e5d_c2prim_fromU64(1)))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(sp);
				_6e5d_c2r_decref(path);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		(_vartmp=_6e5d_c2prim_getItem(sp,_6e5d_c2prim_fromU64(1)));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(sp);
		_6e5d_c2r_decref(path);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(sp);
	};
	_6e5d_c2r_decref(path);
	return NULL;
}
_6e5d_c2r_Object (*mkdir0(_6e5d_c2r_Object (*path))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(path,pathbuf,PATH_MAX);
	_6e5d_c2r_check(path);
	if((cstrlen<0)){
		return NULL;
	};
	return _6e5d_c2prim_fromBool((0==mkdir(pathbuf,0777)));
}
_6e5d_c2r_Object (*_6e5d_c1path_parent(_6e5d_c2r_Object (*path))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(path);
	{
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		(ret=_6e5d_c2r_incref(_6e5d_c2prim_asBytes(path)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*index) = NULL;
		(_vartmp=index);
		(index=_6e5d_c2r_incref(_6e5d_c1str_rindex(ret,_6e5d_c2prim_fromU64('\x2f'))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(index))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(index);
				_6e5d_c2r_decref(ret);
				_6e5d_c2r_decref(path);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		_6e5d_c2r_check(_6e5d_c2prim_resize(ret,index));
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(ret)))){
			{
				(_vartmp=ret);
				(ret=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("/",1)));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(index);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(path);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(index);
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(path);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1path_mkdir1(_6e5d_c2r_Object (*path))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(path);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c1path_exist(path))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c1path_isdir(path))){
					{
						(_vartmp=_6e5d_c2prim_fromU64(1));
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(path);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
					{
						(_vartmp=_6e5d_c2prim_fromU64(0));
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(path);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
			};
		};
		(_vartmp=mkdir0(path));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(path);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
	};
	_6e5d_c2r_decref(path);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1path_pmkdir(_6e5d_c2r_Object (*path0))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(path0);
	{
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(path0)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),l))){
			{
				abort();
			};
		};
		auto _6e5d_c2r_Object (*path) = NULL;
		(_vartmp=path);
		(path=_6e5d_c2r_incref(_6e5d_c2prim_asBytes(path0)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64('\x2f'),_6e5d_c2prim_getItem(path,_6e5d_c2prim_sub(l,_6e5d_c2prim_fromU64(1)))))){
			{
				_6e5d_c2r_check(_6e5d_c1str_push(path,_6e5d_c2prim_fromU64('\x2f')));
			};
		};
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(1)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,_6e5d_c2prim_length(path)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64('\x2f'),_6e5d_c2prim_getItem(path,idx)))){
					{
						_6e5d_c2prim_setItem(path,idx,_6e5d_c2prim_fromU64(0));
						if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1path_mkdir1(path)))){
							{
								(_vartmp=NULL);
								_6e5d_c2r_incref(_vartmp);
								_6e5d_c2r_decref(idx);
								_6e5d_c2r_decref(path);
								_6e5d_c2r_decref(l);
								_6e5d_c2r_decref(path0);
								_6e5d_c2r_deconly(_vartmp);
								return _vartmp;
							};
						};
						_6e5d_c2prim_setItem(path,idx,_6e5d_c2prim_fromU64('\x2f'));
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
		_6e5d_c2r_decref(path);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(path0);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(path);
		_6e5d_c2r_decref(l);
	};
	_6e5d_c2r_decref(path0);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1path_unlink(_6e5d_c2r_Object (*path))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(path,pathbuf,PATH_MAX);
	_6e5d_c2r_check(path);
	if((cstrlen<0)){
		return NULL;
	};
	if((0!=unlink(pathbuf))){
		return NULL;
	};
	return _6e5d_c2prim_fromU64(0);
}
_6e5d_c2r_Object (*_6e5d_c1path_rmdir(_6e5d_c2r_Object (*path))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(path,pathbuf,PATH_MAX);
	_6e5d_c2r_check(path);
	if((cstrlen<0)){
		return NULL;
	};
	if((0>rmdir(pathbuf))){
		return NULL;
	};
	return _6e5d_c2prim_fromU64(0);
}
_6e5d_c2r_Object (*norm2(_6e5d_c2r_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_check(obj);
	if((cstrlen<0)){
		return NULL;
	};
	auto size_t len1 = _6e5d_c0path_normalize(pathbuf);
	if((len1==0)){
		return NULL;
	};
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromBuf(pathbuf,len1);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c1path_norm(_6e5d_c2r_Object (*path))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(path);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(path)))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(path);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*path2) = NULL;
		(_vartmp=path2);
		(path2=_6e5d_c2r_incref(path));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_getItem(path,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromU64('\x2f')))){
			{
				(_vartmp=path2);
				(path2=_6e5d_c2r_incref(_6e5d_c1path_cwd()));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_check(_6e5d_c1str_push(path2,_6e5d_c2prim_fromU64('\x2f')));
				_6e5d_c2r_check(_6e5d_c1str_append(path2,path));
			};
		};
		(_vartmp=norm2(path2));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(path2);
		_6e5d_c2r_decref(path);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(path2);
	};
	_6e5d_c2r_decref(path);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1path_cwd()){
	assert((NULL!=getcwd(pathbuf,PATH_MAX)));
	auto _6e5d_c2r_Object (*path) = _6e5d_c2prim_fromBuf(pathbuf,strlen(pathbuf));
	(path=_6e5d_c1path_norm(path));
	return path;
}
_6e5d_c2r_Object (*_6e5d_c1path_chdir(_6e5d_c2r_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_check(obj);
	if((cstrlen<0)){
		return NULL;
	};
	chdir(pathbuf);
	_6e5d_c2r_check(obj);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1path_rel(_6e5d_c2r_Object (*abs),_6e5d_c2r_Object (*r))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(abs);
	_6e5d_c2r_incref(r);
	{
		auto _6e5d_c2r_Object (*concat) = NULL;
		(_vartmp=concat);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(3));
		_6e5d_c2prim_listSet(_var0,0,abs);
		_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf("/",1));
		_6e5d_c2prim_listSet(_var0,2,r);
		(concat=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
		_6e5d_c2r_decref(_vartmp);
		(_vartmp=_6e5d_c1path_norm(concat));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(concat);
		_6e5d_c2r_decref(r);
		_6e5d_c2r_decref(abs);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(concat);
	};
	_6e5d_c2r_decref(r);
	_6e5d_c2r_decref(abs);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1path_ls(_6e5d_c2r_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_check(obj);
	if((cstrlen<0)){
		return NULL;
	};
	auto DIR (*dp) = opendir(pathbuf);
	if((NULL==dp)){
		return NULL;
	};
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_listInit();
	_6e5d_c2r_incref(ret);
	while(true){
		auto struct dirent (*ep) = readdir(dp);
		if((ep==NULL)){
			break;
		};
		auto char (*name) = (ep->d_name);
		if(((0==strcmp(name,"."))||(0==strcmp(name,"..")))){
			continue;
		};
		auto _6e5d_c2r_Object (*new) = _6e5d_c2prim_fromBuf(name,strlen(name));
		_6e5d_c1str_push(ret,new);
	};
	closedir(dp);
	_6e5d_c2r_deconly(ret);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c1path_ls2(_6e5d_c2r_Object (*d))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(d);
	{
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		(ret=_6e5d_c2r_incref(_6e5d_c1path_ls(d)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(ret))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(ret);
				_6e5d_c2r_decref(d);
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(ret)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*sub) = NULL;
					(_vartmp=sub);
					(sub=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ret,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*_var0) = NULL;
					(_var0=_6e5d_c2prim_listInit());
					_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(3));
					_6e5d_c2prim_listSet(_var0,0,d);
					_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf("/",1));
					_6e5d_c2prim_listSet(_var0,2,sub);
					_6e5d_c2prim_setItem(ret,idx,_6e5d_c1str_join(_var0));
					_6e5d_c2r_decref(sub);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(d);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(d);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1path_isreg(_6e5d_c2r_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_check(obj);
	if((cstrlen<0)){
		return NULL;
	};
	auto struct stat st;
	auto int ok = lstat(pathbuf,(&st));
	if((0>ok)){
		return _6e5d_c2prim_fromU64(0);
	};
	return _6e5d_c2prim_fromU64((0!=S_ISREG((st.st_mode))));
}
_6e5d_c2r_Object (*_6e5d_c1path_isdir(_6e5d_c2r_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_check(obj);
	if((cstrlen<0)){
		return NULL;
	};
	auto struct stat st;
	auto int ok = lstat(pathbuf,(&st));
	if((0>ok)){
		return _6e5d_c2prim_fromU64(0);
	};
	return _6e5d_c2prim_fromU64((0!=S_ISDIR((st.st_mode))));
}
_6e5d_c2r_Object (*_6e5d_c1path_exist(_6e5d_c2r_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_check(obj);
	if((cstrlen<0)){
		return NULL;
	};
	return _6e5d_c2prim_fromBool((!access(pathbuf,F_OK)));
}
_6e5d_c2r_Object (*_6e5d_c1path_walkfiles(_6e5d_c2r_Object (*d))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(d);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c1path_isreg(d))){
			{
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(1));
				_6e5d_c2prim_listSet(_var0,0,d);
				(_vartmp=_var0);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(d);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1path_isdir(d)))){
			{
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				(_vartmp=_var0);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(d);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(ret=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*ds) = NULL;
		(_vartmp=ds);
		(ds=_6e5d_c2r_incref(_6e5d_c1path_ls2(d)));
		_6e5d_c2r_decref(_vartmp);
		{
			auto _6e5d_c2r_Object (*_) = NULL;
			(_vartmp=_);
			(_=_6e5d_c2r_incref(NULL));
			_6e5d_c2r_decref(_vartmp);
			while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
				{
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(_))){
						{
							(_vartmp=_);
							(_=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
							_6e5d_c2r_decref(_vartmp);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							(_vartmp=_);
							(_=_6e5d_c2r_incref(_6e5d_c2prim_add(_,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(_,_6e5d_c2prim_length(ds)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*sub) = NULL;
					(_vartmp=sub);
					(sub=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ds,_)));
					_6e5d_c2r_decref(_vartmp);
					_6e5d_c2r_check(_6e5d_c1str_append(ret,_6e5d_c1path_walkfiles(sub)));
					_6e5d_c2r_decref(sub);
				};
			};
			_6e5d_c2r_decref(_);
		};
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(ds);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(d);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(ds);
		_6e5d_c2r_decref(ret);
	};
	_6e5d_c2r_decref(d);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1path_mtime(_6e5d_c2r_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_check(obj);
	if((cstrlen<0)){
		return NULL;
	};
	auto struct stat st;
	auto int ok = lstat(pathbuf,(&st));
	if((0>ok)){
		return NULL;
	};
	return _6e5d_c2prim_fromU64(((uint64_t )(st.st_mtime)));
}
