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
#include<time.h>
#include<sys/wait.h>
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
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_sort(_6e5d_c2r_lib_Object (*array),_6e5d_c2r_lib_Object (*op)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_ledump(_6e5d_c2r_lib_Object (*v),_6e5d_c2r_lib_Object (*buf)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_n2h(_6e5d_c2r_lib_Object (*n)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_hexdump(_6e5d_c2r_lib_Object (*b)));
_6e5d_c2r_lib_Object (*_6e5d_c1str_lib_lfind(_6e5d_c2r_lib_Object (*h),_6e5d_c2r_lib_Object (*n)));
_6e5d_c2r_lib_Object (*_6e5d_c1ltr_c0_parse(_6e5d_c2r_lib_Object (*s)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readUntil(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buf),_6e5d_c2r_lib_Object (*ch)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readln(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buffer)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_writeall(_6e5d_c2r_lib_Object (*dst),_6e5d_c2r_lib_Object (*data)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readSized(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*buf)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readall(_6e5d_c2r_lib_Object (*file)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readlines(_6e5d_c2r_lib_Object (*file)));
_6e5d_c2r_lib_Object (*_6e5d_c1date_lib_now());
_6e5d_c2r_lib_Object (*_6e5d_c1date_lib_sleep(_6e5d_c2r_lib_Object (*ou)));
_6e5d_c2r_lib_Object (*_6e5d_c1date_lib_fmttime(_6e5d_c2r_lib_Object (*ot),_6e5d_c2r_lib_Object (*ofmt)));
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c1_spawn(_6e5d_c2r_lib_Object (*cmd),_6e5d_c2r_lib_Object (*fd0),_6e5d_c2r_lib_Object (*fd1),_6e5d_c2r_lib_Object (*fd2)));
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c1_run(_6e5d_c2r_lib_Object (*cmd),_6e5d_c2r_lib_Object (*data)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_rename(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*dst)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_mkdir0(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_unlink(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_rmdir(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_norm2(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_cwd());
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_chdir(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_ls(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_isreg(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_isdir(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_exist(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_fn_mtime(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_basename(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_parent(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_mkdir1(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_pmkdir(_6e5d_c2r_lib_Object (*path0)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_norm(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_rel(_6e5d_c2r_lib_Object (*abs),_6e5d_c2r_lib_Object (*r)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_ls2(_6e5d_c2r_lib_Object (*d)));
_6e5d_c2r_lib_Object (*_6e5d_c1path_c1_walkfiles(_6e5d_c2r_lib_Object (*d)));
static _6e5d_c2r_lib_Object (*rel2abs(_6e5d_c2r_lib_Object (*dir),_6e5d_c2r_lib_Object (*l)));
static _6e5d_c2r_lib_Object (*recparse(_6e5d_c2r_lib_Object (*queue),_6e5d_c2r_lib_Object (*deps)));
static _6e5d_c2r_lib_Object (*dirparse(_6e5d_c2r_lib_Object (*queue),_6e5d_c2r_lib_Object (*deps)));
static _6e5d_c2r_lib_Object (*mkcheck(_6e5d_c2r_lib_Object (*heads),_6e5d_c2r_lib_Object (*bodys)));
static _6e5d_c2r_lib_Object (*dircheck(_6e5d_c2r_lib_Object (*head),_6e5d_c2r_lib_Object (*bodys)));
static _6e5d_c2r_lib_Object (*update(_6e5d_c2r_lib_Object (*deps),_6e5d_c2r_lib_Object (*needbuild),_6e5d_c2r_lib_Object (*callback)));
_6e5d_c2r_lib_Object (*_6e5d_rmake_lib_runmake(_6e5d_c2r_lib_Object (*paths)));
static _6e5d_c2r_lib_Object (*dircb(_6e5d_c2r_lib_Object (*path)));
_6e5d_c2r_lib_Object (*_6e5d_rmake_lib_dirmake(_6e5d_c2r_lib_Object (*paths)));
static _6e5d_c2r_lib_Object (*rel2abs(_6e5d_c2r_lib_Object (*dir),_6e5d_c2r_lib_Object (*l))){
	_6e5d_c2r_lib_incref(dir);
	_6e5d_c2r_lib_incref(l);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idy) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	_6e5d_c2prim_lib_assign((&idy),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idy))))){
			_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_add(idy,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idy,_6e5d_c2prim_lib_length(l)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&ll),_6e5d_c2prim_lib_getItem(l,idy));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromU64(47)))){
			continue;
		};
		_6e5d_c2prim_lib_setItem(l,idy,_6e5d_c1path_c1_rel(dir,ll));
	};
	_6e5d_c2r_lib_decref(dir);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idy);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
static _6e5d_c2r_lib_Object (*recparse(_6e5d_c2r_lib_Object (*queue),_6e5d_c2r_lib_Object (*deps))){
	_6e5d_c2r_lib_incref(queue);
	_6e5d_c2r_lib_incref(deps);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*visited) = NULL;
	auto _6e5d_c2r_lib_Object (*path) = NULL;
	auto _6e5d_c2r_lib_Object (*pdir) = NULL;
	auto _6e5d_c2r_lib_Object (*data) = NULL;
	auto _6e5d_c2r_lib_Object (*content) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*cmd) = NULL;
	_6e5d_c2prim_lib_assign((&visited),_6e5d_c2prim_lib_listInit());
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(queue)))){
		_6e5d_c2prim_lib_assign((&path),_6e5d_c1str_lib_pop(queue));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c1str_lib_contains(visited,path))){
			continue;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(visited,path));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("parsing",7));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,path);
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_assign((&pdir),_6e5d_c1path_c1_parent(path));
		_6e5d_c2prim_lib_assign((&data),_6e5d_c1file_c1_readall(path));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(data))))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&content),_6e5d_c1ltr_c0_parse(data));
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(content)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(content,idx));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("include",7),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0))))){
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(queue,_6e5d_c1path_c1_rel(pdir,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1)))));
				continue;
			};
			_6e5d_c2r_lib_check0(rel2abs(pdir,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0))));
			_6e5d_c2r_lib_check0(rel2abs(pdir,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
			_6e5d_c2prim_lib_assign((&cmd),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(2)));
			_6e5d_c2r_lib_check0(_6e5d_c2prim_lib_resize(l,_6e5d_c2prim_lib_fromU64(2)));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(l,pdir));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(l,cmd));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(deps,l));
		};
	};
	_6e5d_c2r_lib_decref(queue);
	_6e5d_c2r_lib_decref(deps);
	_6e5d_c2r_lib_decref(visited);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(pdir);
	_6e5d_c2r_lib_decref(data);
	_6e5d_c2r_lib_decref(content);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(cmd);
	return NULL;
}
static _6e5d_c2r_lib_Object (*dirparse(_6e5d_c2r_lib_Object (*queue),_6e5d_c2r_lib_Object (*deps))){
	_6e5d_c2r_lib_incref(queue);
	_6e5d_c2r_lib_incref(deps);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*visited) = NULL;
	auto _6e5d_c2r_lib_Object (*path) = NULL;
	auto _6e5d_c2r_lib_Object (*pdir) = NULL;
	auto _6e5d_c2r_lib_Object (*deppath) = NULL;
	auto _6e5d_c2r_lib_Object (*data) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*buildtxt) = NULL;
	auto _6e5d_c2r_lib_Object (*cmd) = NULL;
	_6e5d_c2prim_lib_assign((&visited),_6e5d_c2prim_lib_listInit());
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(queue)))){
		_6e5d_c2prim_lib_assign((&path),_6e5d_c1str_lib_pop(queue));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c1str_lib_contains(visited,path))){
			continue;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(visited,path));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("parsing",7));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,path);
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_assign((&pdir),_6e5d_c1path_c1_parent(path));
		_6e5d_c2prim_lib_assign((&deppath),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,path),1,_6e5d_c2prim_lib_fromBuf("/.lpat/deps.txt",15))));
		_6e5d_c2prim_lib_assign((&data),_6e5d_c1file_c1_readlines(deppath));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(data))))){
			_6e5d_c2prim_lib_assign((&data),_6e5d_c2prim_lib_listInit());
		};
		_6e5d_c2r_lib_check0(rel2abs(pdir,data));
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(data)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(data,idx));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(queue,l));
		};
		_6e5d_c2prim_lib_assign((&buildtxt),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,path),1,_6e5d_c2prim_lib_fromBuf("/build.txt",10))));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c1path_fn_isreg(buildtxt)))){
			continue;
		};
		_6e5d_c2prim_lib_assign((&cmd),_6e5d_c1file_c1_readall(buildtxt));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_rstrip(cmd,_6e5d_c2prim_lib_fromBuf("""\x0a""",1)));
		_6e5d_c2prim_lib_assign((&cmd),_6e5d_c1str_lib_splitws(cmd));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(deps,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),1),0,path)),1,data),2,path),3,cmd)));
	};
	_6e5d_c2r_lib_decref(queue);
	_6e5d_c2r_lib_decref(deps);
	_6e5d_c2r_lib_decref(visited);
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(pdir);
	_6e5d_c2r_lib_decref(deppath);
	_6e5d_c2r_lib_decref(data);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(buildtxt);
	_6e5d_c2r_lib_decref(cmd);
	return NULL;
}
static _6e5d_c2r_lib_Object (*mkcheck(_6e5d_c2r_lib_Object (*heads),_6e5d_c2r_lib_Object (*bodys))){
	_6e5d_c2r_lib_incref(heads);
	_6e5d_c2r_lib_incref(bodys);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*latestbody) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*body) = NULL;
	auto _6e5d_c2r_lib_Object (*t) = NULL;
	auto _6e5d_c2r_lib_Object (*head) = NULL;
	_6e5d_c2prim_lib_assign((&latestbody),_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(bodys)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&body),_6e5d_c2prim_lib_getItem(bodys,idx));
		_6e5d_c2prim_lib_assign((&t),_6e5d_c1path_fn_mtime(body));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(t))))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("cannot build",12));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,body);
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(latestbody,t))){
			_6e5d_c2prim_lib_assign((&latestbody),t);
		};
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(heads)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&head),_6e5d_c2prim_lib_getItem(heads,idx));
		_6e5d_c2prim_lib_assign((&t),_6e5d_c1path_fn_mtime(head));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(t))))){
			(_return=_6e5d_c2prim_lib_fromU64(1));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(heads);
			_6e5d_c2r_lib_decref(bodys);
			_6e5d_c2r_lib_decref(latestbody);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(body);
			_6e5d_c2r_lib_decref(t);
			_6e5d_c2r_lib_decref(head);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(latestbody,t))){
			(_return=_6e5d_c2prim_lib_fromU64(1));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(heads);
			_6e5d_c2r_lib_decref(bodys);
			_6e5d_c2r_lib_decref(latestbody);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(body);
			_6e5d_c2r_lib_decref(t);
			_6e5d_c2r_lib_decref(head);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
	};
	(_return=_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(heads);
	_6e5d_c2r_lib_decref(bodys);
	_6e5d_c2r_lib_decref(latestbody);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(t);
	_6e5d_c2r_lib_decref(head);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(heads);
	_6e5d_c2r_lib_decref(bodys);
	_6e5d_c2r_lib_decref(latestbody);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(t);
	_6e5d_c2r_lib_decref(head);
	return NULL;
}
static _6e5d_c2r_lib_Object (*dircheck(_6e5d_c2r_lib_Object (*head),_6e5d_c2r_lib_Object (*bodys))){
	_6e5d_c2r_lib_incref(head);
	_6e5d_c2r_lib_incref(bodys);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*builddir) = NULL;
	auto _6e5d_c2r_lib_Object (*epochfile) = NULL;
	auto _6e5d_c2r_lib_Object (*t) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*body) = NULL;
	auto _6e5d_c2r_lib_Object (*epoch2) = NULL;
	auto _6e5d_c2r_lib_Object (*t2) = NULL;
	auto _6e5d_c2r_lib_Object (*srcs) = NULL;
	auto _6e5d_c2r_lib_Object (*src) = NULL;
	_6e5d_c2prim_lib_assign((&head),_6e5d_c2prim_lib_getItem(head,_6e5d_c2prim_lib_fromU64(0)));
	_6e5d_c2prim_lib_assign((&builddir),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,head),1,_6e5d_c2prim_lib_fromBuf("/build",6))));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c1path_c1_mkdir1(builddir)))){
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&epochfile),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,head),1,_6e5d_c2prim_lib_fromBuf("/build/epoch",12))));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c1path_fn_isreg(epochfile)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("build(missing epoch)",20));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,head);
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		(_return=_6e5d_c2prim_lib_fromU64(1));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(head);
		_6e5d_c2r_lib_decref(bodys);
		_6e5d_c2r_lib_decref(builddir);
		_6e5d_c2r_lib_decref(epochfile);
		_6e5d_c2r_lib_decref(t);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(body);
		_6e5d_c2r_lib_decref(epoch2);
		_6e5d_c2r_lib_decref(t2);
		_6e5d_c2r_lib_decref(srcs);
		_6e5d_c2r_lib_decref(src);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	_6e5d_c2prim_lib_assign((&t),_6e5d_c2prim_lib_asU64(_6e5d_c1file_c1_readall(epochfile)));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(bodys)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&body),_6e5d_c2prim_lib_getItem(bodys,idx));
		_6e5d_c2prim_lib_assign((&epoch2),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,body),1,_6e5d_c2prim_lib_fromBuf("/build/epoch",12))));
		_6e5d_c2prim_lib_assign((&epoch2),_6e5d_c1file_c1_readall(epoch2));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(epoch2))))){
			continue;
		};
		_6e5d_c2prim_lib_assign((&t2),_6e5d_c2prim_lib_asU64(epoch2));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(t2,t))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("build(dep new)",14));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,head);
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,body);
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			(_return=_6e5d_c2prim_lib_fromU64(1));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(head);
			_6e5d_c2r_lib_decref(bodys);
			_6e5d_c2r_lib_decref(builddir);
			_6e5d_c2r_lib_decref(epochfile);
			_6e5d_c2r_lib_decref(t);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(body);
			_6e5d_c2r_lib_decref(epoch2);
			_6e5d_c2r_lib_decref(t2);
			_6e5d_c2r_lib_decref(srcs);
			_6e5d_c2r_lib_decref(src);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
	};
	_6e5d_c2prim_lib_assign((&srcs),_6e5d_c1path_fn_ls(head));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(srcs)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&src),_6e5d_c2prim_lib_getItem(srcs,idx));
		_6e5d_c2prim_lib_assign((&src),_6e5d_c1path_c1_rel(head,src));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c1path_fn_isreg(src)))){
			continue;
		};
		_6e5d_c2prim_lib_assign((&t2),_6e5d_c2prim_lib_mul(_6e5d_c2prim_lib_fromU64(1000000),_6e5d_c1path_fn_mtime(src)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(t2,t))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("build(src new)",14));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,head);
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,src);
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			(_return=_6e5d_c2prim_lib_fromU64(1));
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(head);
			_6e5d_c2r_lib_decref(bodys);
			_6e5d_c2r_lib_decref(builddir);
			_6e5d_c2r_lib_decref(epochfile);
			_6e5d_c2r_lib_decref(t);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(body);
			_6e5d_c2r_lib_decref(epoch2);
			_6e5d_c2r_lib_decref(t2);
			_6e5d_c2r_lib_decref(srcs);
			_6e5d_c2r_lib_decref(src);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
	};
	(_return=_6e5d_c2prim_lib_fromU64(0));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(head);
	_6e5d_c2r_lib_decref(bodys);
	_6e5d_c2r_lib_decref(builddir);
	_6e5d_c2r_lib_decref(epochfile);
	_6e5d_c2r_lib_decref(t);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(epoch2);
	_6e5d_c2r_lib_decref(t2);
	_6e5d_c2r_lib_decref(srcs);
	_6e5d_c2r_lib_decref(src);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(head);
	_6e5d_c2r_lib_decref(bodys);
	_6e5d_c2r_lib_decref(builddir);
	_6e5d_c2r_lib_decref(epochfile);
	_6e5d_c2r_lib_decref(t);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(epoch2);
	_6e5d_c2r_lib_decref(t2);
	_6e5d_c2r_lib_decref(srcs);
	_6e5d_c2r_lib_decref(src);
	return NULL;
}
static _6e5d_c2r_lib_Object (*update(_6e5d_c2r_lib_Object (*deps),_6e5d_c2r_lib_Object (*needbuild),_6e5d_c2r_lib_Object (*callback))){
	_6e5d_c2r_lib_incref(deps);
	_6e5d_c2r_lib_incref(needbuild);
	_6e5d_c2r_lib_incref(callback);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*allobj) = NULL;
	auto _6e5d_c2r_lib_Object (*headobj) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*dep) = NULL;
	auto _6e5d_c2r_lib_Object (*heads) = NULL;
	auto _6e5d_c2r_lib_Object (*bodys) = NULL;
	auto _6e5d_c2r_lib_Object (*idy) = NULL;
	auto _6e5d_c2r_lib_Object (*head) = NULL;
	auto _6e5d_c2r_lib_Object (*body) = NULL;
	auto _6e5d_c2r_lib_Object (*pending) = NULL;
	auto _6e5d_c2r_lib_Object (*newdeps) = NULL;
	auto _6e5d_c2r_lib_Object (*fail) = NULL;
	auto _6e5d_c2r_lib_Object (*pend) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	_6e5d_c2prim_lib_assign((&allobj),_6e5d_c2prim_lib_mapInit());
	_6e5d_c2prim_lib_assign((&headobj),_6e5d_c2prim_lib_mapInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(deps)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&dep),_6e5d_c2prim_lib_getItem(deps,idx));
		_6e5d_c2prim_lib_assign((&heads),_6e5d_c2prim_lib_getItem(dep,_6e5d_c2prim_lib_fromU64(0)));
		_6e5d_c2prim_lib_assign((&bodys),_6e5d_c2prim_lib_getItem(dep,_6e5d_c2prim_lib_fromU64(1)));
		_6e5d_c2prim_lib_assign((&idy),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idy))))){
				_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_add(idy,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idy,_6e5d_c2prim_lib_length(heads)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&head),_6e5d_c2prim_lib_getItem(heads,idy));
			_6e5d_c2prim_lib_setItem(allobj,head,_6e5d_c2prim_lib_fromU64(1));
			_6e5d_c2prim_lib_setItem(headobj,head,_6e5d_c2prim_lib_fromU64(1));
		};
		_6e5d_c2prim_lib_assign((&idy),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idy))))){
				_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_add(idy,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idy,_6e5d_c2prim_lib_length(bodys)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&body),_6e5d_c2prim_lib_getItem(bodys,idy));
			_6e5d_c2prim_lib_setItem(allobj,body,_6e5d_c2prim_lib_fromU64(1));
		};
	};
	_6e5d_c2prim_lib_assign((&pending),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&newdeps),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(deps)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&dep),_6e5d_c2prim_lib_getItem(deps,idx));
		_6e5d_c2prim_lib_assign((&heads),_6e5d_c2prim_lib_getItem(dep,_6e5d_c2prim_lib_fromU64(0)));
		_6e5d_c2prim_lib_assign((&bodys),_6e5d_c2prim_lib_getItem(dep,_6e5d_c2prim_lib_fromU64(1)));
		_6e5d_c2prim_lib_assign((&fail),_6e5d_c2prim_lib_fromU64(0));
		_6e5d_c2prim_lib_assign((&idy),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idy))))){
				_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idy),_6e5d_c2prim_lib_add(idy,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idy,_6e5d_c2prim_lib_length(bodys)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&body),_6e5d_c2prim_lib_getItem(bodys,idy));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(_6e5d_c2prim_lib_getItem(headobj,body))))))){
				_6e5d_c2prim_lib_assign((&fail),_6e5d_c2prim_lib_fromU64(1));
				break;
			};
		};
		if(_6e5d_c2prim_lib_toBool(fail)){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(newdeps,dep));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(pending,dep));
		};
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(pending)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&pend),_6e5d_c2prim_lib_getItem(pending,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(((_6e5d_c2r_lib_Object (*(*)(_6e5d_c2r_lib_Object (*),_6e5d_c2r_lib_Object (*))))_6e5d_c2prim_lib_toFn(needbuild))(_6e5d_c2prim_lib_getItem(pend,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_getItem(pend,_6e5d_c2prim_lib_fromU64(1)))))){
			continue;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1path_fn_chdir(_6e5d_c2prim_lib_getItem(pend,_6e5d_c2prim_lib_fromU64(2))));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_getItem(pend,_6e5d_c2prim_lib_fromU64(2)));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_getItem(pend,_6e5d_c2prim_lib_fromU64(3)));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c1fork_c1_run(_6e5d_c2prim_lib_getItem(pend,_6e5d_c2prim_lib_fromU64(3)),_6e5d_c2prim_lib_fromBuf("",0)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(ret))))){
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("FAILED",6));
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,pend);
			fprintf(stderr," ");
			_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
			_6e5d_c2prim_lib_abort();
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(callback)))))){
			_6e5d_c2r_lib_check0(((_6e5d_c2r_lib_Object (*(*)(_6e5d_c2r_lib_Object (*))))_6e5d_c2prim_lib_toFn(callback))(_6e5d_c2prim_lib_getItem(pend,_6e5d_c2prim_lib_fromU64(2))));
		};
	};
	(_return=newdeps);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(deps);
	_6e5d_c2r_lib_decref(needbuild);
	_6e5d_c2r_lib_decref(callback);
	_6e5d_c2r_lib_decref(allobj);
	_6e5d_c2r_lib_decref(headobj);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(dep);
	_6e5d_c2r_lib_decref(heads);
	_6e5d_c2r_lib_decref(bodys);
	_6e5d_c2r_lib_decref(idy);
	_6e5d_c2r_lib_decref(head);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(pending);
	_6e5d_c2r_lib_decref(newdeps);
	_6e5d_c2r_lib_decref(fail);
	_6e5d_c2r_lib_decref(pend);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(deps);
	_6e5d_c2r_lib_decref(needbuild);
	_6e5d_c2r_lib_decref(callback);
	_6e5d_c2r_lib_decref(allobj);
	_6e5d_c2r_lib_decref(headobj);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(dep);
	_6e5d_c2r_lib_decref(heads);
	_6e5d_c2r_lib_decref(bodys);
	_6e5d_c2r_lib_decref(idy);
	_6e5d_c2r_lib_decref(head);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(pending);
	_6e5d_c2r_lib_decref(newdeps);
	_6e5d_c2r_lib_decref(fail);
	_6e5d_c2r_lib_decref(pend);
	_6e5d_c2r_lib_decref(ret);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_rmake_lib_runmake(_6e5d_c2r_lib_Object (*paths))){
	_6e5d_c2r_lib_incref(paths);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*deps) = NULL;
	_6e5d_c2prim_lib_assign((&deps),_6e5d_c2prim_lib_listInit());
	_6e5d_c2r_lib_check0(recparse(paths,deps));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(deps)))){
		_6e5d_c2prim_lib_assign((&deps),update(deps,_6e5d_c2prim_lib_fromFn(mkcheck),NULL));
	};
	_6e5d_c2r_lib_decref(paths);
	_6e5d_c2r_lib_decref(deps);
	return NULL;
}
static _6e5d_c2r_lib_Object (*dircb(_6e5d_c2r_lib_Object (*path))){
	_6e5d_c2r_lib_incref(path);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*epochfile) = NULL;
	_6e5d_c2prim_lib_assign((&epochfile),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),2),0,path),1,_6e5d_c2prim_lib_fromBuf("/build/epoch",12))));
	_6e5d_c2r_lib_check0(_6e5d_c1file_c1_writeall(epochfile,_6e5d_c2prim_lib_asBytes(_6e5d_c1date_lib_now())));
	_6e5d_c2r_lib_decref(path);
	_6e5d_c2r_lib_decref(epochfile);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_rmake_lib_dirmake(_6e5d_c2r_lib_Object (*paths))){
	_6e5d_c2r_lib_incref(paths);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*deps) = NULL;
	_6e5d_c2prim_lib_assign((&deps),_6e5d_c2prim_lib_listInit());
	_6e5d_c2r_lib_check0(dirparse(paths,deps));
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(deps)))){
		_6e5d_c2prim_lib_assign((&deps),update(deps,_6e5d_c2prim_lib_fromFn(dircheck),_6e5d_c2prim_lib_fromFn(dircb)));
	};
	_6e5d_c2r_lib_decref(paths);
	_6e5d_c2r_lib_decref(deps);
	return NULL;
}
