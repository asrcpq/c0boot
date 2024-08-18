#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
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
_6e5d_c2r_Object (*_6e5d_c1date_now());
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x)));
_6e5d_c2r_Object (*_6e5d_c1str_pop(_6e5d_c2r_Object (*l)));
_6e5d_c2r_Object (*_6e5d_c1str_contains(_6e5d_c2r_Object (*li),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*_6e5d_c1str_rstrip(_6e5d_c2r_Object (*by),_6e5d_c2r_Object (*chars)));
_6e5d_c2r_Object (*_6e5d_c1str_join(_6e5d_c2r_Object (*lists)));
_6e5d_c2r_Object (*_6e5d_c1str_splitws(_6e5d_c2r_Object (*s)));
_6e5d_c2r_Object (*_6e5d_c1ltr_parse(_6e5d_c2r_Object (*s)));
_6e5d_c2r_Object (*_6e5d_c1file_readall(_6e5d_c2r_Object (*file)));
_6e5d_c2r_Object (*_6e5d_c1file_readlines(_6e5d_c2r_Object (*file)));
_6e5d_c2r_Object (*_6e5d_c1file_writeall(_6e5d_c2r_Object (*dst),_6e5d_c2r_Object (*data)));
_6e5d_c2r_Object (*_6e5d_c1path_rel(_6e5d_c2r_Object (*abs),_6e5d_c2r_Object (*r)));
_6e5d_c2r_Object (*_6e5d_c1path_parent(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_isreg(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_mtime(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_ls(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_mkdir1(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_c1path_chdir(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1fork_run(_6e5d_c2r_Object (*cmd),_6e5d_c2r_Object (*data)));
_6e5d_c2r_Object (*rel2abs(_6e5d_c2r_Object (*dir),_6e5d_c2r_Object (*l)));
_6e5d_c2r_Object (*recparse(_6e5d_c2r_Object (*queue),_6e5d_c2r_Object (*deps)));
_6e5d_c2r_Object (*dirparse(_6e5d_c2r_Object (*queue),_6e5d_c2r_Object (*deps)));
_6e5d_c2r_Object (*mkcheck(_6e5d_c2r_Object (*heads),_6e5d_c2r_Object (*bodys)));
_6e5d_c2r_Object (*dircheck(_6e5d_c2r_Object (*head),_6e5d_c2r_Object (*bodys)));
_6e5d_c2r_Object (*update(_6e5d_c2r_Object (*deps),_6e5d_c2r_Object (*needbuild),_6e5d_c2r_Object (*callback)));
_6e5d_c2r_Object (*_6e5d_rmake_runmake(_6e5d_c2r_Object (*paths)));
_6e5d_c2r_Object (*dircb(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_rmake_dirmake(_6e5d_c2r_Object (*paths)));
_6e5d_c2r_Object (*rel2abs(_6e5d_c2r_Object (*dir),_6e5d_c2r_Object (*l))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(dir);
	_6e5d_c2r_incref(l);
	{
		{
			auto _6e5d_c2r_Object (*idy) = NULL;
			(_vartmp=idy);
			(idy=_6e5d_c2r_incref(NULL));
			_6e5d_c2r_decref(_vartmp);
			while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
				{
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idy))){
						{
							(_vartmp=idy);
							(idy=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
							_6e5d_c2r_decref(_vartmp);
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							(_vartmp=idy);
							(idy=_6e5d_c2r_incref(_6e5d_c2prim_add(idy,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idy,_6e5d_c2prim_length(l)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ll) = NULL;
					(_vartmp=ll);
					(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idy)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_getItem(ll,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_fromU64('\x2f')))){
						{
							_6e5d_c2r_decref(ll);
							continue;
						};
					};
					_6e5d_c2prim_setItem(l,idy,_6e5d_c1path_rel(dir,ll));
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idy);
		};
	};
	_6e5d_c2r_decref(l);
	_6e5d_c2r_decref(dir);
	return NULL;
}
_6e5d_c2r_Object (*recparse(_6e5d_c2r_Object (*queue),_6e5d_c2r_Object (*deps))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(queue);
	_6e5d_c2r_incref(deps);
	{
		auto _6e5d_c2r_Object (*visited) = NULL;
		(_vartmp=visited);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(visited=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(queue)))){
			{
				auto _6e5d_c2r_Object (*path) = NULL;
				(_vartmp=path);
				(path=_6e5d_c2r_incref(_6e5d_c1str_pop(queue)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c1str_contains(visited,path))){
					{
						_6e5d_c2r_decref(path);
						continue;
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(visited,path));
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("parsing",7));
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,path);
				dprintf(2,"""\x0a""");
				auto _6e5d_c2r_Object (*pdir) = NULL;
				(_vartmp=pdir);
				(pdir=_6e5d_c2r_incref(_6e5d_c1path_parent(path)));
				_6e5d_c2r_decref(_vartmp);
				auto _6e5d_c2r_Object (*data) = NULL;
				(_vartmp=data);
				(data=_6e5d_c2r_incref(_6e5d_c1file_readall(path)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(data))){
					{
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				auto _6e5d_c2r_Object (*content) = NULL;
				(_vartmp=content);
				(content=_6e5d_c2r_incref(_6e5d_c1ltr_parse(data)));
				_6e5d_c2r_decref(_vartmp);
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(content)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*l) = NULL;
							(_vartmp=l);
							(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(content,idx)));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromBuf("include",7),_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))))){
								{
									_6e5d_c2r_check(_6e5d_c1str_push(queue,_6e5d_c1path_rel(pdir,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)))));
									_6e5d_c2r_decref(l);
									continue;
								};
							};
							_6e5d_c2r_check(rel2abs(pdir,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
							_6e5d_c2r_check(rel2abs(pdir,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
							auto _6e5d_c2r_Object (*cmd) = NULL;
							(_vartmp=cmd);
							(cmd=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2))));
							_6e5d_c2r_decref(_vartmp);
							_6e5d_c2r_check(_6e5d_c2prim_resize(l,_6e5d_c2prim_fromU64(2)));
							_6e5d_c2r_check(_6e5d_c1str_push(l,pdir));
							_6e5d_c2r_check(_6e5d_c1str_push(l,cmd));
							_6e5d_c2r_check(_6e5d_c1str_push(deps,l));
							_6e5d_c2r_decref(cmd);
							_6e5d_c2r_decref(l);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				_6e5d_c2r_decref(content);
				_6e5d_c2r_decref(data);
				_6e5d_c2r_decref(pdir);
				_6e5d_c2r_decref(path);
			};
		};
		_6e5d_c2r_decref(visited);
	};
	_6e5d_c2r_decref(deps);
	_6e5d_c2r_decref(queue);
	return NULL;
}
_6e5d_c2r_Object (*dirparse(_6e5d_c2r_Object (*queue),_6e5d_c2r_Object (*deps))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(queue);
	_6e5d_c2r_incref(deps);
	{
		auto _6e5d_c2r_Object (*visited) = NULL;
		(_vartmp=visited);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(visited=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(queue)))){
			{
				auto _6e5d_c2r_Object (*path) = NULL;
				(_vartmp=path);
				(path=_6e5d_c2r_incref(_6e5d_c1str_pop(queue)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c1str_contains(visited,path))){
					{
						_6e5d_c2r_decref(path);
						continue;
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(visited,path));
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("parsing",7));
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,path);
				dprintf(2,"""\x0a""");
				auto _6e5d_c2r_Object (*pdir) = NULL;
				(_vartmp=pdir);
				(pdir=_6e5d_c2r_incref(_6e5d_c1path_parent(path)));
				_6e5d_c2r_decref(_vartmp);
				auto _6e5d_c2r_Object (*deppath) = NULL;
				(_vartmp=deppath);
				auto _6e5d_c2r_Object (*_var1) = NULL;
				(_var1=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var1,_6e5d_c2prim_fromU64(2));
				_6e5d_c2prim_listSet(_var1,0,path);
				_6e5d_c2prim_listSet(_var1,1,_6e5d_c2prim_fromBuf("/.lpat/deps.txt",15));
				(deppath=_6e5d_c2r_incref(_6e5d_c1str_join(_var1)));
				_6e5d_c2r_decref(_vartmp);
				auto _6e5d_c2r_Object (*data) = NULL;
				(_vartmp=data);
				(data=_6e5d_c2r_incref(_6e5d_c1file_readlines(deppath)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(data))){
					{
						(_vartmp=data);
						auto _6e5d_c2r_Object (*_var2) = NULL;
						(_var2=_6e5d_c2prim_listInit());
						(data=_6e5d_c2r_incref(_var2));
						_6e5d_c2r_decref(_vartmp);
					};
				};
				_6e5d_c2r_check(rel2abs(pdir,data));
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(data)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*l) = NULL;
							(_vartmp=l);
							(l=_6e5d_c2r_incref(_6e5d_c2prim_getItem(data,idx)));
							_6e5d_c2r_decref(_vartmp);
							_6e5d_c2r_check(_6e5d_c1str_push(queue,l));
							_6e5d_c2r_decref(l);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				auto _6e5d_c2r_Object (*buildtxt) = NULL;
				(_vartmp=buildtxt);
				auto _6e5d_c2r_Object (*_var2) = NULL;
				(_var2=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var2,_6e5d_c2prim_fromU64(2));
				_6e5d_c2prim_listSet(_var2,0,path);
				_6e5d_c2prim_listSet(_var2,1,_6e5d_c2prim_fromBuf("/build.txt",10));
				(buildtxt=_6e5d_c2r_incref(_6e5d_c1str_join(_var2)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1path_isreg(buildtxt)))){
					{
						_6e5d_c2r_decref(buildtxt);
						_6e5d_c2r_decref(data);
						_6e5d_c2r_decref(deppath);
						_6e5d_c2r_decref(pdir);
						_6e5d_c2r_decref(path);
						continue;
					};
				};
				auto _6e5d_c2r_Object (*cmd) = NULL;
				(_vartmp=cmd);
				(cmd=_6e5d_c2r_incref(_6e5d_c1file_readall(buildtxt)));
				_6e5d_c2r_decref(_vartmp);
				_6e5d_c2r_check(_6e5d_c1str_rstrip(cmd,_6e5d_c2prim_fromBuf("""\x0a""",1)));
				(_vartmp=cmd);
				(cmd=_6e5d_c2r_incref(_6e5d_c1str_splitws(cmd)));
				_6e5d_c2r_decref(_vartmp);
				auto _6e5d_c2r_Object (*_var3) = NULL;
				(_var3=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var3,_6e5d_c2prim_fromU64(4));
				auto _6e5d_c2r_Object (*_var4) = NULL;
				(_var4=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var4,_6e5d_c2prim_fromU64(1));
				_6e5d_c2prim_listSet(_var4,0,path);
				_6e5d_c2prim_listSet(_var3,0,_var4);
				_6e5d_c2prim_listSet(_var3,1,data);
				_6e5d_c2prim_listSet(_var3,2,path);
				_6e5d_c2prim_listSet(_var3,3,cmd);
				_6e5d_c2r_check(_6e5d_c1str_push(deps,_var3));
				_6e5d_c2r_decref(cmd);
				_6e5d_c2r_decref(buildtxt);
				_6e5d_c2r_decref(data);
				_6e5d_c2r_decref(deppath);
				_6e5d_c2r_decref(pdir);
				_6e5d_c2r_decref(path);
			};
		};
		_6e5d_c2r_decref(visited);
	};
	_6e5d_c2r_decref(deps);
	_6e5d_c2r_decref(queue);
	return NULL;
}
_6e5d_c2r_Object (*mkcheck(_6e5d_c2r_Object (*heads),_6e5d_c2r_Object (*bodys))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(heads);
	_6e5d_c2r_incref(bodys);
	{
		auto _6e5d_c2r_Object (*latestbody) = NULL;
		(_vartmp=latestbody);
		(latestbody=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_decref(_vartmp);
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(bodys)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*body) = NULL;
					(_vartmp=body);
					(body=_6e5d_c2r_incref(_6e5d_c2prim_getItem(bodys,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*t) = NULL;
					(_vartmp=t);
					(t=_6e5d_c2r_incref(_6e5d_c1path_mtime(body)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(t))){
						{
							_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("cannot build",12));
							dprintf(2," ");
							_6e5d_c2prim_printobj(2,body);
							dprintf(2,"""\x0a""");
							abort();
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(latestbody,t))){
						{
							(_vartmp=latestbody);
							(latestbody=_6e5d_c2r_incref(t));
							_6e5d_c2r_decref(_vartmp);
						};
					};
					_6e5d_c2r_decref(t);
					_6e5d_c2r_decref(body);
				};
			};
			_6e5d_c2r_decref(idx);
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(heads)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*head) = NULL;
					(_vartmp=head);
					(head=_6e5d_c2r_incref(_6e5d_c2prim_getItem(heads,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*t) = NULL;
					(_vartmp=t);
					(t=_6e5d_c2r_incref(_6e5d_c1path_mtime(head)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(t))){
						{
							(_vartmp=_6e5d_c2prim_fromU64(1));
							_6e5d_c2r_incref(_vartmp);
							_6e5d_c2r_decref(t);
							_6e5d_c2r_decref(head);
							_6e5d_c2r_decref(idx);
							_6e5d_c2r_decref(latestbody);
							_6e5d_c2r_decref(bodys);
							_6e5d_c2r_decref(heads);
							_6e5d_c2r_deconly(_vartmp);
							return _vartmp;
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(latestbody,t))){
						{
							(_vartmp=_6e5d_c2prim_fromU64(1));
							_6e5d_c2r_incref(_vartmp);
							_6e5d_c2r_decref(t);
							_6e5d_c2r_decref(head);
							_6e5d_c2r_decref(idx);
							_6e5d_c2r_decref(latestbody);
							_6e5d_c2r_decref(bodys);
							_6e5d_c2r_decref(heads);
							_6e5d_c2r_deconly(_vartmp);
							return _vartmp;
						};
					};
					_6e5d_c2r_decref(t);
					_6e5d_c2r_decref(head);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=_6e5d_c2prim_fromU64(0));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(latestbody);
		_6e5d_c2r_decref(bodys);
		_6e5d_c2r_decref(heads);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(latestbody);
	};
	_6e5d_c2r_decref(bodys);
	_6e5d_c2r_decref(heads);
	return NULL;
}
_6e5d_c2r_Object (*dircheck(_6e5d_c2r_Object (*head),_6e5d_c2r_Object (*bodys))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(head);
	_6e5d_c2r_incref(bodys);
	{
		(_vartmp=head);
		(head=_6e5d_c2r_incref(_6e5d_c2prim_getItem(head,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*builddir) = NULL;
		(_vartmp=builddir);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(2));
		_6e5d_c2prim_listSet(_var0,0,head);
		_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf("/build",6));
		(builddir=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1path_mkdir1(builddir)))){
			{
				abort();
			};
		};
		auto _6e5d_c2r_Object (*epochfile) = NULL;
		(_vartmp=epochfile);
		auto _6e5d_c2r_Object (*_var1) = NULL;
		(_var1=_6e5d_c2prim_listInit());
		_6e5d_c2prim_resize(_var1,_6e5d_c2prim_fromU64(2));
		_6e5d_c2prim_listSet(_var1,0,head);
		_6e5d_c2prim_listSet(_var1,1,_6e5d_c2prim_fromBuf("/build/epoch",12));
		(epochfile=_6e5d_c2r_incref(_6e5d_c1str_join(_var1)));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1path_isreg(epochfile)))){
			{
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("build(missing epoch)",20));
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,head);
				dprintf(2,"""\x0a""");
				(_vartmp=_6e5d_c2prim_fromU64(1));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(epochfile);
				_6e5d_c2r_decref(builddir);
				_6e5d_c2r_decref(bodys);
				_6e5d_c2r_decref(head);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		auto _6e5d_c2r_Object (*t) = NULL;
		(_vartmp=t);
		(t=_6e5d_c2r_incref(_6e5d_c2prim_asU64(_6e5d_c1file_readall(epochfile))));
		_6e5d_c2r_decref(_vartmp);
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(bodys)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*body) = NULL;
					(_vartmp=body);
					(body=_6e5d_c2r_incref(_6e5d_c2prim_getItem(bodys,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*epoch2) = NULL;
					(_vartmp=epoch2);
					auto _6e5d_c2r_Object (*_var2) = NULL;
					(_var2=_6e5d_c2prim_listInit());
					_6e5d_c2prim_resize(_var2,_6e5d_c2prim_fromU64(2));
					_6e5d_c2prim_listSet(_var2,0,body);
					_6e5d_c2prim_listSet(_var2,1,_6e5d_c2prim_fromBuf("/build/epoch",12));
					(epoch2=_6e5d_c2r_incref(_6e5d_c1str_join(_var2)));
					_6e5d_c2r_decref(_vartmp);
					(_vartmp=epoch2);
					(epoch2=_6e5d_c2r_incref(_6e5d_c1file_readall(epoch2)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(epoch2))){
						{
							_6e5d_c2r_decref(epoch2);
							_6e5d_c2r_decref(body);
							continue;
						};
					};
					auto _6e5d_c2r_Object (*t2) = NULL;
					(_vartmp=t2);
					(t2=_6e5d_c2r_incref(_6e5d_c2prim_asU64(epoch2)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(t2,t))){
						{
							_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("build(dep new)",14));
							dprintf(2," ");
							_6e5d_c2prim_printobj(2,head);
							dprintf(2," ");
							_6e5d_c2prim_printobj(2,body);
							dprintf(2,"""\x0a""");
							(_vartmp=_6e5d_c2prim_fromU64(1));
							_6e5d_c2r_incref(_vartmp);
							_6e5d_c2r_decref(t2);
							_6e5d_c2r_decref(epoch2);
							_6e5d_c2r_decref(body);
							_6e5d_c2r_decref(idx);
							_6e5d_c2r_decref(t);
							_6e5d_c2r_decref(epochfile);
							_6e5d_c2r_decref(builddir);
							_6e5d_c2r_decref(bodys);
							_6e5d_c2r_decref(head);
							_6e5d_c2r_deconly(_vartmp);
							return _vartmp;
						};
					};
					_6e5d_c2r_decref(t2);
					_6e5d_c2r_decref(epoch2);
					_6e5d_c2r_decref(body);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		auto _6e5d_c2r_Object (*srcs) = NULL;
		(_vartmp=srcs);
		(srcs=_6e5d_c2r_incref(_6e5d_c1path_ls(head)));
		_6e5d_c2r_decref(_vartmp);
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(srcs)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*src) = NULL;
					(_vartmp=src);
					(src=_6e5d_c2r_incref(_6e5d_c2prim_getItem(srcs,idx)));
					_6e5d_c2r_decref(_vartmp);
					(_vartmp=src);
					(src=_6e5d_c2r_incref(_6e5d_c1path_rel(head,src)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c1path_isreg(src)))){
						{
							_6e5d_c2r_decref(src);
							continue;
						};
					};
					auto _6e5d_c2r_Object (*t2) = NULL;
					(_vartmp=t2);
					(t2=_6e5d_c2r_incref(_6e5d_c2prim_mul(_6e5d_c2prim_fromU64(1000000),_6e5d_c1path_mtime(src))));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(t2,t))){
						{
							_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("build(src new)",14));
							dprintf(2," ");
							_6e5d_c2prim_printobj(2,head);
							dprintf(2," ");
							_6e5d_c2prim_printobj(2,src);
							dprintf(2,"""\x0a""");
							(_vartmp=_6e5d_c2prim_fromU64(1));
							_6e5d_c2r_incref(_vartmp);
							_6e5d_c2r_decref(t2);
							_6e5d_c2r_decref(src);
							_6e5d_c2r_decref(idx);
							_6e5d_c2r_decref(srcs);
							_6e5d_c2r_decref(t);
							_6e5d_c2r_decref(epochfile);
							_6e5d_c2r_decref(builddir);
							_6e5d_c2r_decref(bodys);
							_6e5d_c2r_decref(head);
							_6e5d_c2r_deconly(_vartmp);
							return _vartmp;
						};
					};
					_6e5d_c2r_decref(t2);
					_6e5d_c2r_decref(src);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=_6e5d_c2prim_fromU64(0));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(srcs);
		_6e5d_c2r_decref(t);
		_6e5d_c2r_decref(epochfile);
		_6e5d_c2r_decref(builddir);
		_6e5d_c2r_decref(bodys);
		_6e5d_c2r_decref(head);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(srcs);
		_6e5d_c2r_decref(t);
		_6e5d_c2r_decref(epochfile);
		_6e5d_c2r_decref(builddir);
	};
	_6e5d_c2r_decref(bodys);
	_6e5d_c2r_decref(head);
	return NULL;
}
_6e5d_c2r_Object (*update(_6e5d_c2r_Object (*deps),_6e5d_c2r_Object (*needbuild),_6e5d_c2r_Object (*callback))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(deps);
	_6e5d_c2r_incref(needbuild);
	_6e5d_c2r_incref(callback);
	{
		auto _6e5d_c2r_Object (*allobj) = NULL;
		(_vartmp=allobj);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_mapInit());
		(allobj=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*headobj) = NULL;
		(_vartmp=headobj);
		auto _6e5d_c2r_Object (*_var1) = NULL;
		(_var1=_6e5d_c2prim_mapInit());
		(headobj=_6e5d_c2r_incref(_var1));
		_6e5d_c2r_decref(_vartmp);
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(deps)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*dep) = NULL;
					(_vartmp=dep);
					(dep=_6e5d_c2r_incref(_6e5d_c2prim_getItem(deps,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*heads) = NULL;
					(_vartmp=heads);
					(heads=_6e5d_c2r_incref(_6e5d_c2prim_getItem(dep,_6e5d_c2prim_fromU64(0))));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*bodys) = NULL;
					(_vartmp=bodys);
					(bodys=_6e5d_c2r_incref(_6e5d_c2prim_getItem(dep,_6e5d_c2prim_fromU64(1))));
					_6e5d_c2r_decref(_vartmp);
					{
						auto _6e5d_c2r_Object (*idy) = NULL;
						(_vartmp=idy);
						(idy=_6e5d_c2r_incref(NULL));
						_6e5d_c2r_decref(_vartmp);
						while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
							{
								if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idy))){
									{
										(_vartmp=idy);
										(idy=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
										_6e5d_c2r_decref(_vartmp);
									};
								}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
									{
										(_vartmp=idy);
										(idy=_6e5d_c2r_incref(_6e5d_c2prim_add(idy,_6e5d_c2prim_fromU64(1))));
										_6e5d_c2r_decref(_vartmp);
									};
								};
								if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idy,_6e5d_c2prim_length(heads)))){
									{
										break;
									};
								};
								auto _6e5d_c2r_Object (*head) = NULL;
								(_vartmp=head);
								(head=_6e5d_c2r_incref(_6e5d_c2prim_getItem(heads,idy)));
								_6e5d_c2r_decref(_vartmp);
								_6e5d_c2prim_setItem(allobj,head,_6e5d_c2prim_fromU64(1));
								_6e5d_c2prim_setItem(headobj,head,_6e5d_c2prim_fromU64(1));
								_6e5d_c2r_decref(head);
							};
						};
						_6e5d_c2r_decref(idy);
					};
					{
						auto _6e5d_c2r_Object (*idy) = NULL;
						(_vartmp=idy);
						(idy=_6e5d_c2r_incref(NULL));
						_6e5d_c2r_decref(_vartmp);
						while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
							{
								if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idy))){
									{
										(_vartmp=idy);
										(idy=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
										_6e5d_c2r_decref(_vartmp);
									};
								}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
									{
										(_vartmp=idy);
										(idy=_6e5d_c2r_incref(_6e5d_c2prim_add(idy,_6e5d_c2prim_fromU64(1))));
										_6e5d_c2r_decref(_vartmp);
									};
								};
								if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idy,_6e5d_c2prim_length(bodys)))){
									{
										break;
									};
								};
								auto _6e5d_c2r_Object (*body) = NULL;
								(_vartmp=body);
								(body=_6e5d_c2r_incref(_6e5d_c2prim_getItem(bodys,idy)));
								_6e5d_c2r_decref(_vartmp);
								_6e5d_c2prim_setItem(allobj,body,_6e5d_c2prim_fromU64(1));
								_6e5d_c2r_decref(body);
							};
						};
						_6e5d_c2r_decref(idy);
					};
					_6e5d_c2r_decref(bodys);
					_6e5d_c2r_decref(heads);
					_6e5d_c2r_decref(dep);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		auto _6e5d_c2r_Object (*pending) = NULL;
		(_vartmp=pending);
		auto _6e5d_c2r_Object (*_var2) = NULL;
		(_var2=_6e5d_c2prim_listInit());
		(pending=_6e5d_c2r_incref(_var2));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*newdeps) = NULL;
		(_vartmp=newdeps);
		auto _6e5d_c2r_Object (*_var3) = NULL;
		(_var3=_6e5d_c2prim_listInit());
		(newdeps=_6e5d_c2r_incref(_var3));
		_6e5d_c2r_decref(_vartmp);
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(deps)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*dep) = NULL;
					(_vartmp=dep);
					(dep=_6e5d_c2r_incref(_6e5d_c2prim_getItem(deps,idx)));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*heads) = NULL;
					(_vartmp=heads);
					(heads=_6e5d_c2r_incref(_6e5d_c2prim_getItem(dep,_6e5d_c2prim_fromU64(0))));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*bodys) = NULL;
					(_vartmp=bodys);
					(bodys=_6e5d_c2r_incref(_6e5d_c2prim_getItem(dep,_6e5d_c2prim_fromU64(1))));
					_6e5d_c2r_decref(_vartmp);
					auto _6e5d_c2r_Object (*fail) = NULL;
					(_vartmp=fail);
					(fail=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
					_6e5d_c2r_decref(_vartmp);
					{
						auto _6e5d_c2r_Object (*idy) = NULL;
						(_vartmp=idy);
						(idy=_6e5d_c2r_incref(NULL));
						_6e5d_c2r_decref(_vartmp);
						while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
							{
								if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(idy))){
									{
										(_vartmp=idy);
										(idy=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
										_6e5d_c2r_decref(_vartmp);
									};
								}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
									{
										(_vartmp=idy);
										(idy=_6e5d_c2r_incref(_6e5d_c2prim_add(idy,_6e5d_c2prim_fromU64(1))));
										_6e5d_c2r_decref(_vartmp);
									};
								};
								if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idy,_6e5d_c2prim_length(bodys)))){
									{
										break;
									};
								};
								auto _6e5d_c2r_Object (*body) = NULL;
								(_vartmp=body);
								(body=_6e5d_c2r_incref(_6e5d_c2prim_getItem(bodys,idy)));
								_6e5d_c2r_decref(_vartmp);
								if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isNil(_6e5d_c2prim_getItem(headobj,body))))){
									{
										(_vartmp=fail);
										(fail=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(1)));
										_6e5d_c2r_decref(_vartmp);
										_6e5d_c2r_decref(body);
										break;
									};
								};
								_6e5d_c2r_decref(body);
							};
						};
						_6e5d_c2r_decref(idy);
					};
					if(_6e5d_c2prim_toBool(fail)){
						{
							_6e5d_c2r_check(_6e5d_c1str_push(newdeps,dep));
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							_6e5d_c2r_check(_6e5d_c1str_push(pending,dep));
						};
					};
					_6e5d_c2r_decref(fail);
					_6e5d_c2r_decref(bodys);
					_6e5d_c2r_decref(heads);
					_6e5d_c2r_decref(dep);
				};
			};
			_6e5d_c2r_decref(idx);
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(pending)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*pend) = NULL;
					(_vartmp=pend);
					(pend=_6e5d_c2r_incref(_6e5d_c2prim_getItem(pending,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(((_6e5d_c2r_Object (*(*)(_6e5d_c2r_Object (*),_6e5d_c2r_Object (*))))((needbuild->value).pfn))(_6e5d_c2prim_getItem(pend,_6e5d_c2prim_fromU64(0)),_6e5d_c2prim_getItem(pend,_6e5d_c2prim_fromU64(1)))))){
						{
							_6e5d_c2r_decref(pend);
							continue;
						};
					};
					_6e5d_c2r_check(_6e5d_c1path_chdir(_6e5d_c2prim_getItem(pend,_6e5d_c2prim_fromU64(2))));
					_6e5d_c2prim_printobj(1,_6e5d_c2prim_getItem(pend,_6e5d_c2prim_fromU64(2)));
					dprintf(1," ");
					_6e5d_c2prim_printobj(1,_6e5d_c2prim_getItem(pend,_6e5d_c2prim_fromU64(3)));
					dprintf(1,"""\x0a""");
					auto _6e5d_c2r_Object (*ret) = NULL;
					(_vartmp=ret);
					(ret=_6e5d_c2r_incref(_6e5d_c1fork_run(_6e5d_c2prim_getItem(pend,_6e5d_c2prim_fromU64(3)),_6e5d_c2prim_fromBuf("",0))));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(ret))){
						{
							_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("FAILED",6));
							dprintf(2," ");
							_6e5d_c2prim_printobj(2,pend);
							dprintf(2,"""\x0a""");
							abort();
						};
					};
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isNil(callback)))){
						{
							_6e5d_c2r_check(((_6e5d_c2r_Object (*(*)(_6e5d_c2r_Object (*))))((callback->value).pfn))(_6e5d_c2prim_getItem(pend,_6e5d_c2prim_fromU64(2))));
						};
					};
					_6e5d_c2r_decref(ret);
					_6e5d_c2r_decref(pend);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=newdeps);
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(newdeps);
		_6e5d_c2r_decref(pending);
		_6e5d_c2r_decref(headobj);
		_6e5d_c2r_decref(allobj);
		_6e5d_c2r_decref(callback);
		_6e5d_c2r_decref(needbuild);
		_6e5d_c2r_decref(deps);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(newdeps);
		_6e5d_c2r_decref(pending);
		_6e5d_c2r_decref(headobj);
		_6e5d_c2r_decref(allobj);
	};
	_6e5d_c2r_decref(callback);
	_6e5d_c2r_decref(needbuild);
	_6e5d_c2r_decref(deps);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_rmake_runmake(_6e5d_c2r_Object (*paths))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(paths);
	{
		auto _6e5d_c2r_Object (*deps) = NULL;
		(_vartmp=deps);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(deps=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(recparse(paths,deps));
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(deps)))){
			{
				(_vartmp=deps);
				(deps=_6e5d_c2r_incref(update(deps,_6e5d_c2prim_fromFn(((void (*)(void ))mkcheck)),NULL)));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		_6e5d_c2r_decref(deps);
	};
	_6e5d_c2r_decref(paths);
	return NULL;
}
_6e5d_c2r_Object (*dircb(_6e5d_c2r_Object (*path))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(path);
	{
		auto _6e5d_c2r_Object (*epochfile) = NULL;
		(_vartmp=epochfile);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(2));
		_6e5d_c2prim_listSet(_var0,0,path);
		_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf("/build/epoch",12));
		(epochfile=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c1file_writeall(epochfile,_6e5d_c2prim_asBytes(_6e5d_c1date_now())));
		_6e5d_c2r_decref(epochfile);
	};
	_6e5d_c2r_decref(path);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_rmake_dirmake(_6e5d_c2r_Object (*paths))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(paths);
	{
		auto _6e5d_c2r_Object (*deps) = NULL;
		(_vartmp=deps);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(deps=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(dirparse(paths,deps));
		while(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(deps)))){
			{
				(_vartmp=deps);
				(deps=_6e5d_c2r_incref(update(deps,_6e5d_c2prim_fromFn(((void (*)(void ))dircheck)),_6e5d_c2prim_fromFn(((void (*)(void ))dircb)))));
				_6e5d_c2r_decref(_vartmp);
			};
		};
		_6e5d_c2r_decref(deps);
	};
	_6e5d_c2r_decref(paths);
	return NULL;
}
