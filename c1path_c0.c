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
size_t _6e5d_c0path_lib_normalize(char (*path));
void _6e5d_c0path_lib_normrel(char (*rel));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_rename(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*dst)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_mkdir0(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_unlink(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_rmdir(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_norm2(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_cwd());
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_chdir(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_ls(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_isreg(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_isdir(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_exist(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_mtime(_6e5d_c2r_lib_Object (*obj)));
static thread_local char pathbuf[PATH_MAX];
static thread_local char pathbuf2[PATH_MAX];
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_rename(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*dst))){
	auto int64_t cstrlen1 = _6e5d_c2prim_lib_cstr(src,pathbuf,PATH_MAX);
	auto int64_t cstrlen2 = _6e5d_c2prim_lib_cstr(dst,pathbuf2,PATH_MAX);
	_6e5d_c2r_lib_chk((&src));
	_6e5d_c2r_lib_chk((&dst));
	if((cstrlen1<0)){
		return NULL;
	}else if((cstrlen2<0)){
		return NULL;
	};
	assert((0==rename(pathbuf,pathbuf2)));
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_mkdir0(_6e5d_c2r_lib_Object (*path))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(path,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&path));
	if((cstrlen<0)){
		return NULL;
	};
	return _6e5d_c2prim_lib_fromBool((0==mkdir(pathbuf,0777)));
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_unlink(_6e5d_c2r_lib_Object (*path))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(path,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&path));
	if((cstrlen<0)){
		return NULL;
	};
	if((0!=unlink(pathbuf))){
		return NULL;
	};
	return _6e5d_c2prim_lib_fromU64(0);
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_rmdir(_6e5d_c2r_lib_Object (*path))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(path,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&path));
	if((cstrlen<0)){
		return NULL;
	};
	if((0>rmdir(pathbuf))){
		return NULL;
	};
	return _6e5d_c2prim_lib_fromU64(0);
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_norm2(_6e5d_c2r_lib_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&obj));
	if((cstrlen<0)){
		return NULL;
	};
	auto size_t len1 = _6e5d_c0path_lib_normalize(pathbuf);
	if((len1==0)){
		return NULL;
	};
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_fromBuf(pathbuf,len1);
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_cwd()){
	assert((NULL!=getcwd(pathbuf,PATH_MAX)));
	auto _6e5d_c2r_lib_Object (*path) = _6e5d_c2prim_lib_fromBuf(pathbuf,strlen(pathbuf));
	return path;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_chdir(_6e5d_c2r_lib_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&obj));
	if((cstrlen<0)){
		return NULL;
	};
	chdir(pathbuf);
	_6e5d_c2r_lib_chk((&obj));
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_ls(_6e5d_c2r_lib_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&obj));
	if((cstrlen<0)){
		return NULL;
	};
	auto DIR (*dp) = opendir(pathbuf);
	if((NULL==dp)){
		return NULL;
	};
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_listInit();
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(ret);
	while(true){
		auto struct dirent (*ep) = readdir(dp);
		if((ep==NULL)){
			break;
		};
		auto char (*name) = (ep->d_name);
		if(((0==strcmp(name,"."))||(0==strcmp(name,"..")))){
			continue;
		};
		auto _6e5d_c2r_lib_Object (*new) = _6e5d_c2prim_lib_fromBuf(name,strlen(name));
		_6e5d_c2r_lib_incref(new);
		_6e5d_vec_lib_pushv(v,(&new));
	};
	closedir(dp);
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_isreg(_6e5d_c2r_lib_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&obj));
	if((cstrlen<0)){
		return NULL;
	};
	auto struct stat st;
	auto int ok = lstat(pathbuf,(&st));
	if((0>ok)){
		return _6e5d_c2prim_lib_fromU64(0);
	};
	return _6e5d_c2prim_lib_fromU64((0!=S_ISREG((st.st_mode))));
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_isdir(_6e5d_c2r_lib_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&obj));
	if((cstrlen<0)){
		return NULL;
	};
	auto struct stat st;
	auto int ok = lstat(pathbuf,(&st));
	if((0>ok)){
		return _6e5d_c2prim_lib_fromU64(0);
	};
	return _6e5d_c2prim_lib_fromU64((0!=S_ISDIR((st.st_mode))));
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_exist(_6e5d_c2r_lib_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&obj));
	if((cstrlen<0)){
		return NULL;
	};
	return _6e5d_c2prim_lib_fromBool((!access(pathbuf,F_OK)));
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c0_mtime(_6e5d_c2r_lib_Object (*obj))){
	auto int64_t cstrlen = _6e5d_c2prim_lib_cstr(obj,pathbuf,PATH_MAX);
	_6e5d_c2r_lib_chk((&obj));
	if((cstrlen<0)){
		return NULL;
	};
	auto struct stat st;
	auto int ok = lstat(pathbuf,(&st));
	if((0>ok)){
		return NULL;
	};
	return _6e5d_c2prim_lib_fromU64(((uint64_t )(st.st_mtime)));
}
