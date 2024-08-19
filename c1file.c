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
_6e5d_c2r_Object (*_6e5d_c1str_lindex(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*_6e5d_c1str_slice(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*i1),_6e5d_c2r_Object (*i2)));
_6e5d_c2r_Object (*_6e5d_c1str_bufcopy(_6e5d_c2r_Object (*f),_6e5d_c2r_Object (*t)));
_6e5d_c2r_Object (*_6e5d_c1str_split(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*delim)));
int64_t _6e5d_c2prim_cstr(_6e5d_c2r_Object (*obj),char (*out),size_t maxlen);
_6e5d_vec_Vec (*_6e5d_c2r_asStr(_6e5d_c2r_Object (*po)));
void _6e5d_vec_resize(_6e5d_vec_Vec (*v),size_t newlen);
_6e5d_c2r_Object (*_6e5d_c1file_readUntil(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buf),_6e5d_c2r_Object (*ch)));
_6e5d_c2r_Object (*_6e5d_c1file_readln(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buffer)));
int64_t write2(int fd,_6e5d_vec_Vec (*v),size_t offset);
_6e5d_c2r_Object (*_6e5d_c1file_write0(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buf)));
_6e5d_c2r_Object (*writeall2(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buf)));
_6e5d_c2r_Object (*_6e5d_c1file_writeall(_6e5d_c2r_Object (*dst),_6e5d_c2r_Object (*data)));
_6e5d_c2r_Object (*read2(int fd,_6e5d_vec_Vec (*v),size_t len));
_6e5d_c2r_Object (*_6e5d_c1file_readSized(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*buf)));
_6e5d_c2r_Object (*_6e5d_c1file_read(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buffer),_6e5d_c2r_Object (*len)));
_6e5d_c2r_Object (*readall2(_6e5d_c2r_Object (*fd)));
_6e5d_c2r_Object (*_6e5d_c1file_readall(_6e5d_c2r_Object (*file)));
_6e5d_c2r_Object (*_6e5d_c1file_readlines(_6e5d_c2r_Object (*file)));
_6e5d_c2r_Object (*_6e5d_c1file_close(_6e5d_c2r_Object (*fd)));
_6e5d_c2r_Object (*_6e5d_c1file_open(_6e5d_c2r_Object (*path),_6e5d_c2r_Object (*mode)));
_6e5d_c2r_Object (*_6e5d_c1file_size(_6e5d_c2r_Object (*fd)));
_6e5d_c2r_Object (*_6e5d_c1file_dup(_6e5d_c2r_Object (*src)));
_6e5d_c2r_Object (*_6e5d_c1file_dup2(_6e5d_c2r_Object (*src),_6e5d_c2r_Object (*dst)));
_6e5d_c2r_Object (*_6e5d_c1file_seek(_6e5d_c2r_Object (*ofd),_6e5d_c2r_Object (*oo)));
_6e5d_c2r_Object (*_6e5d_c1file_errno());
_6e5d_c2r_Object (*_6e5d_c1file_flock(_6e5d_c2r_Object (*ofd),_6e5d_c2r_Object (*olock)));
_6e5d_c2r_Object (*_6e5d_c1file_truncate(_6e5d_c2r_Object (*ofd),_6e5d_c2r_Object (*olen)));
_6e5d_c2r_Object (*_6e5d_c1file_readUntil(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buf),_6e5d_c2r_Object (*ch))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(fd);
	_6e5d_c2r_incref(buf);
	_6e5d_c2r_incref(ch);
	{
		auto _6e5d_c2r_Object (*idx) = NULL;
		(_vartmp=idx);
		(idx=_6e5d_c2r_incref(NULL));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				(_vartmp=idx);
				(idx=_6e5d_c2r_incref(_6e5d_c1str_lindex(buf,ch)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isNil(idx)))){
					{
						break;
					};
				};
				auto _6e5d_c2r_Object (*readlen) = NULL;
				(_vartmp=readlen);
				(readlen=_6e5d_c2r_incref(_6e5d_c1file_read(fd,buf,_6e5d_c2prim_fromU64(4096))));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(readlen))){
					{
						(_vartmp=NULL);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(readlen);
						_6e5d_c2r_decref(idx);
						_6e5d_c2r_decref(ch);
						_6e5d_c2r_decref(buf);
						_6e5d_c2r_decref(fd);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),readlen))){
					{
						(_vartmp=NULL);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(readlen);
						_6e5d_c2r_decref(idx);
						_6e5d_c2r_decref(ch);
						_6e5d_c2r_decref(buf);
						_6e5d_c2r_decref(fd);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				_6e5d_c2r_decref(readlen);
			};
		};
		auto _6e5d_c2r_Object (*ret) = NULL;
		(_vartmp=ret);
		(ret=_6e5d_c2r_incref(_6e5d_c1str_slice(buf,_6e5d_c2prim_fromU64(0),idx)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c1str_bufcopy(_6e5d_c1str_slice(buf,_6e5d_c2prim_add(idx,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_length(buf)),buf));
		(_vartmp=ret);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(idx);
		_6e5d_c2r_decref(ch);
		_6e5d_c2r_decref(buf);
		_6e5d_c2r_decref(fd);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(ret);
		_6e5d_c2r_decref(idx);
	};
	_6e5d_c2r_decref(ch);
	_6e5d_c2r_decref(buf);
	_6e5d_c2r_decref(fd);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1file_readln(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buffer))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(fd);
	_6e5d_c2r_incref(buffer);
	{
		(_vartmp=_6e5d_c1file_readUntil(fd,buffer,_6e5d_c2prim_fromU64(0x0a)));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(buffer);
		_6e5d_c2r_decref(fd);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
	};
	_6e5d_c2r_decref(buffer);
	_6e5d_c2r_decref(fd);
	return NULL;
}
int64_t write2(int fd,_6e5d_vec_Vec (*v),size_t offset){
	if((NULL==v)){
		return -2;
	};
	auto size_t l = (v->len);
	if((offset>=l)){
		return 0;
	};
	auto uint8_t (*p) = (v->p);
	auto ssize_t ret = write(((int )fd),(p+offset),(l-offset));
	if((ret>=0)){
		return ((int64_t )ret);
	}else if(true){
		return -1;
	};
}
_6e5d_c2r_Object (*_6e5d_c1file_write0(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buf))){
	auto uint64_t vfd = _6e5d_c2prim_toU64(fd);
	_6e5d_c2r_check(fd);
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asStr(buf);
	auto int64_t ret = write2(((int )vfd),v,0);
	_6e5d_c2r_check(buf);
	if((ret<0)){
		return NULL;
	}else if(true){
		return _6e5d_c2prim_fromU64(((uint64_t )ret));
	};
}
_6e5d_c2r_Object (*writeall2(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buf))){
	auto uint64_t vfd = _6e5d_c2prim_toU64(fd);
	_6e5d_c2r_check(fd);
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asStr(buf);
	auto size_t offset = 0;
	auto size_t l = (v->len);
	while((offset<l)){
		auto int64_t ret = write2(((int )vfd),v,offset);
		if((ret>0)){
			(offset+=((size_t )ret));
		}else if(true){
			_6e5d_c2r_check(buf);
			return NULL;
		};
	};
	_6e5d_c2r_check(buf);
	return _6e5d_c2prim_fromU64(0);
}
_6e5d_c2r_Object (*_6e5d_c1file_writeall(_6e5d_c2r_Object (*dst),_6e5d_c2r_Object (*data))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(dst);
	_6e5d_c2r_incref(data);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(dst))){
			{
				auto _6e5d_c2r_Object (*fd) = NULL;
				(_vartmp=fd);
				(fd=_6e5d_c2r_incref(_6e5d_c1file_open(dst,_6e5d_c2prim_fromU64(577))));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(fd))){
					{
						(_vartmp=NULL);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(fd);
						_6e5d_c2r_decref(data);
						_6e5d_c2r_decref(dst);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				auto _6e5d_c2r_Object (*ret) = NULL;
				(_vartmp=ret);
				(ret=_6e5d_c2r_incref(writeall2(fd,data)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(ret))){
					{
						(_vartmp=NULL);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(ret);
						_6e5d_c2r_decref(fd);
						_6e5d_c2r_decref(data);
						_6e5d_c2r_decref(dst);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				_6e5d_c2r_check(_6e5d_c1file_close(fd));
				(_vartmp=ret);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(ret);
				_6e5d_c2r_decref(fd);
				_6e5d_c2r_decref(data);
				_6e5d_c2r_decref(dst);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
				_6e5d_c2r_decref(ret);
				_6e5d_c2r_decref(fd);
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				(_vartmp=writeall2(dst,data));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(data);
				_6e5d_c2r_decref(dst);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
	};
	_6e5d_c2r_decref(data);
	_6e5d_c2r_decref(dst);
	return NULL;
}
_6e5d_c2r_Object (*read2(int fd,_6e5d_vec_Vec (*v),size_t len)){
	if((v==NULL)){
		return NULL;
	};
	auto size_t len0 = (v->len);
	_6e5d_vec_resize(v,(len0+len));
	auto ssize_t readlen = read(fd,((v->p)+len0),len);
	if((0>readlen)){
		return NULL;
	}else if(true){
		_6e5d_vec_resize(v,(len0+((size_t )readlen)));
	};
	return _6e5d_c2prim_fromU64(((uint64_t )readlen));
}
_6e5d_c2r_Object (*_6e5d_c1file_readSized(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*buf))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(fd);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(buf);
	{
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(l,_6e5d_c2prim_length(buf)))){
			{
				auto _6e5d_c2r_Object (*more) = NULL;
				(_vartmp=more);
				(more=_6e5d_c2r_incref(_6e5d_c2prim_sub(l,_6e5d_c2prim_length(buf))));
				_6e5d_c2r_decref(_vartmp);
				auto _6e5d_c2r_Object (*readlen) = NULL;
				(_vartmp=readlen);
				(readlen=_6e5d_c2r_incref(_6e5d_c1file_read(fd,buf,more)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(readlen))){
					{
						(_vartmp=NULL);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(readlen);
						_6e5d_c2r_decref(more);
						_6e5d_c2r_decref(buf);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(fd);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(readlen,_6e5d_c2prim_fromU64(0)))){
					{
						(_vartmp=NULL);
						_6e5d_c2r_decref(readlen);
						_6e5d_c2r_decref(more);
						_6e5d_c2r_decref(buf);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(fd);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				_6e5d_c2r_decref(readlen);
				_6e5d_c2r_decref(more);
			};
		};
	};
	_6e5d_c2r_decref(buf);
	_6e5d_c2r_decref(l);
	_6e5d_c2r_decref(fd);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1file_read(_6e5d_c2r_Object (*fd),_6e5d_c2r_Object (*buffer),_6e5d_c2r_Object (*len))){
	auto uint64_t vfd = _6e5d_c2prim_toU64(fd);
	_6e5d_c2r_check(fd);
	auto size_t slen = ((size_t )_6e5d_c2prim_toU64(len));
	_6e5d_c2r_check(len);
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asStr(buffer);
	auto _6e5d_c2r_Object (*ret) = read2(((int )vfd),v,slen);
	_6e5d_c2r_check(buffer);
	return ret;
}
_6e5d_c2r_Object (*readall2(_6e5d_c2r_Object (*fd))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(fd);
	{
		auto _6e5d_c2r_Object (*buf) = NULL;
		(_vartmp=buf);
		(buf=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("",0)));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				auto _6e5d_c2r_Object (*ret) = NULL;
				(_vartmp=ret);
				(ret=_6e5d_c2r_incref(_6e5d_c1file_read(fd,buf,_6e5d_c2prim_fromU64(4096))));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(ret))){
					{
						(_vartmp=NULL);
						_6e5d_c2r_incref(_vartmp);
						_6e5d_c2r_decref(ret);
						_6e5d_c2r_decref(buf);
						_6e5d_c2r_decref(fd);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),ret))){
					{
						_6e5d_c2r_decref(ret);
						break;
					};
				};
				_6e5d_c2r_decref(ret);
			};
		};
		(_vartmp=buf);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(buf);
		_6e5d_c2r_decref(fd);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(buf);
	};
	_6e5d_c2r_decref(fd);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1file_readall(_6e5d_c2r_Object (*file))){
	_6e5d_c2r_incref(file);
	if((4==(file->ty))){
		auto _6e5d_c2r_Object (*fd) = _6e5d_c1file_open(file,_6e5d_c2prim_fromU64(0));
		_6e5d_c2r_decref(file);
		if((NULL==fd)){
			return NULL;
		};
		(file=fd);
		_6e5d_c2r_incref(file);
	};
	auto _6e5d_c2r_Object (*ret) = readall2(file);
	_6e5d_c1file_close(file);
	_6e5d_c2r_decref(file);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c1file_readlines(_6e5d_c2r_Object (*file))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(file);
	{
		auto _6e5d_c2r_Object (*text) = NULL;
		(_vartmp=text);
		(text=_6e5d_c2r_incref(_6e5d_c1file_readall(file)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(text))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(text);
				_6e5d_c2r_decref(file);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_length(text),_6e5d_c2prim_fromU64(0)))){
			{
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				(_vartmp=_var0);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(text);
				_6e5d_c2r_decref(file);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*lines) = NULL;
		(_vartmp=lines);
		(lines=_6e5d_c2r_incref(_6e5d_c1str_split(text,_6e5d_c2prim_fromU64('\x0a'))));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*l) = NULL;
		(_vartmp=l);
		(l=_6e5d_c2r_incref(_6e5d_c2prim_length(lines)));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*last) = NULL;
		(_vartmp=last);
		(last=_6e5d_c2r_incref(_6e5d_c2prim_getItem(lines,_6e5d_c2prim_sub(l,_6e5d_c2prim_fromU64(1)))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(last)))){
			{
				(_vartmp=NULL);
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(last);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_decref(lines);
				_6e5d_c2r_decref(text);
				_6e5d_c2r_decref(file);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		_6e5d_c2r_check(_6e5d_c2prim_resize(lines,_6e5d_c2prim_sub(l,_6e5d_c2prim_fromU64(1))));
		(_vartmp=lines);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(last);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(lines);
		_6e5d_c2r_decref(text);
		_6e5d_c2r_decref(file);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(last);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(lines);
		_6e5d_c2r_decref(text);
	};
	_6e5d_c2r_decref(file);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1file_close(_6e5d_c2r_Object (*fd))){
	auto uint64_t i = _6e5d_c2prim_toU64(fd);
	_6e5d_c2r_check(fd);
	close(((int )i));
	return NULL;
}
static thread_local char pathbuf[PATH_MAX];
_6e5d_c2r_Object (*_6e5d_c1file_open(_6e5d_c2r_Object (*path),_6e5d_c2r_Object (*mode))){
	auto uint64_t m = _6e5d_c2prim_toU64(mode);
	_6e5d_c2r_check(mode);
	auto int64_t cstrlen = _6e5d_c2prim_cstr(path,pathbuf,PATH_MAX);
	_6e5d_c2r_check(path);
	if((cstrlen<0)){
		return NULL;
	};
	auto int fd = open(pathbuf,((int )m),0644);
	if((fd<0)){
		return NULL;
	};
	return _6e5d_c2prim_fromU64(((uint64_t )fd));
}
_6e5d_c2r_Object (*_6e5d_c1file_size(_6e5d_c2r_Object (*fd))){
	auto uint64_t vfd = _6e5d_c2prim_toU64(fd);
	_6e5d_c2r_check(fd);
	auto struct stat sb;
	auto int ret = fstat(((int )vfd),(&sb));
	if((0>ret)){
		return NULL;
	};
	if((!S_ISREG((sb.st_mode)))){
		return NULL;
	};
	return _6e5d_c2prim_fromU64(((uint64_t )(sb.st_size)));
}
_6e5d_c2r_Object (*_6e5d_c1file_dup(_6e5d_c2r_Object (*src))){
	auto uint64_t sfd = _6e5d_c2prim_toU64(src);
	auto int dfd = dup(((int )sfd));
	_6e5d_c2r_check(src);
	if((dfd<0)){
		return NULL;
	};
	return _6e5d_c2prim_fromU64(((uint64_t )dfd));
}
_6e5d_c2r_Object (*_6e5d_c1file_dup2(_6e5d_c2r_Object (*src),_6e5d_c2r_Object (*dst))){
	auto uint64_t sfd = _6e5d_c2prim_toU64(src);
	auto uint64_t dfd = _6e5d_c2prim_toU64(dst);
	_6e5d_c2r_check(src);
	_6e5d_c2r_check(dst);
	dup2(((int )sfd),((int )dfd));
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1file_seek(_6e5d_c2r_Object (*ofd),_6e5d_c2r_Object (*oo))){
	auto uint64_t fd = _6e5d_c2prim_toU64(ofd);
	auto uint64_t offset = _6e5d_c2prim_toU64(oo);
	_6e5d_c2r_check(ofd);
	_6e5d_c2r_check(oo);
	auto off_t ret = lseek(((int )fd),((off_t )offset),SEEK_SET);
	if((ret==-1)){
		return NULL;
	};
	return _6e5d_c2prim_fromU64(((uint64_t )ret));
}
_6e5d_c2r_Object (*_6e5d_c1file_errno()){
	return _6e5d_c2prim_fromU64(((uint64_t )errno));
}
_6e5d_c2r_Object (*_6e5d_c1file_flock(_6e5d_c2r_Object (*ofd),_6e5d_c2r_Object (*olock))){
	auto int fd = ((int )_6e5d_c2prim_toU64(ofd));
	auto uint64_t lock = _6e5d_c2prim_toU64(olock);
	_6e5d_c2r_check(ofd);
	_6e5d_c2r_check(olock);
	if(lock){
		assert((0==flock(fd,LOCK_EX)));
	}else if(true){
		assert((0==flock(fd,LOCK_UN)));
	};
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c1file_truncate(_6e5d_c2r_Object (*ofd),_6e5d_c2r_Object (*olen))){
	auto int fd = ((int )_6e5d_c2prim_toU64(ofd));
	auto uint64_t len = _6e5d_c2prim_toU64(olen);
	_6e5d_c2r_check(ofd);
	_6e5d_c2r_check(olen);
	ftruncate(fd,((off_t )len));
	return NULL;
}
