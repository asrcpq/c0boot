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
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_write0(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buf)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_writeall2(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buf)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_read(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buffer),_6e5d_c2r_lib_Object (*len)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_close(_6e5d_c2r_lib_Object (*ofd)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_open(_6e5d_c2r_lib_Object (*path),_6e5d_c2r_lib_Object (*mode)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_size(_6e5d_c2r_lib_Object (*fd)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_dup(_6e5d_c2r_lib_Object (*src)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_dup2(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*dst)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_seek(_6e5d_c2r_lib_Object (*ofd),_6e5d_c2r_lib_Object (*oo)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_errno());
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_flock(_6e5d_c2r_lib_Object (*ofd),_6e5d_c2r_lib_Object (*olock)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c0_truncate(_6e5d_c2r_lib_Object (*ofd),_6e5d_c2r_lib_Object (*olen)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readUntil(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buf),_6e5d_c2r_lib_Object (*ch)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readln(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buffer)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_writeall(_6e5d_c2r_lib_Object (*dst),_6e5d_c2r_lib_Object (*data)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readSized(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*buf)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readall(_6e5d_c2r_lib_Object (*file)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readlines(_6e5d_c2r_lib_Object (*file)));
static _6e5d_c2r_lib_Object (*decl(_6e5d_c2r_lib_Object (*ty),_6e5d_c2r_lib_Object (*v)));
static _6e5d_c2r_lib_Object (*binop(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*key),_6e5d_c2r_lib_Object (*l)));
static _6e5d_c2r_lib_Object (*writestr(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*s)));
static _6e5d_c2r_lib_Object (*testlen(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*llen)));
static _6e5d_c2r_lib_Object (*trybi(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*key),_6e5d_c2r_lib_Object (*l)));
static _6e5d_c2r_lib_Object (*expr(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*l)));
static _6e5d_c2r_lib_Object (*block(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*i0),_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*indent)));
static _6e5d_c2r_lib_Object (*stmt(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*indent)));
static _6e5d_c2r_lib_Object (*translateFn(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*deconly),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*translateSu(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*deconly),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*translateV(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*deconly),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*translate(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*deconly),_6e5d_c2r_lib_Object (*out)));
static _6e5d_c2r_lib_Object (*writedep(_6e5d_c2r_lib_Object (*depfile),_6e5d_c2r_lib_Object (*item),_6e5d_c2r_lib_Object (*dedup)));
_6e5d_c2r_lib_Object (*_6e5d_c0c2_lib_c0c2(_6e5d_c2r_lib_Object (*c0),_6e5d_c2r_lib_Object (*cfile),_6e5d_c2r_lib_Object (*depfile)));
static _6e5d_c2r_lib_Object (*decl(_6e5d_c2r_lib_Object (*ty),_6e5d_c2r_lib_Object (*v))){
	_6e5d_c2r_lib_incref(ty);
	_6e5d_c2r_lib_incref(v);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*kind) = NULL;
	auto _6e5d_c2r_lib_Object (*v2) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*tt) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(ty))))){
		(_return=_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,ty),1,_6e5d_c2prim_lib_fromBuf(" ",1)),2,v)));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(ty);
		_6e5d_c2r_lib_decref(v);
		_6e5d_c2r_lib_decref(kind);
		_6e5d_c2r_lib_decref(v2);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(tt);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_le(_6e5d_c2prim_lib_fromU64(2),_6e5d_c2prim_lib_length(ty))))){
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&kind),_6e5d_c2prim_lib_getItem(ty,_6e5d_c2prim_lib_fromU64(0)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(kind,_6e5d_c2prim_lib_fromBuf("Ptr",3)))){
		_6e5d_c2r_lib_check0(testlen(ty,_6e5d_c2prim_lib_fromU64(2)));
		_6e5d_c2prim_lib_assign((&v2),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("(*",2)),1,v),2,_6e5d_c2prim_lib_fromBuf(")",1))));
		(_return=decl(_6e5d_c2prim_lib_getItem(ty,_6e5d_c2prim_lib_fromU64(1)),v2));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(ty);
		_6e5d_c2r_lib_decref(v);
		_6e5d_c2r_lib_decref(kind);
		_6e5d_c2r_lib_decref(v2);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(tt);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(kind,_6e5d_c2prim_lib_fromBuf("Arg",3)))){
		_6e5d_c2prim_lib_assign((&v2),_6e5d_c2prim_lib_fromBuf("",0));
		_6e5d_c2prim_lib_assign((&idx),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(ty)))){
				break;
			};
			_6e5d_c2prim_lib_assign((&tt),_6e5d_c2prim_lib_getItem(ty,idx));
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_fromU64(2)))){
				continue;
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(idx,_6e5d_c2prim_lib_fromU64(2)))){
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(v2,_6e5d_c2prim_lib_fromU64(44)));
			};
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(v2,decl(tt,_6e5d_c2prim_lib_fromBuf("",0))));
		};
		_6e5d_c2prim_lib_assign((&v2),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,v),1,_6e5d_c2prim_lib_fromBuf("(",1)),2,v2),3,_6e5d_c2prim_lib_fromBuf(")",1))));
		(_return=decl(_6e5d_c2prim_lib_getItem(ty,_6e5d_c2prim_lib_fromU64(1)),v2));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(ty);
		_6e5d_c2r_lib_decref(v);
		_6e5d_c2r_lib_decref(kind);
		_6e5d_c2r_lib_decref(v2);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(tt);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(kind,_6e5d_c2prim_lib_fromBuf("Array",5)))){
		_6e5d_c2prim_lib_assign((&v2),NULL);
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(3),_6e5d_c2prim_lib_length(ty)))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(_6e5d_c2prim_lib_getItem(ty,_6e5d_c2prim_lib_fromU64(2)))))))){
				_6e5d_c2prim_lib_abort();
			};
			_6e5d_c2prim_lib_assign((&v2),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,v),1,_6e5d_c2prim_lib_fromBuf("[",1)),2,_6e5d_c2prim_lib_getItem(ty,_6e5d_c2prim_lib_fromU64(2))),3,_6e5d_c2prim_lib_fromBuf("]",1))));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&v2),_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,v),1,_6e5d_c2prim_lib_fromBuf("[",1)),2,_6e5d_c2prim_lib_fromBuf("]",1))));
		};
		(_return=decl(_6e5d_c2prim_lib_getItem(ty,_6e5d_c2prim_lib_fromU64(1)),v2));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(ty);
		_6e5d_c2r_lib_decref(v);
		_6e5d_c2r_lib_decref(kind);
		_6e5d_c2r_lib_decref(v2);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(tt);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(kind,_6e5d_c2prim_lib_fromBuf("Struct",6)))){
		(_return=_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("struct ",7)),1,_6e5d_c2prim_lib_getItem(ty,_6e5d_c2prim_lib_fromU64(1))),2,_6e5d_c2prim_lib_fromBuf(" ",1)),3,v)));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(ty);
		_6e5d_c2r_lib_decref(v);
		_6e5d_c2r_lib_decref(kind);
		_6e5d_c2r_lib_decref(v2);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(tt);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(kind,_6e5d_c2prim_lib_fromBuf("Union",5)))){
		(_return=_6e5d_c1str_lib_join(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),4),0,_6e5d_c2prim_lib_fromBuf("union ",6)),1,_6e5d_c2prim_lib_getItem(ty,_6e5d_c2prim_lib_fromU64(1))),2,_6e5d_c2prim_lib_fromBuf(" ",1)),3,v)));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(ty);
		_6e5d_c2r_lib_decref(v);
		_6e5d_c2r_lib_decref(kind);
		_6e5d_c2r_lib_decref(v2);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(tt);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("bad decl",8));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,ty);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2r_lib_decref(ty);
	_6e5d_c2r_lib_decref(v);
	_6e5d_c2r_lib_decref(kind);
	_6e5d_c2r_lib_decref(v2);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(tt);
	return NULL;
}
static _6e5d_c2r_lib_Object (*binop(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*key),_6e5d_c2r_lib_Object (*l))){
	_6e5d_c2r_lib_incref(out);
	_6e5d_c2r_lib_incref(key);
	_6e5d_c2r_lib_incref(l);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(40)));
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
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(1)))){
			;
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,key));
		};
		_6e5d_c2r_lib_check0(expr(out,ll));
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(key);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
static _6e5d_c2r_lib_Object (*writestr(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*s))){
	_6e5d_c2r_lib_incref(out);
	_6e5d_c2r_lib_incref(s);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ch) = NULL;
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(34)));
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
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(ch,_6e5d_c2prim_lib_fromU64(32)))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(ch,_6e5d_c2prim_lib_fromU64(127)))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(ch,_6e5d_c2prim_lib_fromU64(34)))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(ch,_6e5d_c2prim_lib_fromU64(92))))))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,ch));
			continue;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("""\x22""""\x22""""\x5c""x",4)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c1str_lib_n2h(_6e5d_c2prim_lib_div(ch,_6e5d_c2prim_lib_fromU64(16)))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c1str_lib_n2h(_6e5d_c2prim_lib_mod(ch,_6e5d_c2prim_lib_fromU64(16)))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("""\x22""""\x22""",2)));
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(34)));
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(s);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ch);
	return NULL;
}
static _6e5d_c2r_lib_Object (*testlen(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*llen))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(llen);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(l)))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("testlen",7));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,l);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(llen,_6e5d_c2prim_lib_length(l)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("testlen",7));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,l);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(llen);
	return NULL;
}
static _6e5d_c2r_lib_Object (*trybi(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*key),_6e5d_c2r_lib_Object (*l))){
	_6e5d_c2r_lib_incref(out);
	_6e5d_c2r_lib_incref(key);
	_6e5d_c2r_lib_incref(l);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*key0) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(key)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("empty kw",8));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&key0),_6e5d_c2prim_lib_getItem(key,_6e5d_c2prim_lib_fromU64(0)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("sval",4)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(123)));
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
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(46)));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0))));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(61)));
			_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(1))));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(44)));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(125)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("aval",4)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(123)));
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
			_6e5d_c2r_lib_check0(expr(out,ll));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(44)));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(125)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("-n",2)))){
		_6e5d_c2r_lib_check0(testlen(l,_6e5d_c2prim_lib_fromU64(2)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(40)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(45)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("+n",2)))){
		_6e5d_c2r_lib_check0(testlen(l,_6e5d_c2prim_lib_fromU64(2)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(40)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(43)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("*p",2)))){
		_6e5d_c2r_lib_check0(testlen(l,_6e5d_c2prim_lib_fromU64(2)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(40)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(42)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("&p",2)))){
		_6e5d_c2r_lib_check0(testlen(l,_6e5d_c2prim_lib_fromU64(2)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(40)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(38)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("~",1)))){
		_6e5d_c2r_lib_check0(testlen(l,_6e5d_c2prim_lib_fromU64(2)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(40)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(126)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("!",1)))){
		_6e5d_c2r_lib_check0(testlen(l,_6e5d_c2prim_lib_fromU64(2)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(40)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(33)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("@",1)))){
		_6e5d_c2r_lib_check0(testlen(l,_6e5d_c2prim_lib_fromU64(3)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(91)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(2))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(93)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("cast",4)))){
		_6e5d_c2r_lib_check0(testlen(l,_6e5d_c2prim_lib_fromU64(3)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("((",2)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,decl(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1)),_6e5d_c2prim_lib_fromBuf("",0))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(2))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(key0,_6e5d_c2prim_lib_fromU64(95)))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(key0,_6e5d_c2prim_lib_fromU64(97)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(key0,_6e5d_c2prim_lib_fromU64(122))))))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(key0,_6e5d_c2prim_lib_fromU64(65)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_gt(key0,_6e5d_c2prim_lib_fromU64(90)))))))))){
		_6e5d_c2r_lib_check0(binop(out,key,l));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		(_return=_6e5d_c2prim_lib_fromU64(0));
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(out);
		_6e5d_c2r_lib_decref(key);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(key0);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(ll);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	(_return=_6e5d_c2prim_lib_fromU64(1));
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(key);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(key0);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(key);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(key0);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
static _6e5d_c2r_lib_Object (*expr(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*l))){
	_6e5d_c2r_lib_incref(out);
	_6e5d_c2r_lib_incref(l);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*llen) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*ch) = NULL;
	auto _6e5d_c2r_lib_Object (*key) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(l))))){
		_6e5d_c2prim_lib_assign((&llen),_6e5d_c2prim_lib_length(l));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(l))))){
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(39)))){
			_6e5d_c2r_lib_check0(writestr(out,_6e5d_c1str_lib_slice(l,_6e5d_c2prim_lib_fromU64(1),llen)));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(96)))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(2),llen))){
				_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("bad ord",7));
				fprintf(stderr," ");
				_6e5d_c2prim_lib_printobj(stderr,l);
				_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
				_6e5d_c2prim_lib_abort();
			};
			_6e5d_c2prim_lib_assign((&ch),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1)));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("'""\x5c""x",3)));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c1str_lib_n2h(_6e5d_c2prim_lib_div(ch,_6e5d_c2prim_lib_fromU64(16)))));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c1str_lib_n2h(_6e5d_c2prim_lib_mod(ch,_6e5d_c2prim_lib_fromU64(16)))));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(39)));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,l));
		};
		_6e5d_c2r_lib_decref(out);
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(llen);
		_6e5d_c2r_lib_decref(first);
		_6e5d_c2r_lib_decref(ch);
		_6e5d_c2r_lib_decref(key);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(ll);
		return _return;
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(l)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("zero-len expr",13));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&key),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(key))))){
		if(_6e5d_c2prim_lib_toBool(trybi(out,key,l))){
			_6e5d_c2r_lib_decref(out);
			_6e5d_c2r_lib_decref(l);
			_6e5d_c2r_lib_decref(llen);
			_6e5d_c2r_lib_decref(first);
			_6e5d_c2r_lib_decref(ch);
			_6e5d_c2r_lib_decref(key);
			_6e5d_c2r_lib_decref(idx);
			_6e5d_c2r_lib_decref(ll);
			return _return;
		};
	};
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
			;
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(1)))){
			;
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(44)));
		};
		_6e5d_c2r_lib_check0(expr(out,ll));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(0)))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(40)));
		};
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(llen);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(ch);
	_6e5d_c2r_lib_decref(key);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
static _6e5d_c2r_lib_Object (*block(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*i0),_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*indent))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(i0);
	_6e5d_c2r_lib_incref(out);
	_6e5d_c2r_lib_incref(indent);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*body) = NULL;
	auto _6e5d_c2r_lib_Object (*_) = NULL;
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("{""\x0a""",2)));
	_6e5d_c2prim_lib_assign((&indent),_6e5d_c2prim_lib_add(indent,_6e5d_c2prim_lib_fromU64(1)));
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
		_6e5d_c2prim_lib_assign((&body),_6e5d_c2prim_lib_getItem(l,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,i0))){
			continue;
		};
		_6e5d_c2prim_lib_assign((&_),NULL);
		while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(_))))){
				_6e5d_c2prim_lib_assign((&_),_6e5d_c2prim_lib_fromU64(0));
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2prim_lib_assign((&_),_6e5d_c2prim_lib_add(_,_6e5d_c2prim_lib_fromU64(1)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(_,indent))){
				break;
			};
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(9)));
		};
		_6e5d_c2r_lib_check0(stmt(out,body,indent));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf(";""\x0a""",2)));
	};
	_6e5d_c2prim_lib_assign((&indent),_6e5d_c2prim_lib_sub(indent,_6e5d_c2prim_lib_fromU64(1)));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,indent))){
			break;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(9)));
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("}",1)));
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(i0);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(indent);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(body);
	_6e5d_c2r_lib_decref(_);
	return NULL;
}
static _6e5d_c2r_lib_Object (*stmt(_6e5d_c2r_lib_Object (*out),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*indent))){
	_6e5d_c2r_lib_incref(out);
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(indent);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*key) = NULL;
	auto _6e5d_c2r_lib_Object (*declkw) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(l))))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(l))))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("empty/str stmt",14));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,l);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&key),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)));
	_6e5d_c2prim_lib_assign((&declkw),_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_listSet(_6e5d_c2prim_lib_resizeList(_6e5d_c2prim_lib_listInit(),3),0,_6e5d_c2prim_lib_fromBuf("auto",4)),1,_6e5d_c2prim_lib_fromBuf("thread_local",12)),2,_6e5d_c2prim_lib_fromBuf("static",6)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(key))))){
		_6e5d_c2r_lib_check0(expr(out,l));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c1str_lib_contains(declkw,key))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("thread_local",12)))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("static ",7)));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,key));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,key));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(32)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,decl(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(2)),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1)))));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_length(l),_6e5d_c2prim_lib_fromU64(4)))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf(" = ",3)));
			_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(3))));
		};
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("cond",4)))){
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
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idx,_6e5d_c2prim_lib_fromU64(1)))){
				;
			}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("else ",5)));
			};
			if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_lt(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(ll))))){
				_6e5d_c2prim_lib_abort();
			};
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("if(",3)));
			_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0))));
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf(")",1)));
			_6e5d_c2r_lib_check0(block(ll,_6e5d_c2prim_lib_fromU64(1),out,indent));
		};
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("for",3)))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_le(_6e5d_c2prim_lib_fromU64(4),_6e5d_c2prim_lib_length(l))))){
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("for(",4)));
		_6e5d_c2r_lib_check0(stmt(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1)),indent));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(59)));
		_6e5d_c2r_lib_check0(stmt(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(2)),indent));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(59)));
		_6e5d_c2r_lib_check0(stmt(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(3)),indent));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
		_6e5d_c2r_lib_check0(block(l,_6e5d_c2prim_lib_fromU64(4),out,indent));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("while",5)))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_le(_6e5d_c2prim_lib_fromU64(2),_6e5d_c2prim_lib_length(l))))){
			_6e5d_c2prim_lib_abort();
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("while(",6)));
		_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(41)));
		_6e5d_c2r_lib_check0(block(l,_6e5d_c2prim_lib_fromU64(2),out,indent));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("begin",5)))){
		_6e5d_c2r_lib_check0(block(l,_6e5d_c2prim_lib_fromU64(1),out,indent));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("continue",8)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("continue",8)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("break",5)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("break",5)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("return",6)))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("return ",7)));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(2),_6e5d_c2prim_lib_length(l)))){
			_6e5d_c2r_lib_check0(expr(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		};
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(key,_6e5d_c2prim_lib_fromBuf("nop",3)))){
		;
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2r_lib_check0(expr(out,l));
	};
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(indent);
	_6e5d_c2r_lib_decref(key);
	_6e5d_c2r_lib_decref(declkw);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
static _6e5d_c2r_lib_Object (*translateFn(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*deconly),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(deconly);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*bindings) = NULL;
	auto _6e5d_c2r_lib_Object (*name) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*b) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*binding) = NULL;
	_6e5d_c2prim_lib_assign((&bindings),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(3)));
	_6e5d_c2prim_lib_assign((&name),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(name)))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("'emptyfunc",10));
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(name,_6e5d_c2prim_lib_fromU64(0)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(name,_6e5d_c2prim_lib_fromBuf("main",4)))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromU64(95),first)))))){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("static ",7)));
	};
	_6e5d_c2prim_lib_assign((&b),_6e5d_c2prim_lib_asBytes(name));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(b,_6e5d_c2prim_lib_fromU64(40)));
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(bindings)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&binding),_6e5d_c2prim_lib_getItem(bindings,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(idx,_6e5d_c2prim_lib_fromU64(0)))){
			_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(b,_6e5d_c2prim_lib_fromU64(44)));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(b,decl(_6e5d_c2prim_lib_getItem(binding,_6e5d_c2prim_lib_fromU64(1)),_6e5d_c2prim_lib_getItem(binding,_6e5d_c2prim_lib_fromU64(0)))));
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(b,_6e5d_c2prim_lib_fromU64(41)));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,decl(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(2)),b)));
	if(_6e5d_c2prim_lib_toBool(deconly)){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(59)));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2r_lib_check0(block(l,_6e5d_c2prim_lib_fromU64(4),out,_6e5d_c2prim_lib_fromU64(0)));
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(10)));
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(deconly);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(bindings);
	_6e5d_c2r_lib_decref(name);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(b);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(binding);
	return NULL;
}
static _6e5d_c2r_lib_Object (*translateSu(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*deconly),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(deconly);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	if(_6e5d_c2prim_lib_toBool(deconly)){
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("typedef ",8)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(32)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(32)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf(";""\x0a""",2)));
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(deconly);
		_6e5d_c2r_lib_decref(out);
		_6e5d_c2r_lib_decref(idx);
		_6e5d_c2r_lib_decref(ll);
		return _return;
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0))));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(32)));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1))));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("{""\x0a""",2)));
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
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(idx,_6e5d_c2prim_lib_fromU64(2)))){
			continue;
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(out,_6e5d_c2prim_lib_fromU64(9)));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,decl(_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(1)),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0)))));
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf(";""\x0a""",2)));
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("};""\x0a""",3)));
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(deconly);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(ll);
	return NULL;
}
static _6e5d_c2r_lib_Object (*translateV(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*deconly),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(deconly);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	if(_6e5d_c2prim_lib_toBool(deconly)){
		_6e5d_c2r_lib_decref(l);
		_6e5d_c2r_lib_decref(deconly);
		_6e5d_c2r_lib_decref(out);
		return _return;
	};
	_6e5d_c2r_lib_check0(stmt(out,l,_6e5d_c2prim_lib_fromU64(0)));
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf(";""\x0a""",2)));
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(deconly);
	_6e5d_c2r_lib_decref(out);
	return NULL;
}
static _6e5d_c2r_lib_Object (*translate(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*deconly),_6e5d_c2r_lib_Object (*out))){
	_6e5d_c2r_lib_incref(l);
	_6e5d_c2r_lib_incref(deconly);
	_6e5d_c2r_lib_incref(out);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*unit) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(l)))))){
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&unit),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(unit,_6e5d_c2prim_lib_fromBuf("fn",2)))){
		_6e5d_c2r_lib_check0(translateFn(l,deconly,out));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(unit,_6e5d_c2prim_lib_fromBuf("struct",6)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(unit,_6e5d_c2prim_lib_fromBuf("union",5))))))){
		_6e5d_c2r_lib_check0(translateSu(l,deconly,out));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(unit,_6e5d_c2prim_lib_fromBuf("static",6)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(unit,_6e5d_c2prim_lib_fromBuf("thread_local",12))))))){
		_6e5d_c2r_lib_check0(translateV(l,deconly,out));
	};
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(deconly);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(unit);
	return NULL;
}
static _6e5d_c2r_lib_Object (*writedep(_6e5d_c2r_lib_Object (*depfile),_6e5d_c2r_lib_Object (*item),_6e5d_c2r_lib_Object (*dedup))){
	_6e5d_c2r_lib_incref(depfile);
	_6e5d_c2r_lib_incref(item);
	_6e5d_c2r_lib_incref(dedup);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ok) = NULL;
	if(_6e5d_c2prim_lib_toBool(_6e5d_c1str_lib_contains(dedup,item))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("warn:dupdetected",16));
		fprintf(stderr," ");
		_6e5d_c2prim_lib_printobj(stderr,item);
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2r_lib_decref(depfile);
		_6e5d_c2r_lib_decref(item);
		_6e5d_c2r_lib_decref(dedup);
		_6e5d_c2r_lib_decref(ok);
		return _return;
	};
	_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(dedup,item));
	_6e5d_c2prim_lib_assign((&ok),_6e5d_c1file_c1_writeall(depfile,item));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(ok))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&ok),_6e5d_c1file_c1_writeall(depfile,_6e5d_c2prim_lib_fromBuf("""\x0a""",1)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(ok))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2r_lib_decref(depfile);
	_6e5d_c2r_lib_decref(item);
	_6e5d_c2r_lib_decref(dedup);
	_6e5d_c2r_lib_decref(ok);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c0c2_lib_c0c2(_6e5d_c2r_lib_Object (*c0),_6e5d_c2r_lib_Object (*cfile),_6e5d_c2r_lib_Object (*depfile))){
	_6e5d_c2r_lib_incref(c0);
	_6e5d_c2r_lib_incref(cfile);
	_6e5d_c2r_lib_incref(depfile);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*out) = NULL;
	auto _6e5d_c2r_lib_Object (*dedup) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*idy) = NULL;
	auto _6e5d_c2r_lib_Object (*ll) = NULL;
	auto _6e5d_c2r_lib_Object (*first) = NULL;
	auto _6e5d_c2r_lib_Object (*ok) = NULL;
	_6e5d_c2prim_lib_assign((&out),_6e5d_c2prim_lib_fromBuf("#include<stddef.h>""\x0a""#include<stdio.h>""\x0a""#include<stdlib.h>""\x0a""#include<string.h>""\x0a""#include<stdbool.h>""\x0a""#include<stdint.h>""\x0a""#include<assert.h>""\x0a""",133));
	_6e5d_c2prim_lib_assign((&depfile),_6e5d_c1file_c0_open(depfile,_6e5d_c2prim_lib_fromU64(577)));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(depfile))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2prim_lib_assign((&dedup),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(c0)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(c0,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("syslib",6)))){
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
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idy,_6e5d_c2prim_lib_fromU64(0)))){
					continue;
				};
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lnot(_6e5d_c2prim_lib_fromBool((5==_6e5d_c2prim_lib_tid(ll)))))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromU64(0),_6e5d_c2prim_lib_length(ll))))))){
					_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("'badsyslib",10));
					fprintf(stderr," ");
					_6e5d_c2prim_lib_printobj(stderr,l);
					_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
					_6e5d_c2prim_lib_abort();
				};
				_6e5d_c2prim_lib_assign((&first),_6e5d_c2prim_lib_getItem(ll,_6e5d_c2prim_lib_fromU64(0)));
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(first,_6e5d_c2prim_lib_fromU64(45)))){
					_6e5d_c2r_lib_check0(writedep(depfile,ll,dedup));
					continue;
				};
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf("#include<",9)));
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,ll));
				_6e5d_c2r_lib_check0(_6e5d_c1str_lib_append(out,_6e5d_c2prim_lib_fromBuf(">""\x0a""",2)));
			};
		};
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(c0)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(c0,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("pkgconf",7)))){
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
				if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(idy,_6e5d_c2prim_lib_fromU64(0)))){
					continue;
				};
				_6e5d_c2r_lib_check0(writedep(depfile,ll,dedup));
			};
		};
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(c0)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(c0,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("linkobj",7)))){
			_6e5d_c2r_lib_check0(writedep(depfile,_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(1)),dedup));
		};
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(c0)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(c0,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("struct",6)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("union",5))))))){
			_6e5d_c2r_lib_check0(translate(l,_6e5d_c2prim_lib_fromU64(1),out));
		};
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(c0)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(c0,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("struct",6)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("union",5))))))){
			_6e5d_c2r_lib_check0(translate(l,_6e5d_c2prim_lib_fromU64(0),out));
		};
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(c0)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(c0,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("fn",2)))){
			_6e5d_c2r_lib_check0(translate(l,_6e5d_c2prim_lib_fromU64(1),out));
		};
	};
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(c0)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(c0,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("fn",2)))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_lt(_6e5d_c2prim_lib_fromU64(4),_6e5d_c2prim_lib_length(l))))))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("static",6)))||_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromBuf("thread_local",12))))))){
			_6e5d_c2r_lib_check0(translate(l,_6e5d_c2prim_lib_fromU64(0),out));
		};
	};
	_6e5d_c2prim_lib_assign((&ok),_6e5d_c1file_c1_writeall(cfile,out));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(ok))))){
		_6e5d_c2prim_lib_printobj(stderr,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
		_6e5d_c2prim_lib_abort();
	};
	_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(depfile));
	_6e5d_c2r_lib_decref(c0);
	_6e5d_c2r_lib_decref(cfile);
	_6e5d_c2r_lib_decref(depfile);
	_6e5d_c2r_lib_decref(out);
	_6e5d_c2r_lib_decref(dedup);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(idy);
	_6e5d_c2r_lib_decref(ll);
	_6e5d_c2r_lib_decref(first);
	_6e5d_c2r_lib_decref(ok);
	return NULL;
}
