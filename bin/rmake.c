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
_6e5d_c2r_Object (*_6e5d_c1path_isreg(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c1path_norm(_6e5d_c2r_Object (*path)));
_6e5d_c2r_Object (*_6e5d_rmake_runmake(_6e5d_c2r_Object (*paths)));
_6e5d_c2r_Object (*_6e5d_rmake_dirmake(_6e5d_c2r_Object (*paths)));
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x)));
int main(int argc,char (*(*argv)));
int main(int argc,char (*(*argv))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	auto _6e5d_c2r_Object (*args) = _6e5d_c2prim_listInit();
	_6e5d_c2r_incref(args);
	_6e5d_c2prim_resizeList(args,((size_t )argc));
	for(auto size_t idx = 0;(idx<argc);(idx+=1)){
		_6e5d_c2prim_listSet(args,idx,_6e5d_c2prim_fromBuf(argv[idx],strlen(argv[idx])));
	};
	{
		auto _6e5d_c2r_Object (*paths) = NULL;
		(_vartmp=paths);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		(paths=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*ismk) = NULL;
		(_vartmp=ismk);
		(ismk=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(args)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*arg) = NULL;
					(_vartmp=arg);
					(arg=_6e5d_c2r_incref(_6e5d_c2prim_getItem(args,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
						{
							_6e5d_c2r_decref(arg);
							continue;
						};
					};
					(_vartmp=ismk);
					(ismk=_6e5d_c2r_incref(_6e5d_c1path_isreg(arg)));
					_6e5d_c2r_decref(_vartmp);
					_6e5d_c2r_check(_6e5d_c1str_push(paths,_6e5d_c1path_norm(arg)));
					_6e5d_c2r_decref(arg);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		if(_6e5d_c2prim_toBool(ismk)){
			{
				_6e5d_c2r_check(_6e5d_rmake_runmake(paths));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				_6e5d_c2r_check(_6e5d_rmake_dirmake(paths));
			};
		};
		_6e5d_c2r_decref(ismk);
		_6e5d_c2r_decref(paths);
	};
	_6e5d_c2r_decref(args);
	return 0;
}
