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
#include<sys/stat.h>
#include<dirent.h>
#include<unistd.h>
#include<limits.h>
#include<unistd.h>
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
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readUntil(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buf),_6e5d_c2r_lib_Object (*ch)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readln(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*buffer)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_writeall(_6e5d_c2r_lib_Object (*dst),_6e5d_c2r_lib_Object (*data)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readSized(_6e5d_c2r_lib_Object (*fd),_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*buf)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readall(_6e5d_c2r_lib_Object (*file)));
_6e5d_c2r_lib_Object (*_6e5d_c1file_c1_readlines(_6e5d_c2r_lib_Object (*file)));
_6e5d_c2r_lib_Object (*_6e5d_c1ltr_c0_parse(_6e5d_c2r_lib_Object (*s)));
_6e5d_c2r_lib_Object (*_6e5d_c1ltr_c1_dump(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c1c0_lib_func(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*block)));
static _6e5d_c2r_lib_Object (*translateFile(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*blocks)));
int main(int _c1argc,char (*(*_c1argv)));
static _6e5d_c2r_lib_Object (*translateFile(_6e5d_c2r_lib_Object (*symmap),_6e5d_c2r_lib_Object (*blocks))){
	_6e5d_c2r_lib_incref(symmap);
	_6e5d_c2r_lib_incref(blocks);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*idx) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c2prim_lib_listInit());
	_6e5d_c2prim_lib_assign((&idx),NULL);
	while(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(idx))))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_fromU64(0));
		}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
			_6e5d_c2prim_lib_assign((&idx),_6e5d_c2prim_lib_add(idx,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ge(idx,_6e5d_c2prim_lib_length(blocks)))){
			break;
		};
		_6e5d_c2prim_lib_assign((&l),_6e5d_c2prim_lib_getItem(blocks,idx));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_fromBuf("fn",2),_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(0))))&&_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(_6e5d_c2prim_lib_getItem(l,_6e5d_c2prim_lib_fromU64(2)),_6e5d_c2prim_lib_fromBuf(".",1))))))){
			_6e5d_c2prim_lib_assign((&l),_6e5d_c1c0_lib_func(symmap,l));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1str_lib_push(ret,l));
	};
	(_return=ret);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(blocks);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(blocks);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(idx);
	_6e5d_c2r_lib_decref(l);
	return NULL;
}
int main(int _c1argc,char (*(*_c1argv))){
	auto _6e5d_c2r_lib_Object (*args) = _6e5d_c2prim_lib_listInit();
	_6e5d_c2r_lib_incref(args);
	_6e5d_c2prim_lib_resizeList(args,((size_t )_c1argc));
	for(auto size_t idx = 0;(idx<_c1argc);(idx+=1)){
		_6e5d_c2prim_lib_listSet(args,idx,_6e5d_c2prim_lib_fromBuf(_c1argv[idx],strlen(_c1argv[idx])));
	};
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*symmap) = NULL;
	auto _6e5d_c2r_lib_Object (*l) = NULL;
	auto _6e5d_c2r_lib_Object (*s) = NULL;
	_6e5d_c2prim_lib_assign((&symmap),_6e5d_c2prim_lib_mapInit());
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf(">",1),_6e5d_c2prim_lib_fromBuf("gt",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf(">=",2),_6e5d_c2prim_lib_fromBuf("ge",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("<",1),_6e5d_c2prim_lib_fromBuf("lt",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("<=",2),_6e5d_c2prim_lib_fromBuf("le",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("==",2),_6e5d_c2prim_lib_fromBuf("eq",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("!=",2),_6e5d_c2prim_lib_fromBuf("ne",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("+",1),_6e5d_c2prim_lib_fromBuf("add",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("-",1),_6e5d_c2prim_lib_fromBuf("sub",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("*",1),_6e5d_c2prim_lib_fromBuf("mul",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("/",1),_6e5d_c2prim_lib_fromBuf("div",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("%",1),_6e5d_c2prim_lib_fromBuf("mod",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("&",1),_6e5d_c2prim_lib_fromBuf("and",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("|",1),_6e5d_c2prim_lib_fromBuf("or",2));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("^",1),_6e5d_c2prim_lib_fromBuf("xor",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("<<",2),_6e5d_c2prim_lib_fromBuf("shl",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf(">>",2),_6e5d_c2prim_lib_fromBuf("shr",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("!",1),_6e5d_c2prim_lib_fromBuf("lnot",4));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("~",1),_6e5d_c2prim_lib_fromBuf("not",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("-n",2),_6e5d_c2prim_lib_fromBuf("inv",3));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("@",1),_6e5d_c2prim_lib_fromBuf("getItem",7));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("resize",6),_6e5d_c2prim_lib_fromBuf("resize",6));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("len",3),_6e5d_c2prim_lib_fromBuf("length",6));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->u64",5),_6e5d_c2prim_lib_fromBuf("asU64",5));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->i64",5),_6e5d_c2prim_lib_fromBuf("asI64",5));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->f32",5),_6e5d_c2prim_lib_fromBuf("asF32",5));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->bytes",7),_6e5d_c2prim_lib_fromBuf("asBytes",7));
	_6e5d_c2prim_lib_setItem(symmap,_6e5d_c2prim_lib_fromBuf("->list",6),_6e5d_c2prim_lib_fromBuf("asList",6));
	_6e5d_c2prim_lib_assign((&l),_6e5d_c1file_c1_readall(_6e5d_c2prim_lib_getItem(args,_6e5d_c2prim_lib_fromU64(1))));
	_6e5d_c2prim_lib_assign((&l),_6e5d_c1ltr_c0_parse(l));
	_6e5d_c2prim_lib_assign((&l),translateFile(symmap,l));
	_6e5d_c2prim_lib_assign((&s),_6e5d_c1ltr_c1_dump(l));
	_6e5d_c2prim_lib_printobj(stdout,s);
	fprintf(stdout," ");
	_6e5d_c2prim_lib_printobj(stdout,_6e5d_c2prim_lib_fromBuf("""\x0a""",1));
	_6e5d_c2r_lib_decref(args);
	_6e5d_c2r_lib_decref(symmap);
	_6e5d_c2r_lib_decref(l);
	_6e5d_c2r_lib_decref(s);
}