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
_6e5d_c2r_Object (*_6e5d_c1str_push(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*x)));
_6e5d_c2r_Object (*_6e5d_c1str_append(_6e5d_c2r_Object (*s1),_6e5d_c2r_Object (*s2)));
_6e5d_c2r_Object (*_6e5d_c1str_join(_6e5d_c2r_Object (*lists)));
_6e5d_c2r_Object (*_6e5d_c1str_n2h(_6e5d_c2r_Object (*n)));
_6e5d_c2r_Object (*_6e5d_c1str_slice(_6e5d_c2r_Object (*s),_6e5d_c2r_Object (*i1),_6e5d_c2r_Object (*i2)));
_6e5d_c2r_Object (*_6e5d_c1str_contains(_6e5d_c2r_Object (*li),_6e5d_c2r_Object (*item)));
_6e5d_c2r_Object (*decl(_6e5d_c2r_Object (*ty),_6e5d_c2r_Object (*v)));
_6e5d_c2r_Object (*binop(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*key),_6e5d_c2r_Object (*l)));
_6e5d_c2r_Object (*writestr(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*s)));
_6e5d_c2r_Object (*trybi(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*key),_6e5d_c2r_Object (*l)));
_6e5d_c2r_Object (*expr(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*l)));
_6e5d_c2r_Object (*block(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*i0),_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*indent)));
_6e5d_c2r_Object (*stmt(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*indent)));
_6e5d_c2r_Object (*translateFn(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*deconly),_6e5d_c2r_Object (*out)));
_6e5d_c2r_Object (*translateSu(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*deconly),_6e5d_c2r_Object (*out)));
_6e5d_c2r_Object (*translateV(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*deconly),_6e5d_c2r_Object (*out)));
_6e5d_c2r_Object (*_6e5d_c0c_translate(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*deconly),_6e5d_c2r_Object (*out)));
_6e5d_c2r_Object (*decl(_6e5d_c2r_Object (*ty),_6e5d_c2r_Object (*v))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(ty);
	_6e5d_c2r_incref(v);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(ty))){
			{
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(3));
				_6e5d_c2prim_listSet(_var0,0,ty);
				_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf(" ",1));
				_6e5d_c2prim_listSet(_var0,2,v);
				(_vartmp=_6e5d_c1str_join(_var0));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(v);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_le(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(ty))))){
			{
				abort();
			};
		};
		auto _6e5d_c2r_Object (*kind) = NULL;
		(_vartmp=kind);
		(kind=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(kind,_6e5d_c2prim_fromBuf("Ptr",3)))){
			{
				auto _6e5d_c2r_Object (*v2) = NULL;
				(_vartmp=v2);
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(3));
				_6e5d_c2prim_listSet(_var0,0,_6e5d_c2prim_fromBuf("(*",2));
				_6e5d_c2prim_listSet(_var0,1,v);
				_6e5d_c2prim_listSet(_var0,2,_6e5d_c2prim_fromBuf(")",1));
				(v2=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
				_6e5d_c2r_decref(_vartmp);
				(_vartmp=decl(_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(1)),v2));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(v2);
				_6e5d_c2r_decref(kind);
				_6e5d_c2r_decref(v);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
				_6e5d_c2r_decref(v2);
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(kind,_6e5d_c2prim_fromBuf("Arg",3)))){
			{
				auto _6e5d_c2r_Object (*v2) = NULL;
				(_vartmp=v2);
				(v2=_6e5d_c2r_incref(_6e5d_c2prim_fromBuf("",0)));
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(ty)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*tt) = NULL;
							(_vartmp=tt);
							(tt=_6e5d_c2r_incref(_6e5d_c2prim_getItem(ty,idx)));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,_6e5d_c2prim_fromU64(2)))){
								{
									_6e5d_c2r_decref(tt);
									continue;
								};
							};
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_gt(idx,_6e5d_c2prim_fromU64(2)))){
								{
									_6e5d_c2r_check(_6e5d_c1str_push(v2,_6e5d_c2prim_fromU64('\x2c')));
								};
							};
							_6e5d_c2r_check(_6e5d_c1str_append(v2,decl(tt,_6e5d_c2prim_fromBuf("",0))));
							_6e5d_c2r_decref(tt);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				(_vartmp=v2);
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(4));
				_6e5d_c2prim_listSet(_var0,0,v);
				_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf("(",1));
				_6e5d_c2prim_listSet(_var0,2,v2);
				_6e5d_c2prim_listSet(_var0,3,_6e5d_c2prim_fromBuf(")",1));
				(v2=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
				_6e5d_c2r_decref(_vartmp);
				(_vartmp=decl(_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(1)),v2));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(v2);
				_6e5d_c2r_decref(kind);
				_6e5d_c2r_decref(v);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
				_6e5d_c2r_decref(v2);
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(kind,_6e5d_c2prim_fromBuf("Array",5)))){
			{
				auto _6e5d_c2r_Object (*v2) = NULL;
				(_vartmp=v2);
				(v2=_6e5d_c2r_incref(NULL));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(3),_6e5d_c2prim_length(ty)))){
					{
						if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isBytes(_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(2)))))){
							{
								abort();
							};
						};
						(_vartmp=v2);
						auto _6e5d_c2r_Object (*_var0) = NULL;
						(_var0=_6e5d_c2prim_listInit());
						_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(4));
						_6e5d_c2prim_listSet(_var0,0,v);
						_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf("[",1));
						_6e5d_c2prim_listSet(_var0,2,_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(2)));
						_6e5d_c2prim_listSet(_var0,3,_6e5d_c2prim_fromBuf("]",1));
						(v2=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
						_6e5d_c2r_decref(_vartmp);
					};
				}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
					{
						(_vartmp=v2);
						auto _6e5d_c2r_Object (*_var0) = NULL;
						(_var0=_6e5d_c2prim_listInit());
						_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(3));
						_6e5d_c2prim_listSet(_var0,0,v);
						_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf("[",1));
						_6e5d_c2prim_listSet(_var0,2,_6e5d_c2prim_fromBuf("]",1));
						(v2=_6e5d_c2r_incref(_6e5d_c1str_join(_var0)));
						_6e5d_c2r_decref(_vartmp);
					};
				};
				(_vartmp=decl(_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(1)),v2));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(v2);
				_6e5d_c2r_decref(kind);
				_6e5d_c2r_decref(v);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
				_6e5d_c2r_decref(v2);
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(kind,_6e5d_c2prim_fromBuf("Struct",6)))){
			{
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(4));
				_6e5d_c2prim_listSet(_var0,0,_6e5d_c2prim_fromBuf("struct ",7));
				_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(1)));
				_6e5d_c2prim_listSet(_var0,2,_6e5d_c2prim_fromBuf(" ",1));
				_6e5d_c2prim_listSet(_var0,3,v);
				(_vartmp=_6e5d_c1str_join(_var0));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(kind);
				_6e5d_c2r_decref(v);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(kind,_6e5d_c2prim_fromBuf("Union",5)))){
			{
				auto _6e5d_c2r_Object (*_var0) = NULL;
				(_var0=_6e5d_c2prim_listInit());
				_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(4));
				_6e5d_c2prim_listSet(_var0,0,_6e5d_c2prim_fromBuf("union ",6));
				_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_getItem(ty,_6e5d_c2prim_fromU64(1)));
				_6e5d_c2prim_listSet(_var0,2,_6e5d_c2prim_fromBuf(" ",1));
				_6e5d_c2prim_listSet(_var0,3,v);
				(_vartmp=_6e5d_c1str_join(_var0));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(kind);
				_6e5d_c2r_decref(v);
				_6e5d_c2r_decref(ty);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("bad decl",8));
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,ty);
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		_6e5d_c2r_decref(kind);
	};
	_6e5d_c2r_decref(v);
	_6e5d_c2r_decref(ty);
	return NULL;
}
_6e5d_c2r_Object (*binop(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*key),_6e5d_c2r_Object (*l))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(out);
	_6e5d_c2r_incref(key);
	_6e5d_c2r_incref(l);
	{
		_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x28')));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ll) = NULL;
					(_vartmp=ll);
					(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
						{
							_6e5d_c2r_decref(ll);
							continue;
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(1)))){
						{
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							_6e5d_c2r_check(_6e5d_c1str_append(out,key));
						};
					};
					_6e5d_c2r_check(expr(out,ll));
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
	};
	_6e5d_c2r_decref(l);
	_6e5d_c2r_decref(key);
	_6e5d_c2r_decref(out);
	return NULL;
}
_6e5d_c2r_Object (*writestr(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*s))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(out);
	_6e5d_c2r_incref(s);
	{
		_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x22')));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(s)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ch) = NULL;
					(_vartmp=ch);
					(ch=_6e5d_c2r_incref(_6e5d_c2prim_getItem(s,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_ge(ch,_6e5d_c2prim_fromU64(32)))&&_6e5d_c2prim_toBool(_6e5d_c2prim_lt(ch,_6e5d_c2prim_fromU64(127)))&&_6e5d_c2prim_toBool(_6e5d_c2prim_ne(ch,_6e5d_c2prim_fromU64(34)))&&_6e5d_c2prim_toBool(_6e5d_c2prim_ne(ch,_6e5d_c2prim_fromU64(92))))))){
						{
							_6e5d_c2r_check(_6e5d_c1str_push(out,ch));
							_6e5d_c2r_decref(ch);
							continue;
						};
					};
					_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("""\x22""""\x22""""\x5c""x",4)));
					_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c1str_n2h(_6e5d_c2prim_div(ch,_6e5d_c2prim_fromU64(16)))));
					_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c1str_n2h(_6e5d_c2prim_mod(ch,_6e5d_c2prim_fromU64(16)))));
					_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("""\x22""""\x22""",2)));
					_6e5d_c2r_decref(ch);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x22')));
	};
	_6e5d_c2r_decref(s);
	_6e5d_c2r_decref(out);
	return NULL;
}
_6e5d_c2r_Object (*trybi(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*key),_6e5d_c2r_Object (*l))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(out);
	_6e5d_c2r_incref(key);
	_6e5d_c2r_incref(l);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(key)))){
			{
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("empty kw",8));
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		auto _6e5d_c2r_Object (*key0) = NULL;
		(_vartmp=key0);
		(key0=_6e5d_c2r_incref(_6e5d_c2prim_getItem(key,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("sval",4)))){
			{
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x7b')));
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*ll) = NULL;
							(_vartmp=ll);
							(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
								{
									_6e5d_c2r_decref(ll);
									continue;
								};
							};
							_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x2e')));
							_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_getItem(ll,_6e5d_c2prim_fromU64(0))));
							_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x3d')));
							_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(ll,_6e5d_c2prim_fromU64(1))));
							_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x2c')));
							_6e5d_c2r_decref(ll);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x7d')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("aval",4)))){
			{
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x7b')));
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*ll) = NULL;
							(_vartmp=ll);
							(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
								{
									_6e5d_c2r_decref(ll);
									continue;
								};
							};
							_6e5d_c2r_check(expr(out,ll));
							_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x2c')));
							_6e5d_c2r_decref(ll);
						};
					};
					_6e5d_c2r_decref(idx);
				};
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x7d')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("-n",2)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(l)))){
					{
						_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("bad unary",9));
						dprintf(2," ");
						_6e5d_c2prim_printobj(2,l);
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x28')));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x2d')));
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("+n",2)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(l)))){
					{
						_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("bad unary",9));
						dprintf(2," ");
						_6e5d_c2prim_printobj(2,l);
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x28')));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x2b')));
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("*p",2)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(l)))){
					{
						_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("bad unary",9));
						dprintf(2," ");
						_6e5d_c2prim_printobj(2,l);
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x28')));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x2a')));
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("&p",2)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(l)))){
					{
						_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("bad unary",9));
						dprintf(2," ");
						_6e5d_c2prim_printobj(2,l);
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x28')));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x26')));
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("~",1)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(l)))){
					{
						_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("bad unary",9));
						dprintf(2," ");
						_6e5d_c2prim_printobj(2,l);
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x28')));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x7e')));
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("!",1)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(l)))){
					{
						_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("bad unary",9));
						dprintf(2," ");
						_6e5d_c2prim_printobj(2,l);
						dprintf(2,"""\x0a""");
						abort();
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x28')));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x21')));
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("@",1)))){
			{
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x5b')));
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x5d')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("cast",4)))){
			{
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("((",2)));
				_6e5d_c2r_check(_6e5d_c1str_append(out,decl(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_fromBuf("",0))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_ne(key0,_6e5d_c2prim_fromU64('\x5f')))&&_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_lt(key0,_6e5d_c2prim_fromU64('\x61')))||_6e5d_c2prim_toBool(_6e5d_c2prim_gt(key0,_6e5d_c2prim_fromU64('\x7a'))))))&&_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_lt(key0,_6e5d_c2prim_fromU64('\x41')))||_6e5d_c2prim_toBool(_6e5d_c2prim_gt(key0,_6e5d_c2prim_fromU64('\x5a')))))))))){
			{
				_6e5d_c2r_check(binop(out,key,l));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				(_vartmp=_6e5d_c2prim_fromU64(0));
				_6e5d_c2r_incref(_vartmp);
				_6e5d_c2r_decref(key0);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_decref(key);
				_6e5d_c2r_decref(out);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		(_vartmp=_6e5d_c2prim_fromU64(1));
		_6e5d_c2r_incref(_vartmp);
		_6e5d_c2r_decref(key0);
		_6e5d_c2r_decref(l);
		_6e5d_c2r_decref(key);
		_6e5d_c2r_decref(out);
		_6e5d_c2r_deconly(_vartmp);
		return _vartmp;
		_6e5d_c2r_decref(key0);
	};
	_6e5d_c2r_decref(l);
	_6e5d_c2r_decref(key);
	_6e5d_c2r_decref(out);
	return NULL;
}
_6e5d_c2r_Object (*expr(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*l))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(out);
	_6e5d_c2r_incref(l);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(l))){
			{
				auto _6e5d_c2r_Object (*llen) = NULL;
				(_vartmp=llen);
				(llen=_6e5d_c2r_incref(_6e5d_c2prim_length(l)));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(l))))){
					{
						abort();
					};
				};
				auto _6e5d_c2r_Object (*first) = NULL;
				(_vartmp=first);
				(first=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
				_6e5d_c2r_decref(_vartmp);
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(first,_6e5d_c2prim_fromU64('\x27')))){
					{
						_6e5d_c2r_check(writestr(out,_6e5d_c1str_slice(l,_6e5d_c2prim_fromU64(1),llen)));
					};
				}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(first,_6e5d_c2prim_fromU64('\x60')))){
					{
						if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(_6e5d_c2prim_fromU64(2),llen))){
							{
								_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("bad ord",7));
								dprintf(2," ");
								_6e5d_c2prim_printobj(2,l);
								dprintf(2,"""\x0a""");
								abort();
							};
						};
						auto _6e5d_c2r_Object (*ch) = NULL;
						(_vartmp=ch);
						(ch=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
						_6e5d_c2r_decref(_vartmp);
						_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("'""\x5c""x",3)));
						_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c1str_n2h(_6e5d_c2prim_div(ch,_6e5d_c2prim_fromU64(16)))));
						_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c1str_n2h(_6e5d_c2prim_mod(ch,_6e5d_c2prim_fromU64(16)))));
						_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x27')));
						_6e5d_c2r_decref(ch);
					};
				}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
					{
						_6e5d_c2r_check(_6e5d_c1str_append(out,l));
					};
				};
				(_vartmp=NULL);
				_6e5d_c2r_decref(first);
				_6e5d_c2r_decref(llen);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_decref(out);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
				_6e5d_c2r_decref(first);
				_6e5d_c2r_decref(llen);
			};
		};
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(l)))){
			{
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("zero-len expr",13));
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		auto _6e5d_c2r_Object (*key) = NULL;
		(_vartmp=key);
		(key=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(key))){
			{
				if(_6e5d_c2prim_toBool(trybi(out,key,l))){
					{
						(_vartmp=NULL);
						_6e5d_c2r_decref(key);
						_6e5d_c2r_decref(l);
						_6e5d_c2r_decref(out);
						_6e5d_c2r_deconly(_vartmp);
						return _vartmp;
					};
				};
			};
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ll) = NULL;
					(_vartmp=ll);
					(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
						{
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(1)))){
						{
						};
					}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
						{
							_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x2c')));
						};
					};
					_6e5d_c2r_check(expr(out,ll));
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
						{
							_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x28')));
						};
					};
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
		_6e5d_c2r_decref(key);
	};
	_6e5d_c2r_decref(l);
	_6e5d_c2r_decref(out);
	return NULL;
}
_6e5d_c2r_Object (*block(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*i0),_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*indent))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(i0);
	_6e5d_c2r_incref(out);
	_6e5d_c2r_incref(indent);
	{
		_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("{""\x0a""",2)));
		(_vartmp=indent);
		(indent=_6e5d_c2r_incref(_6e5d_c2prim_add(indent,_6e5d_c2prim_fromU64(1))));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*body) = NULL;
					(_vartmp=body);
					(body=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,i0))){
						{
							_6e5d_c2r_decref(body);
							continue;
						};
					};
					{
						auto _6e5d_c2r_Object (*_) = NULL;
						(_vartmp=_);
						(_=_6e5d_c2r_incref(NULL));
						_6e5d_c2r_decref(_vartmp);
						while(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
							{
								if(_6e5d_c2prim_toBool(_6e5d_c2prim_isNil(_))){
									{
										(_vartmp=_);
										(_=_6e5d_c2r_incref(_6e5d_c2prim_fromU64(0)));
										_6e5d_c2r_decref(_vartmp);
									};
								}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
									{
										(_vartmp=_);
										(_=_6e5d_c2r_incref(_6e5d_c2prim_add(_,_6e5d_c2prim_fromU64(1))));
										_6e5d_c2r_decref(_vartmp);
									};
								};
								if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(_,indent))){
									{
										break;
									};
								};
								_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x09')));
							};
						};
						_6e5d_c2r_decref(_);
					};
					_6e5d_c2r_check(stmt(out,body,indent));
					_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf(";""\x0a""",2)));
					_6e5d_c2r_decref(body);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		(_vartmp=indent);
		(indent=_6e5d_c2r_incref(_6e5d_c2prim_sub(indent,_6e5d_c2prim_fromU64(1))));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,indent))){
						{
							break;
						};
					};
					_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x09')));
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("}",1)));
	};
	_6e5d_c2r_decref(indent);
	_6e5d_c2r_decref(out);
	_6e5d_c2r_decref(i0);
	_6e5d_c2r_decref(l);
	return NULL;
}
_6e5d_c2r_Object (*stmt(_6e5d_c2r_Object (*out),_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*indent))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(out);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(indent);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_isBytes(l))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(l))))))){
			{
				_6e5d_c2prim_printobj(2,_6e5d_c2prim_fromBuf("empty/str stmt",14));
				dprintf(2," ");
				_6e5d_c2prim_printobj(2,l);
				dprintf(2,"""\x0a""");
				abort();
			};
		};
		auto _6e5d_c2r_Object (*key) = NULL;
		(_vartmp=key);
		(key=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*declkw) = NULL;
		(_vartmp=declkw);
		auto _6e5d_c2r_Object (*_var0) = NULL;
		(_var0=_6e5d_c2prim_listInit());
		_6e5d_c2prim_resize(_var0,_6e5d_c2prim_fromU64(3));
		_6e5d_c2prim_listSet(_var0,0,_6e5d_c2prim_fromBuf("auto",4));
		_6e5d_c2prim_listSet(_var0,1,_6e5d_c2prim_fromBuf("thread_local",12));
		_6e5d_c2prim_listSet(_var0,2,_6e5d_c2prim_fromBuf("static",6));
		(declkw=_6e5d_c2r_incref(_var0));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_isList(key))){
			{
				_6e5d_c2r_check(expr(out,l));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c1str_contains(declkw,key))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("thread_local",12)))){
					{
						_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("static ",7)));
						_6e5d_c2r_check(_6e5d_c1str_append(out,key));
					};
				}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
					{
						_6e5d_c2r_check(_6e5d_c1str_append(out,key));
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x20')));
				_6e5d_c2r_check(_6e5d_c1str_append(out,decl(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2)),_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)))));
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_length(l),_6e5d_c2prim_fromU64(4)))){
					{
						_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf(" = ",3)));
						_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(3))));
					};
				};
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("cond",4)))){
			{
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
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
								{
									break;
								};
							};
							auto _6e5d_c2r_Object (*ll) = NULL;
							(_vartmp=ll);
							(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
							_6e5d_c2r_decref(_vartmp);
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(0)))){
								{
									_6e5d_c2r_decref(ll);
									continue;
								};
							}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(idx,_6e5d_c2prim_fromU64(1)))){
								{
								};
							}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
								{
									_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("else ",5)));
								};
							};
							if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_lt(_6e5d_c2prim_fromU64(0),_6e5d_c2prim_length(ll))))){
								{
									abort();
								};
							};
							_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("if(",3)));
							_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(ll,_6e5d_c2prim_fromU64(0))));
							_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf(")",1)));
							_6e5d_c2r_check(block(ll,_6e5d_c2prim_fromU64(1),out,indent));
							_6e5d_c2r_decref(ll);
						};
					};
					_6e5d_c2r_decref(idx);
				};
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("for",3)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_le(_6e5d_c2prim_fromU64(4),_6e5d_c2prim_length(l))))){
					{
						abort();
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("for(",4)));
				_6e5d_c2r_check(stmt(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)),indent));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x3b')));
				_6e5d_c2r_check(stmt(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2)),indent));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x3b')));
				_6e5d_c2r_check(stmt(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(3)),indent));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
				_6e5d_c2r_check(block(l,_6e5d_c2prim_fromU64(4),out,indent));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("while",5)))){
			{
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_le(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(l))))){
					{
						abort();
					};
				};
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("while(",6)));
				_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x29')));
				_6e5d_c2r_check(block(l,_6e5d_c2prim_fromU64(2),out,indent));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("begin",5)))){
			{
				_6e5d_c2r_check(block(l,_6e5d_c2prim_fromU64(1),out,indent));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("continue",8)))){
			{
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("continue",8)));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("break",5)))){
			{
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("break",5)));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("return",6)))){
			{
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("return ",7)));
				if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(_6e5d_c2prim_fromU64(2),_6e5d_c2prim_length(l)))){
					{
						_6e5d_c2r_check(expr(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
					};
				};
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(key,_6e5d_c2prim_fromBuf("nop",3)))){
			{
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				_6e5d_c2r_check(expr(out,l));
			};
		};
		_6e5d_c2r_decref(declkw);
		_6e5d_c2r_decref(key);
	};
	_6e5d_c2r_decref(indent);
	_6e5d_c2r_decref(l);
	_6e5d_c2r_decref(out);
	return NULL;
}
_6e5d_c2r_Object (*translateFn(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*deconly),_6e5d_c2r_Object (*out))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(deconly);
	_6e5d_c2r_incref(out);
	{
		auto _6e5d_c2r_Object (*bindings) = NULL;
		(_vartmp=bindings);
		(bindings=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(3))));
		_6e5d_c2r_decref(_vartmp);
		auto _6e5d_c2r_Object (*b) = NULL;
		(_vartmp=b);
		(b=_6e5d_c2r_incref(_6e5d_c2prim_asBytes(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1)))));
		_6e5d_c2r_decref(_vartmp);
		_6e5d_c2r_check(_6e5d_c1str_push(b,_6e5d_c2prim_fromU64('\x28')));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(bindings)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*binding) = NULL;
					(_vartmp=binding);
					(binding=_6e5d_c2r_incref(_6e5d_c2prim_getItem(bindings,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ne(idx,_6e5d_c2prim_fromU64(0)))){
						{
							_6e5d_c2r_check(_6e5d_c1str_push(b,_6e5d_c2prim_fromU64('\x2c')));
						};
					};
					_6e5d_c2r_check(_6e5d_c1str_append(b,decl(_6e5d_c2prim_getItem(binding,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_getItem(binding,_6e5d_c2prim_fromU64(0)))));
					_6e5d_c2r_decref(binding);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_check(_6e5d_c1str_push(b,_6e5d_c2prim_fromU64('\x29')));
		_6e5d_c2r_check(_6e5d_c1str_append(out,decl(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(2)),b)));
		if(_6e5d_c2prim_toBool(deconly)){
			{
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x3b')));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromU64(1))){
			{
				_6e5d_c2r_check(block(l,_6e5d_c2prim_fromU64(4),out,_6e5d_c2prim_fromU64(0)));
			};
		};
		_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x0a')));
		_6e5d_c2r_decref(b);
		_6e5d_c2r_decref(bindings);
	};
	_6e5d_c2r_decref(out);
	_6e5d_c2r_decref(deconly);
	_6e5d_c2r_decref(l);
	return NULL;
}
_6e5d_c2r_Object (*translateSu(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*deconly),_6e5d_c2r_Object (*out))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(deconly);
	_6e5d_c2r_incref(out);
	{
		if(_6e5d_c2prim_toBool(deconly)){
			{
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("typedef ",8)));
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x20')));
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x20')));
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
				_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf(";""\x0a""",2)));
				(_vartmp=NULL);
				_6e5d_c2r_decref(out);
				_6e5d_c2r_decref(deconly);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x20')));
		_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(1))));
		_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("{""\x0a""",2)));
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
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_ge(idx,_6e5d_c2prim_length(l)))){
						{
							break;
						};
					};
					auto _6e5d_c2r_Object (*ll) = NULL;
					(_vartmp=ll);
					(ll=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,idx)));
					_6e5d_c2r_decref(_vartmp);
					if(_6e5d_c2prim_toBool(_6e5d_c2prim_lt(idx,_6e5d_c2prim_fromU64(2)))){
						{
							_6e5d_c2r_decref(ll);
							continue;
						};
					};
					_6e5d_c2r_check(_6e5d_c1str_push(out,_6e5d_c2prim_fromU64('\x09')));
					_6e5d_c2r_check(_6e5d_c1str_append(out,decl(_6e5d_c2prim_getItem(ll,_6e5d_c2prim_fromU64(1)),_6e5d_c2prim_getItem(ll,_6e5d_c2prim_fromU64(0)))));
					_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf(";""\x0a""",2)));
					_6e5d_c2r_decref(ll);
				};
			};
			_6e5d_c2r_decref(idx);
		};
		_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf("};""\x0a""",3)));
	};
	_6e5d_c2r_decref(out);
	_6e5d_c2r_decref(deconly);
	_6e5d_c2r_decref(l);
	return NULL;
}
_6e5d_c2r_Object (*translateV(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*deconly),_6e5d_c2r_Object (*out))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(deconly);
	_6e5d_c2r_incref(out);
	{
		if(_6e5d_c2prim_toBool(deconly)){
			{
				(_vartmp=NULL);
				_6e5d_c2r_decref(out);
				_6e5d_c2r_decref(deconly);
				_6e5d_c2r_decref(l);
				_6e5d_c2r_deconly(_vartmp);
				return _vartmp;
			};
		};
		_6e5d_c2r_check(stmt(out,l,_6e5d_c2prim_fromU64(0)));
		_6e5d_c2r_check(_6e5d_c1str_append(out,_6e5d_c2prim_fromBuf(";""\x0a""",2)));
	};
	_6e5d_c2r_decref(out);
	_6e5d_c2r_decref(deconly);
	_6e5d_c2r_decref(l);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c0c_translate(_6e5d_c2r_Object (*l),_6e5d_c2r_Object (*deconly),_6e5d_c2r_Object (*out))){
	auto _6e5d_c2r_Object (*_vartmp);
	((void )_vartmp);
	_6e5d_c2r_incref(l);
	_6e5d_c2r_incref(deconly);
	_6e5d_c2r_incref(out);
	{
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_neg(_6e5d_c2prim_isList(l)))){
			{
				abort();
			};
		};
		auto _6e5d_c2r_Object (*unit) = NULL;
		(_vartmp=unit);
		(unit=_6e5d_c2r_incref(_6e5d_c2prim_getItem(l,_6e5d_c2prim_fromU64(0))));
		_6e5d_c2r_decref(_vartmp);
		if(_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("fn",2)))){
			{
				_6e5d_c2r_check(translateFn(l,deconly,out));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("struct",6)))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("union",5))))))){
			{
				_6e5d_c2r_check(translateSu(l,deconly,out));
			};
		}else if(_6e5d_c2prim_toBool(_6e5d_c2prim_fromBool((_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("static",6)))||_6e5d_c2prim_toBool(_6e5d_c2prim_eq(unit,_6e5d_c2prim_fromBuf("thread_local",12))))))){
			{
				_6e5d_c2r_check(translateV(l,deconly,out));
			};
		};
		_6e5d_c2r_decref(unit);
	};
	_6e5d_c2r_decref(out);
	_6e5d_c2r_decref(deconly);
	_6e5d_c2r_decref(l);
	return NULL;
}
