#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>
#include<sys/stat.h>
#include<limits.h>
#include<sys/file.h>
#include<sys/types.h>
#include<dirent.h>
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
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readUntil(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buf),_6e5d_c2r_lib_Object (*ch)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readln(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buffer)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_writeall(_6e5d_c2r_lib_Object (*dst),_6e5d_c2r_lib_Object (*data)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readSized(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*buf)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readall(_6e5d_c2r_lib_Object (*file)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readlines(_6e5d_c2r_lib_Object (*file)));
_6e5d_c2r_lib_Object (*_6e5d_c1ltr_c0_parse(_6e5d_c2r_lib_Object (*s)));
_6e5d_c2r_lib_Object (*_6e5d_c1ltr_c1_dump(_6e5d_c2r_lib_Object (*obj)));
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
_6e5d_c2r_lib_Object (*_6e5d_finitemacro_lib_reportunused(_6e5d_c2r_lib_Object (*all),_6e5d_c2r_lib_Object (*used),_6e5d_c2r_lib_Object (*msg)));
_6e5d_c2r_lib_Object (*_6e5d_finitemacro_lib_substitute(_6e5d_c2r_lib_Object (*args),_6e5d_c2r_lib_Object (*rest),_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*body),_6e5d_c2r_lib_Object (*used)));
_6e5d_c2r_lib_Object (*_6e5d_finitemacro_lib_build(_6e5d_c2r_lib_Object (*file),_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*ret)));
static _6e5d_c2r_lib_Object (*path2c(_6e5d_c2r_lib_Object (*path0)));
static _6e5d_c2r_lib_Object (*procheader(_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*loadcachedheader(_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*loadheader(_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*addsym(_6e5d_c2r_lib_Object (*ns),_6e5d_c2r_lib_Object (*gid),_6e5d_c2r_lib_Object (*sym)));
static _6e5d_c2r_lib_Object (*include(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*ns),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*writecache(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*selfexports)));
static _6e5d_c2r_lib_Object (*filter(_6e5d_c2r_lib_Object (*dedup),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*deduplink(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*ret)));
static _6e5d_c2r_lib_Object (*proc(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*ret)));
static _6e5d_c2r_lib_Object (*stripmacro(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*out)));
_6e5d_c2r_lib_Object (*_6e5d_c0p_lib_c0p(_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*ret)));
static _6e5d_c2r_lib_Object (*path2c(_6e5d_c2r_lib_Object (*path0))){
	_6e5d_c2r_lib_incref(path0);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*path) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ch) = NULL;
	_6e5d_c2prim_lib_assign((&path),_6e5d_c2prim_lib_asBytes(path0));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(path)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&ch),_6e5d_c2prim_lib_getItem(path,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(ch,_6e5d_c2prim_lib_fromU64(47)))){
			_6e5d_c2prim_lib_setItem(path,idx,_6e5d_c2prim_lib_fromU64(95));
		};
	};
	(_return=path);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path0);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ch);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path0);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ch);
	return NULL;
}
static _6e5d_c2r_lib_Object (*procheader(_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(path);
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(pragmaonce);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*gid) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	auto _6e5d_c2r_lib_Object (*path2) = NULL;
	_6e5d_c2prim_lib_assign((&gid),NULL);
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
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("path",4)))){
			_6e5d_c2prim_lib_assign((&gid),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(1)));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(3),_6e5d_c2prim_lib_length(ll)))){
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("linkobj",7)),1,_6e5d_c1path_c1_rel(_6e5d_c1path_c1_parent(path),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(2))))));
			};
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("include",7)))){
			_6e5d_c2prim_lib_assign((&path2),_6e5d_c1path_c1_rel(_6e5d_c1path_c1_parent(path),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(1))));
			_6e5d_c2r_lib_check0(loadcachedheader(path2,pragmaonce,out));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ll));
		};
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(gid))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("missingpath",11));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,path);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	(_return=gid);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(pragmaonce);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(gid);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_decref(path2);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(pragmaonce);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(gid);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_decref(path2);
	return NULL;
}
static _6e5d_c2r_lib_Object (*loadcachedheader(_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(path);
	_6e5d_c2r_lib_incref(pragmaonce);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*gid) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(47),_6e5d_c2prim_lib_getItem(path,_6e5d_c2prim_lib_fromU64(0)))))){
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&gid),_6e5d_c2prim_lib_getItem(pragmaonce,path));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(gid)))))){
		(_return=gid);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(path);
		_6e5d_c2r_lib_decref(pragmaonce);
		_6e5d_c2r_lib_decref(out);
		_6e5d_c2r_lib_decref(gid);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_setItem(pragmaonce,path,_6e5d_c2prim_lib_fromBuf("BADGID",6));
	_6e5d_c2prim_lib_assign((&gid),loadheader(path,pragmaonce,out));
	_6e5d_c2prim_lib_setItem(pragmaonce,path,gid);
	(_return=gid);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(pragmaonce);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(gid);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(pragmaonce);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(gid);
	return NULL;
}
static _6e5d_c2r_lib_Object (*loadheader(_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(path);
	_6e5d_c2r_lib_incref(pragmaonce);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*dst) = NULL;
	auto _6e5d_c2r_lib_Object (*data) = NULL;
	_6e5d_c2prim_lib_assign((&dst),_6e5d_c1path_c1_norm(_6e5d_c2prim_lib_fromBuf("/6e5d/c0p/lib.ltr/../cache",26)));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(dst,path));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c1path_c0_isreg(path)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("includedbutnotexist",19));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,path);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c1path_c0_isreg(dst))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(_6e5d_c1path_c0_mtime(dst),_6e5d_c1path_c0_mtime(path))))))){
		_6e5d_c2prim_lib_assign((&data),_6e5d_c1file_c1_readall(dst));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(data))))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("loadfail",8));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,dst);
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&data),_6e5d_c1ltr_c0_parse(data));
		(_return=procheader(path,data,pragmaonce,out));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(path);
		_6e5d_c2r_lib_decref(pragmaonce);
		_6e5d_c2r_lib_decref(out);
		_6e5d_c2r_lib_decref(dst);
		_6e5d_c2r_lib_decref(data);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("caching",7));
	fprintf(stderr," ");
	_6e5d_c2prim_lib_printobj(stderr,path);
	fprintf(stderr," ");
	_6e5d_c2prim_lib_printobj(stderr,dst);
	_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
	_6e5d_c2r_lib_check0(proc(path,pragmaonce,_6e5d_c2prim_lib_listInit()));
	(_return=loadheader(path,pragmaonce,out));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(pragmaonce);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(dst);
	_6e5d_c2r_lib_decref(data);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(pragmaonce);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(dst);
	_6e5d_c2r_lib_decref(data);
	return NULL;
}
static _6e5d_c2r_lib_Object (*addsym(_6e5d_c2r_lib_Object (*ns),_6e5d_c2r_lib_Object (*gid),_6e5d_c2r_lib_Object (*sym))){
	_6e5d_c2r_lib_incref(ns);
	_6e5d_c2r_lib_incref(gid);
	_6e5d_c2r_lib_incref(sym);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*real) = NULL;
	auto _6e5d_c2r_lib_Object (*alias) = NULL;
	auto _6e5d_c2r_lib_Object (*fullsym) = NULL;
	_6e5d_c2prim_lib_assign((&real),NULL);
	_6e5d_c2prim_lib_assign((&alias),NULL);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(sym))))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(2),_6e5d_c2prim_lib_length(sym)))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("badsym",6));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,sym);
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&real),_6e5d_c2prim_lib_getItem(sym,_6e5d_c2prim_lib_fromU64(0)));
		_6e5d_c2prim_lib_assign((&alias),_6e5d_c2prim_lib_getItem(sym,_6e5d_c2prim_lib_fromU64(1)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(sym))))){
		_6e5d_c2prim_lib_assign((&real),sym);
		_6e5d_c2prim_lib_assign((&alias),sym);
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("badsym",6));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,sym);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&fullsym),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,path2c(gid)),1,_6e5d_c2prim_lib_fromBuf("_",1)),2,real)));
	_6e5d_c2prim_lib_setItem(ns,alias,fullsym);
	(_return=fullsym);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(ns);
	_6e5d_c2r_lib_decref(gid);
	_6e5d_c2r_lib_decref(sym);
	_6e5d_c2r_lib_decref(real);
	_6e5d_c2r_lib_decref(alias);
	_6e5d_c2r_lib_decref(fullsym);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(ns);
	_6e5d_c2r_lib_decref(gid);
	_6e5d_c2r_lib_decref(sym);
	_6e5d_c2r_lib_decref(real);
	_6e5d_c2r_lib_decref(alias);
	_6e5d_c2r_lib_decref(fullsym);
	return NULL;
}
static _6e5d_c2r_lib_Object (*include(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*ns),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(src);
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(pragmaonce);
	_6e5d_c2r_lib_incref(ns);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*path) = NULL;
	auto _6e5d_c2r_lib_Object (*gid) = NULL;
	auto _6e5d_c2r_lib_Object (*importlist) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*sym) = NULL;
	_6e5d_c2prim_lib_assign((&path),_6e5d_c1path_c1_rel(_6e5d_c1path_c1_parent(src),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
	_6e5d_c2prim_lib_assign((&gid),loadcachedheader(path,pragmaonce,out));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(2),_6e5d_c2prim_lib_length(l)))){
		_6e5d_c2r_lib_decref(src);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(pragmaonce);
		_6e5d_c2r_lib_decref(ns);
		_6e5d_c2r_lib_decref(out);
		_6e5d_c2r_lib_decref(path);
		_6e5d_c2r_lib_decref(gid);
		_6e5d_c2r_lib_decref(importlist);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(sym);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&importlist),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(2)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(4),_6e5d_c2prim_lib_length(l)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,_6e5d_c2prim_lib_fromBuf("include",7)),1,path)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(importlist,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(3))));
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(importlist)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&sym),_6e5d_c2prim_lib_getItem(importlist,idx));
		_6e5d_c2r_lib_check0(addsym(ns,gid,sym));
	};
	_6e5d_c2r_lib_decref(src);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(pragmaonce);
	_6e5d_c2r_lib_decref(ns);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(gid);
	_6e5d_c2r_lib_decref(importlist);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(sym);
	return NULL;
}
static _6e5d_c2r_lib_Object (*writecache(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*selfexports))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(path);
	_6e5d_c2r_lib_incref(selfexports);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*out) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*name) = NULL;
	auto _6e5d_c2r_lib_Object (*ok) = NULL;
	_6e5d_c2prim_lib_assign((&out),_6e5d_c2prim_lib_listInit());
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
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(ll)))))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(_6e5d_c2prim_lib_fromU64(1),_6e5d_c2prim_lib_length(ll))))))){
			continue;
		};
		_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("fn",2),first))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(_6e5d_c2prim_lib_getItem(selfexports,_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(1)))))))){
				continue;
			};
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c1str_lib_slice(ll,_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_fromU64(4))));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("macro",5),first))){
			_6e5d_c2prim_lib_assign((&name),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(1)));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(name))))){
				_6e5d_c2prim_lib_assign((&name),_6e5d_c2prim_lib_getItem(name,_6e5d_c2prim_lib_fromU64(0)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(_6e5d_c2prim_lib_getItem(selfexports,name)))))){
				continue;
			};
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ll));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("struct",6),first))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("union",5),first)))))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(_6e5d_c2prim_lib_getItem(selfexports,_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(1)))))))){
				continue;
			};
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ll));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("syslib",6),first))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("pkgconf",7),first))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("linkobj",7),first))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("include",7),first))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("path",4),first)))))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ll));
		};
	};
	_6e5d_c2prim_lib_assign((&ok),_6e5d_c1path_c1_pmkdir(_6e5d_c1path_c1_parent(path)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(ok))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&ok),_6e5d_c1file_c1_writeall(path,_6e5d_c1ltr_c1_dump(out)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(ok))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(selfexports);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(name);
	_6e5d_c2r_lib_decref(ok);
	return NULL;
}
static _6e5d_c2r_lib_Object (*filter(_6e5d_c2r_lib_Object (*dedup),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(dedup);
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0))));
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
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(0)))){
			continue;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c1str_lib_contains(dedup,ll))){
			continue;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(dedup,ll));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,ll));
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(_6e5d_c2prim_lib_fromU64(1),_6e5d_c2prim_lib_length(ret)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ret));
	};
	_6e5d_c2r_lib_decref(dedup);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
static _6e5d_c2r_lib_Object (*deduplink(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*ret))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(ret);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*syslibs) = NULL;
	auto _6e5d_c2r_lib_Object (*pkgconfs) = NULL;
	auto _6e5d_c2r_lib_Object (*linkobjs) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	_6e5d_c2prim_lib_assign((&syslibs),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&pkgconfs),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&linkobjs),_6e5d_c2prim_lib_listInit());
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
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(ll))))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(_6e5d_c2prim_lib_fromU64(1),_6e5d_c2prim_lib_length(ll))))))){
			continue;
		};
		_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("syslib",6)))){
			_6e5d_c2r_lib_check0(filter(syslibs,ll,ret));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("pkgconf",7)))){
			_6e5d_c2r_lib_check0(filter(pkgconfs,ll,ret));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("linkobj",7)))){
			_6e5d_c2r_lib_check0(filter(linkobjs,ll,ret));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,ll));
		};
	};
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(syslibs);
	_6e5d_c2r_lib_decref(pkgconfs);
	_6e5d_c2r_lib_decref(linkobjs);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_decref(first);
	return NULL;
}
static _6e5d_c2r_lib_Object (*proc(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*pragmaonce),_6e5d_c2r_lib_Object (*ret))){
	_6e5d_c2r_lib_incref(src);
	_6e5d_c2r_lib_incref(pragmaonce);
	_6e5d_c2r_lib_incref(ret);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*out) = NULL;
	auto _6e5d_c2r_lib_Object (*ns) = NULL;
	auto _6e5d_c2r_lib_Object (*selfexports) = NULL;
	auto _6e5d_c2r_lib_Object (*sgid) = NULL;
	auto _6e5d_c2r_lib_Object (*dst) = NULL;
	auto _6e5d_c2r_lib_Object (*used) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	auto _6e5d_c2r_lib_Object (*llen) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*idy) = NULL;
	auto _6e5d_c2r_lib_Object (*lll) = NULL;
	auto _6e5d_c2r_lib_Object (*fullsym) = NULL;
	auto _6e5d_c2r_lib_Object (*out2) = NULL;
	auto _6e5d_c2r_lib_Object (*cachepath) = NULL;
	_6e5d_c2prim_lib_assign((&l),_6e5d_c1file_c1_readall(src));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(l))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("loadfail",8));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,src);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&l),_6e5d_c1ltr_c0_parse(l));
	_6e5d_c2prim_lib_assign((&out),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&ns),_6e5d_c2prim_lib_mapInit());
	_6e5d_c2prim_lib_assign((&selfexports),_6e5d_c2prim_lib_mapInit());
	_6e5d_c2prim_lib_assign((&sgid),NULL);
	_6e5d_c2prim_lib_assign((&dst),NULL);
	_6e5d_c2prim_lib_assign((&used),_6e5d_c2prim_lib_mapInit());
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
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(ll))))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(ll))))))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("'c0p:emptyblock",15));
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&llen),_6e5d_c2prim_lib_length(ll));
		_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("path",4)))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(_6e5d_c2prim_lib_fromU64(2),llen))){
				_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("'c0p:badpath",12));
				fprintf(stderr," ");
				_6e5d_c2prim_lib_printobj(stderr,ll);
				_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
				_6e5d_c2prim_lib_abort();
			};
			_6e5d_c2prim_lib_assign((&sgid),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(1)));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(llen,_6e5d_c2prim_lib_fromU64(3)))){
				_6e5d_c2prim_lib_assign((&dst),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(2)));
			};
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ll));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("include",7)))){
			_6e5d_c2r_lib_check0(include(src,ll,pragmaonce,ns,out));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromBuf("export",6)))){
			_6e5d_c2prim_lib_assign((&idy),NULL);
			while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idy))))){
					_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_fromU64(0));
				}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
					_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_add(idy,_6e5d_c2prim_lib_fromU64(1)));
				};
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idy,_6e5d_c2prim_lib_length(ll)))){
					break;
				};
				_6e5d_c2prim_lib_assign((&lll),_6e5d_c2prim_lib_getItem(ll,idy));
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idy,_6e5d_c2prim_lib_fromU64(0)))){
					continue;
				};
				_6e5d_c2prim_lib_assign((&fullsym),addsym(ns,sgid,lll));
				_6e5d_c2prim_lib_setItem(selfexports,fullsym,_6e5d_c2prim_lib_fromU64(1));
			};
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&ll),_6e5d_finitemacro_lib_substitute(ns,NULL,NULL,ll,used));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ll));
		};
	};
	_6e5d_c2r_lib_check0(_6e5d_finitemacro_lib_reportunused(ns,used,src));
	_6e5d_c2prim_lib_assign((&out2),_6e5d_c2prim_lib_listInit());
	_6e5d_c2r_lib_check0(_6e5d_finitemacro_lib_build(src,out,out2));
	_6e5d_c2r_lib_check0(deduplink(out2,ret));
	_6e5d_c2prim_lib_assign((&cachepath),_6e5d_c1path_c1_norm(_6e5d_c2prim_lib_fromBuf("/6e5d/c0p/lib.ltr/../cache",26)));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(cachepath,src));
	_6e5d_c2r_lib_check0(writecache(ret,cachepath,selfexports));
	(_return=dst);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(src);
	_6e5d_c2r_lib_decref(pragmaonce);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(ns);
	_6e5d_c2r_lib_decref(selfexports);
	_6e5d_c2r_lib_decref(sgid);
	_6e5d_c2r_lib_decref(dst);
	_6e5d_c2r_lib_decref(used);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(idy);
	_6e5d_c2r_lib_decref(lll);
	_6e5d_c2r_lib_decref(fullsym);
	_6e5d_c2r_lib_decref(out2);
	_6e5d_c2r_lib_decref(cachepath);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(src);
	_6e5d_c2r_lib_decref(pragmaonce);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(ns);
	_6e5d_c2r_lib_decref(selfexports);
	_6e5d_c2r_lib_decref(sgid);
	_6e5d_c2r_lib_decref(dst);
	_6e5d_c2r_lib_decref(used);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(idy);
	_6e5d_c2r_lib_decref(lll);
	_6e5d_c2r_lib_decref(fullsym);
	_6e5d_c2r_lib_decref(out2);
	_6e5d_c2r_lib_decref(cachepath);
	return NULL;
}
static _6e5d_c2r_lib_Object (*stripmacro(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
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
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("macro",5),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0))))){
			continue;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("include",7),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0))))){
			continue;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ll));
	};
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c0p_lib_c0p(_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*ret))){
	_6e5d_c2r_lib_incref(path);
	_6e5d_c2r_lib_incref(ret);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*out) = NULL;
	auto _6e5d_c2r_lib_Object (*dst) = NULL;
	_6e5d_c2prim_lib_assign((&out),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&dst),proc(path,_6e5d_c2prim_lib_mapInit(),out));
	_6e5d_c2r_lib_check0(stripmacro(out,ret));
	(_return=dst);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(dst);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(dst);
	return NULL;
}
