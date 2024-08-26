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
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c0_pipe());
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c0_exit(_6e5d_c2r_lib_Object (*val)));
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c0_execvp(_6e5d_c2r_lib_Object (*cmd)));
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c0_fork());
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c0_wait(_6e5d_c2r_lib_Object (*pid)));
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c1_spawn(_6e5d_c2r_lib_Object (*cmd),_6e5d_c2r_lib_Object (*fd0),_6e5d_c2r_lib_Object (*fd1),_6e5d_c2r_lib_Object (*fd2)));
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c1_run(_6e5d_c2r_lib_Object (*cmd),_6e5d_c2r_lib_Object (*data)));
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c1_spawn(_6e5d_c2r_lib_Object (*cmd),_6e5d_c2r_lib_Object (*fd0),_6e5d_c2r_lib_Object (*fd1),_6e5d_c2r_lib_Object (*fd2))){
	_6e5d_c2r_lib_incref(cmd);
	_6e5d_c2r_lib_incref(fd0);
	_6e5d_c2r_lib_incref(fd1);
	_6e5d_c2r_lib_incref(fd2);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*pid) = NULL;
	_6e5d_c2prim_lib_assign((&pid),_6e5d_c1fork_c0_fork());
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(pid))))){
		(_return=NULL);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(cmd);
		_6e5d_c2r_lib_decref(fd0);
		_6e5d_c2r_lib_decref(fd1);
		_6e5d_c2r_lib_decref(fd2);
		_6e5d_c2r_lib_decref(pid);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_eq(pid,_6e5d_c2prim_lib_fromU64(0)))){
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((1==_6e5d_c2prim_lib_tid(fd0))))){
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_dup2(fd0,_6e5d_c2prim_lib_fromU64(0)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((1==_6e5d_c2prim_lib_tid(fd1))))){
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_dup2(fd1,_6e5d_c2prim_lib_fromU64(1)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((1==_6e5d_c2prim_lib_tid(fd2))))){
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_dup2(fd2,_6e5d_c2prim_lib_fromU64(2)));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(fd0))))){
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_dup2(_6e5d_c2prim_lib_getItem(fd0,_6e5d_c2prim_lib_fromU64(0)),_6e5d_c2prim_lib_fromU64(0)));
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(_6e5d_c2prim_lib_getItem(fd0,_6e5d_c2prim_lib_fromU64(1))));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(fd1))))){
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_dup2(_6e5d_c2prim_lib_getItem(fd1,_6e5d_c2prim_lib_fromU64(1)),_6e5d_c2prim_lib_fromU64(1)));
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(_6e5d_c2prim_lib_getItem(fd1,_6e5d_c2prim_lib_fromU64(0))));
		};
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((6==_6e5d_c2prim_lib_tid(fd2))))){
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_dup2(_6e5d_c2prim_lib_getItem(fd2,_6e5d_c2prim_lib_fromU64(1)),_6e5d_c2prim_lib_fromU64(2)));
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(_6e5d_c2prim_lib_getItem(fd2,_6e5d_c2prim_lib_fromU64(0))));
		};
		_6e5d_c2r_lib_check0(_6e5d_c1fork_c0_execvp(cmd));
	};
	(_return=pid);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(cmd);
	_6e5d_c2r_lib_decref(fd0);
	_6e5d_c2r_lib_decref(fd1);
	_6e5d_c2r_lib_decref(fd2);
	_6e5d_c2r_lib_decref(pid);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(cmd);
	_6e5d_c2r_lib_decref(fd0);
	_6e5d_c2r_lib_decref(fd1);
	_6e5d_c2r_lib_decref(fd2);
	_6e5d_c2r_lib_decref(pid);
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1fork_c1_run(_6e5d_c2r_lib_Object (*cmd),_6e5d_c2r_lib_Object (*data))){
	_6e5d_c2r_lib_incref(cmd);
	_6e5d_c2r_lib_incref(data);
	auto _6e5d_c2r_lib_Object (*_return) = NULL;
	((void )_return);
	auto _6e5d_c2r_lib_Object (*pipe0) = NULL;
	auto _6e5d_c2r_lib_Object (*pipe1) = NULL;
	auto _6e5d_c2r_lib_Object (*pid) = NULL;
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	auto _6e5d_c2r_lib_Object (*output) = NULL;
	_6e5d_c2prim_lib_assign((&pipe0),_6e5d_c1fork_c0_pipe());
	_6e5d_c2prim_lib_assign((&pipe1),_6e5d_c1fork_c0_pipe());
	_6e5d_c2prim_lib_assign((&pid),_6e5d_c1fork_c1_spawn(cmd,pipe0,pipe1,NULL));
	_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(_6e5d_c2prim_lib_getItem(pipe0,_6e5d_c2prim_lib_fromU64(0))));
	_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(_6e5d_c2prim_lib_getItem(pipe1,_6e5d_c2prim_lib_fromU64(1))));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(data))))){
		_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(_6e5d_c2prim_lib_getItem(pipe0,_6e5d_c2prim_lib_fromU64(1))));
	}else if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromU64(1))){
		_6e5d_c2prim_lib_assign((&ret),_6e5d_c1file_c1_writeall(_6e5d_c2prim_lib_getItem(pipe0,_6e5d_c2prim_lib_fromU64(1)),data));
		_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(_6e5d_c2prim_lib_getItem(pipe0,_6e5d_c2prim_lib_fromU64(1))));
		if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_fromBool((0==_6e5d_c2prim_lib_tid(ret))))){
			_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(_6e5d_c2prim_lib_getItem(pipe1,_6e5d_c2prim_lib_fromU64(0))));
			(_return=NULL);
			_6e5d_c2r_lib_incref(_return);
			_6e5d_c2r_lib_decref(cmd);
			_6e5d_c2r_lib_decref(data);
			_6e5d_c2r_lib_decref(pipe0);
			_6e5d_c2r_lib_decref(pipe1);
			_6e5d_c2r_lib_decref(pid);
			_6e5d_c2r_lib_decref(ret);
			_6e5d_c2r_lib_decref(output);
			_6e5d_c2r_lib_deconly(_return);
			return _return;
		};
	};
	_6e5d_c2prim_lib_assign((&output),_6e5d_c1file_c1_readall(_6e5d_c2prim_lib_getItem(pipe1,_6e5d_c2prim_lib_fromU64(0))));
	_6e5d_c2r_lib_check0(_6e5d_c1file_c0_close(_6e5d_c2prim_lib_getItem(pipe1,_6e5d_c2prim_lib_fromU64(0))));
	_6e5d_c2prim_lib_assign((&ret),_6e5d_c1fork_c0_wait(pid));
	if(_6e5d_c2prim_lib_toBool(_6e5d_c2prim_lib_ne(_6e5d_c2prim_lib_fromI64(+0),ret))){
		(_return=NULL);
		_6e5d_c2r_lib_incref(_return);
		_6e5d_c2r_lib_decref(cmd);
		_6e5d_c2r_lib_decref(data);
		_6e5d_c2r_lib_decref(pipe0);
		_6e5d_c2r_lib_decref(pipe1);
		_6e5d_c2r_lib_decref(pid);
		_6e5d_c2r_lib_decref(ret);
		_6e5d_c2r_lib_decref(output);
		_6e5d_c2r_lib_deconly(_return);
		return _return;
	};
	(_return=output);
	_6e5d_c2r_lib_incref(_return);
	_6e5d_c2r_lib_decref(cmd);
	_6e5d_c2r_lib_decref(data);
	_6e5d_c2r_lib_decref(pipe0);
	_6e5d_c2r_lib_decref(pipe1);
	_6e5d_c2r_lib_decref(pid);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(output);
	_6e5d_c2r_lib_deconly(_return);
	return _return;
	_6e5d_c2r_lib_decref(cmd);
	_6e5d_c2r_lib_decref(data);
	_6e5d_c2r_lib_decref(pipe0);
	_6e5d_c2r_lib_decref(pipe1);
	_6e5d_c2r_lib_decref(pid);
	_6e5d_c2r_lib_decref(ret);
	_6e5d_c2r_lib_decref(output);
	return NULL;
}
