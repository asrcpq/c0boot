#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
#include<errno.h>
#include<unistd.h>
#include<sys/wait.h>
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
char (*_6e5d_c2prim_cstrAlloc(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x)));
_6e5d_vec_Vec (*_6e5d_c2r_asVec(_6e5d_c2r_Object (*po)));
_6e5d_c2r_Object (*_6e5d_c1file_writeall(_6e5d_c2r_Object (*dst),_6e5d_c2r_Object (*data)));
_6e5d_c2r_Object (*_6e5d_c1file_readall(_6e5d_c2r_Object (*file)));
_6e5d_c2r_Object (*_6e5d_c1file_close(_6e5d_c2r_Object (*fd)));
_6e5d_c2r_Object (*_6e5d_c1file_dup2(_6e5d_c2r_Object (*src),_6e5d_c2r_Object (*dst)));
_6e5d_c2r_Object (*_6e5d_c1fork_pipe());
_6e5d_c2r_Object (*_6e5d_c1fork_exit(_6e5d_c2r_Object (*val)));
_6e5d_c2r_Object (*_6e5d_c1fork_run(_6e5d_c2r_Object (*cmd),_6e5d_c2r_Object (*data)));
_6e5d_c2r_Object (*c1Execvp(_6e5d_c2r_Object (*cmd)));
_6e5d_c2r_Object (*_6e5d_c1fork_fork());
_6e5d_c2r_Object (*_6e5d_c1fork_spawn(_6e5d_c2r_Object (*cmd),_6e5d_c2r_Object (*fd0),_6e5d_c2r_Object (*fd1),_6e5d_c2r_Object (*fd2)));
_6e5d_c2r_Object (*_6e5d_c1fork_wait(_6e5d_c2r_Object (*pid)));
_6e5d_c2r_Object (*_6e5d_c1fork_pipe()){
	auto int pip[2];
	assert((0==pipe(pip)));
	auto _6e5d_c2r_Object (*pipl) = _6e5d_c2prim_listInit();
	_6e5d_c2r_incref(pipl);
	_6e5d_c1str_push(pipl,_6e5d_c2prim_fromU64(((uint64_t )pip[0])));
	_6e5d_c1str_push(pipl,_6e5d_c2prim_fromU64(((uint64_t )pip[1])));
	_6e5d_c2r_deconly(pipl);
	return pipl;
}
_6e5d_c2r_Object (*_6e5d_c1fork_exit(_6e5d_c2r_Object (*val))){
	exit(((int )_6e5d_c2prim_toU64(val)));
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1fork_run(_6e5d_c2r_Object (*cmd),_6e5d_c2r_Object (*data))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(cmd);
	_6e5d_c2r_incref(data);
	{
		auto _6e5d_c2r_Object (*pipe0) = NULL;
		(_vartmp=pipe0);
		(pipe0=_6e5d_c2r_incref(_6e5d_c1fork_pipe()));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*pipe1) = NULL;
		(_vartmp=pipe1);
		(pipe1=_6e5d_c2r_incref(_6e5d_c1fork_pipe()));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*pid) = NULL;
		(_vartmp=pid);
		(pid=_6e5d_c2r_incref(_6e5d_c1fork_spawn(cmd,pipe0,pipe1,NULL)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c1file_close(_6e5d_c2prim_getItem(pipe0,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_check(_6e5d_c1file_close(_6e5d_c2prim_getItem(pipe1,_6e5d_c2prim_fromU64(1))));
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(data))){
			{
				_6e5d_c2r_check(_6e5d_c1file_close(_6e5d_c2prim_getItem(pipe0,_6e5d_c2prim_fromU64(1))));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				auto _6e5d_c2r_Object (*ret) = NULL;
				(_vartmp=ret);
				(ret=_6e5d_c2r_incref(_6e5d_c1file_writeall(_6e5d_c2prim_getItem(pipe0,_6e5d_c2prim_fromU64(1)),data)));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_check(_6e5d_c1file_close(_6e5d_c2prim_getItem(pipe0,_6e5d_c2prim_fromU64(1))));
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(ret))){
					{
						_6e5d_c2r_check(_6e5d_c1file_close(_6e5d_c2prim_getItem(pipe1,_6e5d_c2prim_fromU64(0))));
						(_vartmp=NULL);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(ret);
						_6e5d_c2r_decref(pid);
						_6e5d_c2r_decref(pipe1);
						_6e5d_c2r_decref(pipe0);
						_6e5d_c2r_decref(data);
						_6e5d_c2r_decref(cmd);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				_6e5d_c2r_decref(ret);
			};
		};
		auto _6e5d_c2r_Object (*output) = NULL;
		(_vartmp=output);
		(output=_6e5d_c2r_incref(_6e5d_c1file_readall(_6e5d_c2prim_getItem(pipe1,_6e5d_c2prim_fromU64(0)))));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c1file_close(_6e5d_c2prim_getItem(pipe1,_6e5d_c2prim_fromU64(0))));
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		(ret=_6e5d_c2r_incref(_6e5d_c1fork_wait(pid)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromI64(+0),ret))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(ret);
				_6e5d_c2r_decref(output);
				_6e5d_c2r_decref(pid);
				_6e5d_c2r_decref(pipe1);
				_6e5d_c2r_decref(pipe0);
				_6e5d_c2r_decref(data);
				_6e5d_c2r_decref(cmd);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		(_vartmp=output);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(output);
		_6e5d_c2r_decref(pid);
		_6e5d_c2r_decref(pipe1);
		_6e5d_c2r_decref(pipe0);
		_6e5d_c2r_decref(data);
		_6e5d_c2r_decref(cmd);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(output);
		_6e5d_c2r_decref(pid);
		_6e5d_c2r_decref(pipe1);
		_6e5d_c2r_decref(pipe0);
	};
	_6e5d_c2r_decref(data);
	_6e5d_c2r_decref(cmd);
	return NULL;
}
_6e5d_c2r_Object (*c1Execvp(_6e5d_c2r_Object (*cmd))){
	auto char (*args[4096]);
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(cmd);
	assert((NULL!=v));
	auto size_t idx = 0;
	for(auto _6e5d_c2r_Object (*(*iter)) = (v->p);(((void (*))iter)<((void (*))(((uint8_t (*))(v->p))+((v->len)*(v->size)))));(iter+=1)){
		auto char (*s) = _6e5d_c2prim_cstrAlloc((*iter));
		assert((NULL!=s));
		(args[idx]=s);
		(idx+=1);
	};
	(args[idx]=NULL);
	execvp(args[0],args);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1fork_fork()){
	auto pid_t child_pid = fork();
	if((child_pid<0)){
		return NULL;
	};
	return _6e5d_c2prim_fromU64(((uint64_t )child_pid));
}
_6e5d_c2r_Object (*_6e5d_c1fork_spawn(_6e5d_c2r_Object (*cmd),_6e5d_c2r_Object (*fd0),_6e5d_c2r_Object (*fd1),_6e5d_c2r_Object (*fd2))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(cmd);
	_6e5d_c2r_incref(fd0);
	_6e5d_c2r_incref(fd1);
	_6e5d_c2r_incref(fd2);
	{
		auto _6e5d_c2r_Object (*pid) = NULL;
		(_vartmp=pid);
		(pid=_6e5d_c2r_incref(_6e5d_c1fork_fork()));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(pid))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(pid);
				_6e5d_c2r_decref(fd2);
				_6e5d_c2r_decref(fd1);
				_6e5d_c2r_decref(fd0);
				_6e5d_c2r_decref(cmd);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(pid,_6e5d_c2prim_fromU64(0)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isU64(fd0))){
					{
						_6e5d_c2r_check(_6e5d_c1file_dup2(fd0,_6e5d_c2prim_fromU64(0)));
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isU64(fd1))){
					{
						_6e5d_c2r_check(_6e5d_c1file_dup2(fd1,_6e5d_c2prim_fromU64(1)));
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isU64(fd2))){
					{
						_6e5d_c2r_check(_6e5d_c1file_dup2(fd2,_6e5d_c2prim_fromU64(2)));
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(fd0))){
					{
						_6e5d_c2r_check(_6e5d_c1file_dup2(_6e5d_c2prim_getItem(fd0,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromU64(0)));
						_6e5d_c2r_check(_6e5d_c1file_close(_6e5d_c2prim_getItem(fd0,_6e5d_c2prim_fromU64(1))));
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(fd1))){
					{
						_6e5d_c2r_check(_6e5d_c1file_dup2(_6e5d_c2prim_getItem(fd1,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_fromU64(1)));
						_6e5d_c2r_check(_6e5d_c1file_close(_6e5d_c2prim_getItem(fd1,_6e5d_c2prim_fromU64(0))));
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(fd2))){
					{
						_6e5d_c2r_check(_6e5d_c1file_dup2(_6e5d_c2prim_getItem(fd2,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_fromU64(2)));
						_6e5d_c2r_check(_6e5d_c1file_close(_6e5d_c2prim_getItem(fd2,_6e5d_c2prim_fromU64(0))));
					};
				};
				_6e5d_c2r_check(c1Execvp(cmd));
			};
		};
		(_vartmp=pid);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(pid);
		_6e5d_c2r_decref(fd2);
		_6e5d_c2r_decref(fd1);
		_6e5d_c2r_decref(fd0);
		_6e5d_c2r_decref(cmd);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(pid);
	};
	_6e5d_c2r_decref(fd2);
	_6e5d_c2r_decref(fd1);
	_6e5d_c2r_decref(fd0);
	_6e5d_c2r_decref(cmd);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1fork_wait(_6e5d_c2r_Object (*pid))){
	auto int status;
	auto int child_pid = ((int )_6e5d_c2prim_toU64(pid));
	waitpid(child_pid,(&status),0);
	_6e5d_c2r_check(pid);
	if(WIFEXITED(status)){
		return _6e5d_c2prim_fromI64(WEXITSTATUS(status));
	};
	return _6e5d_c2prim_fromI64(-1);
}
