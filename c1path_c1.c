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
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_sort(_6e5d_c2r_lib_Object (*array),_6e5d_c2r_lib_Object (*op)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_ledump(_6e5d_c2r_lib_Object (*v),_6e5d_c2r_lib_Object (*buf)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_n2h(_6e5d_c2r_lib_Object (*n)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_hexdump(_6e5d_c2r_lib_Object (*b)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lfind(_6e5d_c2r_lib_Object (*h),_6e5d_c2r_lib_Object (*n)));
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
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_basename(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_parent(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_mkdir1(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_pmkdir(_6e5d_c2r_lib_Object (*path0)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_norm(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_rel(_6e5d_c2r_lib_Object (*abs),_6e5d_c2r_lib_Object (*r)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_ls2(_6e5d_c2r_lib_Object (*d)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_walkfiles(_6e5d_c2r_lib_Object (*d)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_basename(_6e5d_c2r_lib_Object (*path))){
	_6e5d_c2r_lib_incref(path);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*sp) = NULL;
	_6e5d_c2prim_lib_assign((&sp),_6e5d_c1str_lib_rsplit(path,_6e5d_c2prim_lib_fromU64(47),_6e5d_c2prim_lib_fromU64(1)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_le(_6e5d_c2prim_lib_length(sp),_6e5d_c2prim_lib_fromU64(1)))){
		(_return=NULL);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(path);
		_6e5d_c2r_lib_decref(sp);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	(_return=_6e5d_c2prim_lib_getItem(sp,_6e5d_c2prim_lib_fromU64(1)));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(sp);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(sp);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_parent(_6e5d_c2r_lib_Object (*path))){
	_6e5d_c2r_lib_incref(path);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*index) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_asBytes(path));
	_6e5d_c2prim_lib_assign((&index),_6e5d_c1str_lib_rindex(ret,_6e5d_c2prim_lib_fromU64(47)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(index))))){
		(_return=NULL);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(path);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(index);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(ret,index));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(ret)))){
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_fromBuf("/",1));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(index);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(index);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_mkdir1(_6e5d_c2r_lib_Object (*path))){
	_6e5d_c2r_lib_incref(path);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c1path_c0_exist(path))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c1path_c0_isdir(path))){
			(_return=_6e5d_c2prim_lib_fromU64(1));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(path);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			(_return=_6e5d_c2prim_lib_fromU64(0));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(path);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
	};
	(_return=_6e5d_c1path_c0_mkdir0(path));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_pmkdir(_6e5d_c2r_lib_Object (*path0))){
	_6e5d_c2r_lib_incref(path0);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*path) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_length(path0));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),l))){
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&path),_6e5d_c2prim_lib_asBytes(path0));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(47),_6e5d_c2prim_lib_getItem(path,_6e5d_c2prim_lib_sub(l,_6e5d_c2prim_lib_fromU64(1)))))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(path,_6e5d_c2prim_lib_fromU64(47)));
	};
	_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(1));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_length(path)))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(47),_6e5d_c2prim_lib_getItem(path,idx)))){
			_6e5d_c2prim_lib_setItem(path,idx,_6e5d_c2prim_lib_fromU64(0));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c1path_c1_mkdir1(path)))){
				(_return=NULL);
				_6e5d_c2r_lib_incref(_return);
				_6e5d_c2r_lib_decref(path0);
				_6e5d_c2r_lib_decref(l);
				_6e5d_c2r_lib_decref(path);
				_6e5d_c2r_lib_decref(idx);
				_6e5d_c2r_lib_deconly(_return);
				return _return;
			};
			_6e5d_c2prim_lib_setItem(path,idx,_6e5d_c2prim_lib_fromU64(47));
		};
		_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
	};
	(_return=_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path0);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path0);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(idx);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_norm(_6e5d_c2r_lib_Object (*path))){
	_6e5d_c2r_lib_incref(path);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*path2) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(path)))){
		(_return=NULL);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(path);
		_6e5d_c2r_lib_decref(path2);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&path2),path);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_getItem(path,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromU64(47)))){
		_6e5d_c2prim_lib_assign((&path2),_6e5d_c1path_c0_cwd());
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(path2,_6e5d_c2prim_lib_fromU64(47)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(path2,path));
	};
	(_return=_6e5d_c1path_c0_norm2(path2));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(path2);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(path2);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_rel(_6e5d_c2r_lib_Object (*abs),_6e5d_c2r_lib_Object (*r))){
	_6e5d_c2r_lib_incref(abs);
	_6e5d_c2r_lib_incref(r);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*lr) = NULL;
	auto _6e5d_c2r_lib_Object (*concat) = NULL;
	_6e5d_c2prim_lib_assign((&lr),_6e5d_c2prim_lib_length(r));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(lr,_6e5d_c2prim_lib_fromU64(0)))){
		(_return=_6e5d_c1path_c1_norm(abs));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(abs);
		_6e5d_c2r_lib_decref(r);
		_6e5d_c2r_lib_decref(lr);
		_6e5d_c2r_lib_decref(concat);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(47),_6e5d_c2prim_lib_getItem(r,_6e5d_c2prim_lib_fromU64(0))))){
		(_return=_6e5d_c1path_c1_norm(r));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(abs);
		_6e5d_c2r_lib_decref(r);
		_6e5d_c2r_lib_decref(lr);
		_6e5d_c2r_lib_decref(concat);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&concat),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,abs),1,_6e5d_c2prim_lib_fromBuf("/",1)),2,r)));
	(_return=_6e5d_c1path_c1_norm(concat));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(abs);
	_6e5d_c2r_lib_decref(r);
	_6e5d_c2r_lib_decref(lr);
	_6e5d_c2r_lib_decref(concat);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(abs);
	_6e5d_c2r_lib_decref(r);
	_6e5d_c2r_lib_decref(lr);
	_6e5d_c2r_lib_decref(concat);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_ls2(_6e5d_c2r_lib_Object (*d))){
	_6e5d_c2r_lib_incref(d);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*sub) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c1path_c0_ls(d));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(ret))))){
		(_return=NULL);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(d);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(sub);
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
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(ret)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&sub),_6e5d_c2prim_lib_getItem(ret,idx));
		_6e5d_c2prim_lib_setItem(ret,idx,_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,d),1,_6e5d_c2prim_lib_fromBuf("/",1)),2,sub)));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(d);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(sub);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(d);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(sub);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_walkfiles(_6e5d_c2r_lib_Object (*d))){
	_6e5d_c2r_lib_incref(d);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*ds) = NULL;
	auto _6e5d_c2r_lib_Object (*_) = NULL;
	auto _6e5d_c2r_lib_Object (*sub) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c1path_c0_isreg(d))){
		(_return=_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,d));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(d);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(ds);
		_6e5d_c2r_lib_decref(_);
		_6e5d_c2r_lib_decref(sub);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c1path_c0_isdir(d)))){
		(_return=_6e5d_c2prim_lib_listInit());
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(d);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(ds);
		_6e5d_c2r_lib_decref(_);
		_6e5d_c2r_lib_decref(sub);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&ds),_6e5d_c1path_c1_ls2(d));
	_6e5d_c2prim_lib_assign((&_),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(_))))){
			_6e5d_c2prim_lib_assign((&_),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&_),_6e5d_c2prim_lib_add(_,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(_,_6e5d_c2prim_lib_length(ds)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&sub),_6e5d_c2prim_lib_getItem(ds,_));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(ret,_6e5d_c1path_c1_walkfiles(sub)));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(d);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(ds);
	_6e5d_c2r_lib_decref(_);
	_6e5d_c2r_lib_decref(sub);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(d);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(ds);
	_6e5d_c2r_lib_decref(_);
	_6e5d_c2r_lib_decref(sub);
	return NULL;
}
