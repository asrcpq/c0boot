#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
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
static int8_t tid0(_6e5d_c2r_lib_Object (*obj));
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
static void bytesSet(_6e5d_c2r_lib_Object (*obj),size_t index,_6e5d_c2r_lib_Object (*value));
static _6e5d_c2r_lib_Object (*fromkey(_6e5d_c2r_lib_Object (*obj)));
static _6e5d_c2r_lib_Object (*map2list(_6e5d_hashmap_lib_Hashmap (*map)));
static size_t lbuflen(uint8_t (*p));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asBytes(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asList(_6e5d_c2r_lib_Object (*obj)));
static _6e5d_c2r_lib_Object tokey(_6e5d_c2r_lib_Object (*obj));
static void mapSet(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index),_6e5d_c2r_lib_Object (*value));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_setItem(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index),_6e5d_c2r_lib_Object (*value)));
static _6e5d_c2r_lib_Object (*listGet(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*oindex)));
static _6e5d_c2r_lib_Object (*bytesGet(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*oindex)));
static _6e5d_c2r_lib_Object (*mapGet(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_getItem(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_length(_6e5d_c2r_lib_Object (*obj)));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromBuf(void (*p),size_t len));
static uint64_t maphasher(void (*p),size_t len);
static size_t toraw(_6e5d_c2r_lib_Object (*v),void (*(*p)));
static bool mapeq(void (*p1),void (*p2),size_t len);
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_mapInit());
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromU64(uint64_t val));
uint64_t _6e5d_c2prim_lib_toU64(_6e5d_c2r_lib_Object (*obj));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromI64(int64_t val));
int64_t _6e5d_c2prim_lib_toI64(_6e5d_c2r_lib_Object (*obj));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromF32(float val));
float _6e5d_c2prim_lib_toF32(_6e5d_c2r_lib_Object (*obj));
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromBool(bool val));
static bool toBool0(_6e5d_c2r_lib_Object (*obj));
bool _6e5d_c2prim_lib_toBool(_6e5d_c2r_lib_Object (*obj));
static size_t toSizet(_6e5d_c2r_lib_Object (*obj));
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
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_add(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch %hhd %hhd""\x0a""",(v1->ty),(v2->ty));
		abort();
	};
	if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)+_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromI64((_6e5d_c2prim_lib_toI64(v1)+_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromF32((_6e5d_c2prim_lib_toF32(v1)+_6e5d_c2prim_lib_toF32(v2))));
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_sub(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch %hhd %hhd""\x0a""",(v1->ty),(v2->ty));
		abort();
	};
	if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)-_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromI64((_6e5d_c2prim_lib_toI64(v1)-_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromF32((_6e5d_c2prim_lib_toF32(v1)-_6e5d_c2prim_lib_toF32(v2))));
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_mul(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch %hhd %hhd""\x0a""",(v1->ty),(v2->ty));
		abort();
	};
	if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)*_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromI64((_6e5d_c2prim_lib_toI64(v1)*_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromF32((_6e5d_c2prim_lib_toF32(v1)*_6e5d_c2prim_lib_toF32(v2))));
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_div(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch %hhd %hhd""\x0a""",(v1->ty),(v2->ty));
		abort();
	};
	if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)/_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromI64((_6e5d_c2prim_lib_toI64(v1)/_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromF32((_6e5d_c2prim_lib_toF32(v1)/_6e5d_c2prim_lib_toF32(v2))));
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_ge(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if((tid0(v1)!=tid0(v2))){
		fprintf(stderr,"type mismatch >=""\x0a""");
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toU64(v1)>=_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toI64(v1)>=_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toF32(v1)>=_6e5d_c2prim_lib_toF32(v2))));
	}else if((5==(v1->ty))){
		auto _6e5d_vec_lib_Vec (*vec1) = _6e5d_c2r_lib_asVec(v1);
		auto _6e5d_vec_lib_Vec (*vec2) = _6e5d_c2r_lib_asVec(v2);
		auto uint8_t (*p1) = (vec1->p);
		auto uint8_t (*p2) = (vec2->p);
		for(auto size_t idx = 0;;(idx+=1)){
			auto int8_t eq1 = 0;
			auto int8_t eq2 = 0;
			if((idx==(vec1->len))){
				(eq1=-1);
			};
			if((idx==(vec2->len))){
				(eq2=-1);
			};
			if((eq1||eq2)){
				(ret=_6e5d_c2prim_lib_fromBool((eq1>=eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_lib_fromBool((v1>=v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_le(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if((tid0(v1)!=tid0(v2))){
		fprintf(stderr,"type mismatch <=""\x0a""");
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toU64(v1)<=_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toI64(v1)<=_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toF32(v1)<=_6e5d_c2prim_lib_toF32(v2))));
	}else if((5==(v1->ty))){
		auto _6e5d_vec_lib_Vec (*vec1) = _6e5d_c2r_lib_asVec(v1);
		auto _6e5d_vec_lib_Vec (*vec2) = _6e5d_c2r_lib_asVec(v2);
		auto uint8_t (*p1) = (vec1->p);
		auto uint8_t (*p2) = (vec2->p);
		for(auto size_t idx = 0;;(idx+=1)){
			auto int8_t eq1 = 0;
			auto int8_t eq2 = 0;
			if((idx==(vec1->len))){
				(eq1=-1);
			};
			if((idx==(vec2->len))){
				(eq2=-1);
			};
			if((eq1||eq2)){
				(ret=_6e5d_c2prim_lib_fromBool((eq1<=eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_lib_fromBool((v1<=v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_gt(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if((tid0(v1)!=tid0(v2))){
		fprintf(stderr,"type mismatch >""\x0a""");
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toU64(v1)>_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toI64(v1)>_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toF32(v1)>_6e5d_c2prim_lib_toF32(v2))));
	}else if((5==(v1->ty))){
		auto _6e5d_vec_lib_Vec (*vec1) = _6e5d_c2r_lib_asVec(v1);
		auto _6e5d_vec_lib_Vec (*vec2) = _6e5d_c2r_lib_asVec(v2);
		auto uint8_t (*p1) = (vec1->p);
		auto uint8_t (*p2) = (vec2->p);
		for(auto size_t idx = 0;;(idx+=1)){
			auto int8_t eq1 = 0;
			auto int8_t eq2 = 0;
			if((idx==(vec1->len))){
				(eq1=-1);
			};
			if((idx==(vec2->len))){
				(eq2=-1);
			};
			if((eq1||eq2)){
				(ret=_6e5d_c2prim_lib_fromBool((eq1>eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_lib_fromBool((v1>v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_lt(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if((tid0(v1)!=tid0(v2))){
		fprintf(stderr,"type mismatch <""\x0a""");
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toU64(v1)<_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toI64(v1)<_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toF32(v1)<_6e5d_c2prim_lib_toF32(v2))));
	}else if((5==(v1->ty))){
		auto _6e5d_vec_lib_Vec (*vec1) = _6e5d_c2r_lib_asVec(v1);
		auto _6e5d_vec_lib_Vec (*vec2) = _6e5d_c2r_lib_asVec(v2);
		auto uint8_t (*p1) = (vec1->p);
		auto uint8_t (*p2) = (vec2->p);
		for(auto size_t idx = 0;;(idx+=1)){
			auto int8_t eq1 = 0;
			auto int8_t eq2 = 0;
			if((idx==(vec1->len))){
				(eq1=-1);
			};
			if((idx==(vec2->len))){
				(eq2=-1);
			};
			if((eq1||eq2)){
				(ret=_6e5d_c2prim_lib_fromBool((eq1<eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_lib_fromBool((v1<v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_eq(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if((tid0(v1)!=tid0(v2))){
		(ret=_6e5d_c2prim_lib_fromBool(false));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toU64(v1)==_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toI64(v1)==_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toF32(v1)==_6e5d_c2prim_lib_toF32(v2))));
	}else if((5==(v1->ty))){
		auto _6e5d_vec_lib_Vec (*vec1) = _6e5d_c2r_lib_asVec(v1);
		auto _6e5d_vec_lib_Vec (*vec2) = _6e5d_c2r_lib_asVec(v2);
		auto uint8_t (*p1) = (vec1->p);
		auto uint8_t (*p2) = (vec2->p);
		for(auto size_t idx = 0;;(idx+=1)){
			auto int8_t eq1 = 0;
			auto int8_t eq2 = 0;
			if((idx==(vec1->len))){
				(eq1=-1);
			};
			if((idx==(vec2->len))){
				(eq2=-1);
			};
			if((eq1||eq2)){
				(ret=_6e5d_c2prim_lib_fromBool((eq1==eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_lib_fromBool((v1==v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_ne(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	auto _6e5d_c2r_lib_Object (*ret) = NULL;
	if((tid0(v1)!=tid0(v2))){
		(ret=_6e5d_c2prim_lib_fromBool(true));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toU64(v1)!=_6e5d_c2prim_lib_toU64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toI64(v1)!=_6e5d_c2prim_lib_toI64(v2))));
	}else if((3==(v1->ty))){
		(ret=_6e5d_c2prim_lib_fromBool((_6e5d_c2prim_lib_toF32(v1)!=_6e5d_c2prim_lib_toF32(v2))));
	}else if((5==(v1->ty))){
		auto _6e5d_vec_lib_Vec (*vec1) = _6e5d_c2r_lib_asVec(v1);
		auto _6e5d_vec_lib_Vec (*vec2) = _6e5d_c2r_lib_asVec(v2);
		auto uint8_t (*p1) = (vec1->p);
		auto uint8_t (*p2) = (vec2->p);
		for(auto size_t idx = 0;;(idx+=1)){
			auto int8_t eq1 = 0;
			auto int8_t eq2 = 0;
			if((idx==(vec1->len))){
				(eq1=-1);
			};
			if((idx==(vec2->len))){
				(eq2=-1);
			};
			if((eq1||eq2)){
				(ret=_6e5d_c2prim_lib_fromBool((eq1!=eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_lib_fromBool((v1!=v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
static int8_t tid0(_6e5d_c2r_lib_Object (*obj)){
	if((obj==NULL)){
		return 0;
	};
	return (obj->ty);
}
int8_t _6e5d_c2prim_lib_tid(_6e5d_c2r_lib_Object (*obj)){
	auto int8_t ret = tid0(obj);
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_not(_6e5d_c2r_lib_Object (*obj))){
	assert((1==(obj->ty)));
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_fromU64((~_6e5d_c2prim_lib_toU64(obj)));
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_lnot(_6e5d_c2r_lib_Object (*obj))){
	return _6e5d_c2prim_lib_fromU64((!_6e5d_c2prim_lib_toBool(obj)));
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_inv(_6e5d_c2r_lib_Object (*obj))){
	assert((2==(obj->ty)));
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_fromI64((-_6e5d_c2prim_lib_toI64(obj)));
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_mod(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	if((((v1->ty)!=1)||((v2->ty)!=1))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)%_6e5d_c2prim_lib_toU64(v2)));
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_and(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	if((((v1->ty)!=1)||((v2->ty)!=1))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)&_6e5d_c2prim_lib_toU64(v2)));
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_or(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	if((((v1->ty)!=1)||((v2->ty)!=1))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)|_6e5d_c2prim_lib_toU64(v2)));
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_xor(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	if((((v1->ty)!=1)||((v2->ty)!=1))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)^_6e5d_c2prim_lib_toU64(v2)));
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_shl(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	if((((v1->ty)!=1)||((v2->ty)!=1))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)<<_6e5d_c2prim_lib_toU64(v2)));
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_shr(_6e5d_c2r_lib_Object (*v1),_6e5d_c2r_lib_Object (*v2))){
	if((((v1->ty)!=1)||((v2->ty)!=1))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_fromU64((_6e5d_c2prim_lib_toU64(v1)>>_6e5d_c2prim_lib_toU64(v2)));
	_6e5d_c2r_lib_chk((&v1));
	_6e5d_c2r_lib_chk((&v2));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_listInit()){
	auto _6e5d_c2r_lib_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1])));
	auto _6e5d_vec_lib_Vec (*v) = malloc(((size_t )(&((_6e5d_vec_lib_Vec (*))0)[1])));
	((*obj)=((_6e5d_c2r_lib_Object ){.ty=6,.rc=0,.value={.v=v,},}));
	_6e5d_vec_lib_init(v,((size_t )(&((_6e5d_c2r_lib_Object (*(*)))0)[1])));
	return obj;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_bytesInit()){
	auto _6e5d_c2r_lib_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1])));
	auto _6e5d_vec_lib_Vec (*v) = malloc(((size_t )(&((_6e5d_vec_lib_Vec (*))0)[1])));
	((*obj)=((_6e5d_c2r_lib_Object ){.ty=5,.rc=0,.value={.v=v,},}));
	_6e5d_vec_lib_init(v,1);
	return obj;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_resizeList(_6e5d_c2r_lib_Object (*obj),size_t len)){
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
	auto size_t oldlen = (v->len);
	if((oldlen>len)){
		for(auto size_t idx = len;(idx<oldlen);(idx+=1)){
			auto _6e5d_c2r_lib_Object (*(*p)) = ((void (*))(((uint8_t (*))(v->p))+(idx*(v->size))));
			_6e5d_c2r_lib_decref((*p));
		};
	};
	_6e5d_vec_lib_resize(v,len);
	if((oldlen<len)){
		memset(((void (*))(((uint8_t (*))(v->p))+(oldlen*(v->size)))),0,((v->size)*(len-oldlen)));
	};
	return obj;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_resize(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*vlen))){
	auto size_t len = toSizet(vlen);
	if((5==(obj->ty))){
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
		auto size_t l0 = (v->len);
		_6e5d_vec_lib_resize(v,len);
		if((len>l0)){
			memset((((uint8_t (*))(v->p))+l0),0,(len-l0));
		};
	}else if((6==(obj->ty))){
		_6e5d_c2prim_lib_resizeList(obj,len);
	}else if(true){
		fprintf(stderr,"resize bad type:%hhd""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&vlen));
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_listSet(_6e5d_c2r_lib_Object (*obj),size_t index,_6e5d_c2r_lib_Object (*value))){
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
	assert((index<(v->len)));
	auto _6e5d_c2r_lib_Object (*(*p)) = ((void (*))(((uint8_t (*))(v->p))+(index*(v->size))));
	_6e5d_c2r_lib_decref((*p));
	_6e5d_c2r_lib_incref(value);
	((*p)=value);
	return obj;
}
static void bytesSet(_6e5d_c2r_lib_Object (*obj),size_t index,_6e5d_c2r_lib_Object (*value)){
	auto uint64_t val = _6e5d_c2prim_lib_toU64(value);
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
	assert((index<(v->len)));
	auto uint8_t (*p) = ((void (*))(((uint8_t (*))(v->p))+(index*(v->size))));
	((*p)=((uint8_t )val));
}
static _6e5d_c2r_lib_Object (*fromkey(_6e5d_c2r_lib_Object (*obj))){
	if((8!=(obj->ty))){
		auto _6e5d_c2r_lib_Object (*ret) = malloc(((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1])));
		((*ret)=(*obj));
		return ret;
	};
	return _6e5d_c2prim_lib_asBytes(obj);
}
static _6e5d_c2r_lib_Object (*map2list(_6e5d_hashmap_lib_Hashmap (*map))){
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_listInit();
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(ret);
	auto size_t len = (map->len);
	_6e5d_vec_lib_resize(v,len);
	auto size_t idx = 0;
	for(auto _6e5d_hashmap_lib_Iter it = _6e5d_hashmap_lib_iter(map);_6e5d_hashmap_lib_next(map,(&it));){
		auto _6e5d_c2r_lib_Object (*(*p)) = ((void (*))(((uint8_t (*))(v->p))+(idx*(v->size))));
		((*p)=fromkey(((_6e5d_c2r_lib_Object (*))(it.key))));
		(((*p)->rc)=1);
		(idx+=1);
	};
	return ret;
}
static size_t lbuflen(uint8_t (*p)){
	return ((size_t )(*((uint64_t (*))p)));
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asBytes(_6e5d_c2r_lib_Object (*obj))){
	auto _6e5d_c2r_lib_Object (*ret);
	if((NULL==obj)){
		(ret=_6e5d_c2prim_lib_fromBuf("nil",3));
	}else if((8==(obj->ty))){
		auto uint8_t (*p) = ((obj->value).lbuf);
		(ret=_6e5d_c2prim_lib_fromBuf((p+8),lbuflen(p)));
	}else if((5==(obj->ty))){
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
		(ret=_6e5d_c2prim_lib_fromBuf((v->p),(v->len)));
	}else if((1==(obj->ty))){
		(ret=_6e5d_c2prim_lib_bytesInit());
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(ret);
		_6e5d_vec_lib_resize(v,21);
		auto int len = snprintf((v->p),21,"%lu",_6e5d_c2prim_lib_toU64(obj));
		assert((len>0));
		_6e5d_vec_lib_resize(v,((size_t )len));
	}else if((2==(obj->ty))){
		(ret=_6e5d_c2prim_lib_bytesInit());
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(ret);
		_6e5d_vec_lib_resize(v,21);
		auto int len = snprintf((v->p),21,"%ld",_6e5d_c2prim_lib_toI64(obj));
		assert((len>0));
		_6e5d_vec_lib_resize(v,((size_t )len));
	}else if((3==(obj->ty))){
		(ret=_6e5d_c2prim_lib_bytesInit());
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(ret);
		_6e5d_vec_lib_resize(v,21);
		auto int len = snprintf((v->p),21,"%.16g",_6e5d_c2prim_lib_toF32(obj));
		assert((len>0));
		_6e5d_vec_lib_resize(v,((size_t )len));
	}else if(true){
		fprintf(stderr,"asbytes""\x0a""");
		abort();
	};
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asList(_6e5d_c2r_lib_Object (*obj))){
	auto _6e5d_c2r_lib_Object (*ret);
	if((7==(obj->ty))){
		auto _6e5d_hashmap_lib_Hashmap (*m) = _6e5d_c2r_lib_asMap(obj);
		(ret=map2list(m));
	}else if(true){
		fprintf(stderr,"aslist""\x0a""");
		abort();
	};
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
static _6e5d_c2r_lib_Object tokey(_6e5d_c2r_lib_Object (*obj)){
	if(((6==(obj->ty))||(7==(obj->ty)))){
		abort();
	};
	if((5!=(obj->ty))){
		auto _6e5d_c2r_lib_Object v = (*obj);
		((v.rc)=1);
		return v;
	};
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
	auto uint8_t (*lbuf) = malloc(((v->len)+8));
	((*((uint64_t (*))lbuf))=(v->len));
	memcpy((8+lbuf),(v->p),(v->len));
	return ((_6e5d_c2r_lib_Object ){.rc=1,.ty=8,.value={.lbuf=lbuf,},});
}
static void mapSet(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index),_6e5d_c2r_lib_Object (*value)){
	auto _6e5d_hashmap_lib_Hashmap (*map) = _6e5d_c2r_lib_asMap(obj);
	auto uint8_t (*item) = _6e5d_hashmap_lib_getk(map,index);
	if((NULL!=item)){
		auto _6e5d_c2r_lib_Object (*pkey) = ((_6e5d_c2r_lib_Object (*))item);
		auto _6e5d_c2r_lib_Object (*(*pvalue)) = ((_6e5d_c2r_lib_Object (*(*)))(item+((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1]))));
		_6e5d_c2r_lib_decref((*pvalue));
		_6e5d_hashmap_lib_remove(map,index);
		if((8==(pkey->ty))){
			free(((pkey->value).lbuf));
		};
	};
	if((NULL!=value)){
		_6e5d_c2r_lib_incref(value);
		auto _6e5d_c2r_lib_Object key = tokey(index);
		_6e5d_hashmap_lib_insertv(map,(&key),(&value));
	};
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_setItem(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index),_6e5d_c2r_lib_Object (*value))){
	assert((NULL!=obj));
	if((5==(obj->ty))){
		auto size_t si = toSizet(index);
		bytesSet(obj,si,value);
	}else if((6==(obj->ty))){
		auto size_t si = toSizet(index);
		_6e5d_c2prim_lib_listSet(obj,si,value);
	}else if((7==(obj->ty))){
		_6e5d_c2r_lib_incref(index);
		mapSet(obj,index,value);
		_6e5d_c2r_lib_deconly(index);
	}else if(true){
		abort();
	};
	_6e5d_c2r_lib_chk((&index));
	_6e5d_c2r_lib_chk((&value));
	return NULL;
}
static _6e5d_c2r_lib_Object (*listGet(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*oindex))){
	assert((NULL!=obj));
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
	auto size_t index = toSizet(oindex);
	assert((index<(v->len)));
	auto _6e5d_c2r_lib_Object (*(*p)) = ((void (*))(((uint8_t (*))(v->p))+(index*(v->size))));
	return (*p);
}
static _6e5d_c2r_lib_Object (*bytesGet(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*oindex))){
	assert((NULL!=obj));
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
	auto size_t index = toSizet(oindex);
	assert((index<(v->len)));
	auto uint8_t (*p) = ((void (*))(((uint8_t (*))(v->p))+(index*(v->size))));
	return _6e5d_c2prim_lib_fromU64((*p));
}
static _6e5d_c2r_lib_Object (*mapGet(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index))){
	auto _6e5d_hashmap_lib_Hashmap (*m) = _6e5d_c2r_lib_asMap(obj);
	auto _6e5d_c2r_lib_Object (*(*got)) = _6e5d_hashmap_lib_get(m,index);
	if((NULL==got)){
		return NULL;
	}else if(true){
		return (*got);
	};
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_getItem(_6e5d_c2r_lib_Object (*obj),_6e5d_c2r_lib_Object (*index))){
	assert((NULL!=obj));
	auto _6e5d_c2r_lib_Object (*ret);
	_6e5d_c2r_lib_incref(index);
	if((5==(obj->ty))){
		(ret=bytesGet(obj,index));
	}else if((6==(obj->ty))){
		(ret=listGet(obj,index));
	}else if((7==(obj->ty))){
		(ret=mapGet(obj,index));
	}else if(true){
		abort();
	};
	_6e5d_c2r_lib_incref(ret);
	_6e5d_c2r_lib_chk((&obj));
	_6e5d_c2r_lib_decref(index);
	_6e5d_c2r_lib_deconly(ret);
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_length(_6e5d_c2r_lib_Object (*obj))){
	assert((NULL!=obj));
	auto _6e5d_c2r_lib_Object (*ret);
	if(((5==(obj->ty))||(6==(obj->ty)))){
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
		(ret=_6e5d_c2prim_lib_fromU64(((uint64_t )(v->len))));
	}else if((7==(obj->ty))){
		auto _6e5d_hashmap_lib_Hashmap (*v) = _6e5d_c2r_lib_asMap(obj);
		(ret=_6e5d_c2prim_lib_fromU64(((uint64_t )(v->len))));
	}else if(true){
		abort();
	};
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromBuf(void (*p),size_t len)){
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_bytesInit();
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(ret);
	_6e5d_vec_lib_resize(v,len);
	memcpy((v->p),p,len);
	return ret;
}
static uint64_t maphasher(void (*p),size_t len){
	auto _6e5d_c2r_lib_Object (*v) = p;
	auto int8_t ty = (v->ty);
	if((ty==3)){
		return _6e5d_hashmap_lib_fnv1a((&(v->value)),4);
	}else if((ty==1)){
		return _6e5d_hashmap_lib_fnv1a((&(v->value)),8);
	}else if((ty==2)){
		return _6e5d_hashmap_lib_fnv1a((&(v->value)),8);
	}else if((ty==5)){
		auto _6e5d_vec_lib_Vec (*bv) = _6e5d_c2r_lib_asVec(v);
		return _6e5d_hashmap_lib_fnv1a((bv->p),(bv->len));
	}else if((ty==8)){
		auto uint8_t (*lbuf) = ((v->value).lbuf);
		auto uint64_t len = (*((uint64_t (*))lbuf));
		return _6e5d_hashmap_lib_fnv1a((lbuf+8),((size_t )len));
	}else if(true){
		fprintf(stderr,"unimplmeneted maphasher %hhd""\x0a""",ty);
		abort();
	};
}
static size_t toraw(_6e5d_c2r_lib_Object (*v),void (*(*p))){
	if((8==(v->ty))){
		auto uint8_t (*pv) = ((v->value).lbuf);
		((*p)=(pv+8));
		return lbuflen(pv);
	}else if((5==(v->ty))){
		auto _6e5d_vec_lib_Vec (*pv) = _6e5d_c2r_lib_asVec(v);
		assert((NULL!=pv));
		((*p)=(pv->p));
		return (pv->len);
	}else if(true){
		((*p)=NULL);
		return 0;
	};
}
static bool mapeq(void (*p1),void (*p2),size_t len){
	auto _6e5d_c2r_lib_Object (*v1) = p1;
	auto _6e5d_c2r_lib_Object (*v2) = p2;
	assert((v1!=NULL));
	assert((v2!=NULL));
	if(((8==(v2->ty))||(8==(v1->ty)))){
		auto void (*p1);
		auto size_t len1 = toraw(v1,(&p1));
		if((p1==NULL)){
			return false;
		};
		auto void (*p2);
		auto size_t len2 = toraw(v2,(&p2));
		if((p2==NULL)){
			return false;
		};
		if((len1!=len2)){
			return false;
		};
		return (0==memcmp(p1,p2,len1));
	};
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_eq(v1,v2);
	return _6e5d_c2prim_lib_toBool(ret);
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_mapInit()){
	auto _6e5d_c2r_lib_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1])));
	auto _6e5d_hashmap_lib_Hashmap (*map) = malloc(((size_t )(&((_6e5d_hashmap_lib_Hashmap (*))0)[1])));
	((*obj)=((_6e5d_c2r_lib_Object ){.ty=7,.rc=0,.value={.map=map,},}));
	_6e5d_hashmap_lib_init(map,((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1])),((size_t )(&((_6e5d_c2r_lib_Object (*(*)))0)[1])));
	((map->eq)=mapeq);
	((map->hasher)=maphasher);
	return obj;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromU64(uint64_t val)){
	auto _6e5d_c2r_lib_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1])));
	((*obj)=((_6e5d_c2r_lib_Object ){.ty=1,.rc=0,.value={.u64=val,},}));
	return obj;
}
uint64_t _6e5d_c2prim_lib_toU64(_6e5d_c2r_lib_Object (*obj)){
	auto uint64_t ret = ((obj->value).u64);
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromI64(int64_t val)){
	auto _6e5d_c2r_lib_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1])));
	((*obj)=((_6e5d_c2r_lib_Object ){.ty=2,.rc=0,.value={.i64=val,},}));
	return obj;
}
int64_t _6e5d_c2prim_lib_toI64(_6e5d_c2r_lib_Object (*obj)){
	auto int64_t ret = ((obj->value).i64);
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromF32(float val)){
	auto _6e5d_c2r_lib_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1])));
	((*obj)=((_6e5d_c2r_lib_Object ){.ty=3,.rc=0,.value={.f32=val,},}));
	return obj;
}
float _6e5d_c2prim_lib_toF32(_6e5d_c2r_lib_Object (*obj)){
	auto float ret = ((obj->value).f32);
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromBool(bool val)){
	return _6e5d_c2prim_lib_fromU64(((uint64_t )val));
}
static bool toBool0(_6e5d_c2r_lib_Object (*obj)){
	auto bool ret;
	if((1==(obj->ty))){
		auto uint64_t x = _6e5d_c2prim_lib_toU64(obj);
		(ret=(x!=0));
	}else if((2==(obj->ty))){
		auto int64_t x = _6e5d_c2prim_lib_toI64(obj);
		(ret=(x!=0));
	}else if((3==(obj->ty))){
		auto int64_t x = _6e5d_c2prim_lib_toF32(obj);
		(ret=(x!=0));
	}else if(((5==(obj->ty))||(6==(obj->ty)))){
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
		(ret=(0!=(v->len)));
	}else if((7==(obj->ty))){
		auto _6e5d_hashmap_lib_Hashmap (*m) = _6e5d_c2r_lib_asMap(obj);
		(ret=(0!=(m->len)));
	}else if(true){
		abort();
	};
	return ret;
}
bool _6e5d_c2prim_lib_toBool(_6e5d_c2r_lib_Object (*obj)){
	auto bool ret = toBool0(obj);
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
static size_t toSizet(_6e5d_c2r_lib_Object (*obj)){
	return ((size_t )_6e5d_c2prim_lib_toU64(obj));
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_fromFn(void (*f)(void ))){
	auto _6e5d_c2r_lib_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_lib_Object (*))0)[1])));
	((*obj)=((_6e5d_c2r_lib_Object ){.ty=4,.rc=0,.value={.pfn=f,},}));
	return obj;
}
void (*_6e5d_c2prim_lib_toFn(_6e5d_c2r_lib_Object (*f)))(void ){
	if((4!=(f->ty))){
		fprintf(stderr,"bad function""\x0a""");
		abort();
	};
	auto void (*ret)(void ) = ((f->value).pfn);
	_6e5d_c2r_lib_chk((&f));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asU64(_6e5d_c2r_lib_Object (*obj))){
	auto _6e5d_c2r_lib_Object (*ret);
	if((1==(obj->ty))){
		(ret=_6e5d_c2prim_lib_fromU64(((uint64_t )_6e5d_c2prim_lib_toU64(obj))));
	}else if((2==(obj->ty))){
		(ret=_6e5d_c2prim_lib_fromU64(((uint64_t )_6e5d_c2prim_lib_toI64(obj))));
	}else if((3==(obj->ty))){
		(ret=_6e5d_c2prim_lib_fromU64(((uint64_t )_6e5d_c2prim_lib_toF32(obj))));
	}else if((5==(obj->ty))){
		auto char (*s) = _6e5d_c2prim_lib_cstrAlloc(obj);
		(ret=_6e5d_c2prim_lib_fromU64(((uint64_t )atol(s))));
		free(s);
	}else if(true){
		fprintf(stderr,"ncast %hhd""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asI64(_6e5d_c2r_lib_Object (*obj))){
	auto _6e5d_c2r_lib_Object (*ret);
	if((1==(obj->ty))){
		(ret=_6e5d_c2prim_lib_fromI64(((int64_t )_6e5d_c2prim_lib_toU64(obj))));
	}else if((2==(obj->ty))){
		(ret=_6e5d_c2prim_lib_fromI64(((int64_t )_6e5d_c2prim_lib_toI64(obj))));
	}else if((3==(obj->ty))){
		(ret=_6e5d_c2prim_lib_fromI64(((int64_t )_6e5d_c2prim_lib_toF32(obj))));
	}else if((5==(obj->ty))){
		auto char (*s) = _6e5d_c2prim_lib_cstrAlloc(obj);
		(ret=_6e5d_c2prim_lib_fromI64(((int64_t )atol(s))));
		free(s);
	}else if(true){
		fprintf(stderr,"ncast %hhd""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_asF32(_6e5d_c2r_lib_Object (*obj))){
	auto _6e5d_c2r_lib_Object (*ret);
	if((1==(obj->ty))){
		(ret=_6e5d_c2prim_lib_fromF32(((float )_6e5d_c2prim_lib_toU64(obj))));
	}else if((2==(obj->ty))){
		(ret=_6e5d_c2prim_lib_fromF32(((float )_6e5d_c2prim_lib_toI64(obj))));
	}else if((3==(obj->ty))){
		(ret=_6e5d_c2prim_lib_fromF32(((float )_6e5d_c2prim_lib_toF32(obj))));
	}else if((5==(obj->ty))){
		auto char (*s) = _6e5d_c2prim_lib_cstrAlloc(obj);
		(ret=_6e5d_c2prim_lib_fromF32(((float )atof(s))));
		free(s);
	}else if(true){
		fprintf(stderr,"ncast %hhd""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&obj));
	return ret;
}
int64_t _6e5d_c2prim_lib_cstr(_6e5d_c2r_lib_Object (*obj),char (*out),size_t maxlen){
	if((5!=(obj->ty))){
		fprintf(stderr,"cstr:%hhd""\x0a""",(obj->ty));
		abort();
	};
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
	if((v==NULL)){
		return -1;
	};
	auto size_t len = (v->len);
	if((len>=maxlen)){
		return -2;
	};
	(out[len]=0);
	memcpy(out,(v->p),len);
	return ((int64_t )len);
}
char (*_6e5d_c2prim_lib_cstrAlloc(_6e5d_c2r_lib_Object (*obj))){
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
	if((v==NULL)){
		return NULL;
	};
	auto size_t len = (v->len);
	auto char (*p) = malloc((len+1));
	(p[len]=0);
	memcpy(p,(v->p),len);
	return p;
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_rc(_6e5d_c2r_lib_Object (*obj))){
	auto uint64_t v64 = ((uint64_t )(obj->rc));
	_6e5d_c2r_lib_chk((&obj));
	return _6e5d_c2prim_lib_fromU64(v64);
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_printobj(FILE (*f),_6e5d_c2r_lib_Object (*obj))){
	if((NULL==obj)){
		fprintf(f,"nil");
	}else if((1==(obj->ty))){
		fprintf(f,"%lu",_6e5d_c2prim_lib_toU64(obj));
	}else if((2==(obj->ty))){
		fprintf(f,"%ld",_6e5d_c2prim_lib_toI64(obj));
	}else if((3==(obj->ty))){
		fprintf(f,"%g",((double )_6e5d_c2prim_lib_toF32(obj)));
	}else if((5==(obj->ty))){
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
		fwrite((v->p),(v->len),1,f);
	}else if((6==(obj->ty))){
		fprintf(f,"[");
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(obj);
		auto bool first = true;
		for(auto _6e5d_c2r_lib_Object (*(*it)) = (v->p);(((void (*))it)<((void (*))(((uint8_t (*))(v->p))+((v->len)*(v->size)))));(it+=1)){
			if(first){
				(first=false);
			}else if(true){
				fprintf(f," ");
			};
			_6e5d_c2prim_lib_printobj(f,(*it));
		};
		fprintf(f,"]");
	}else if((7==(obj->ty))){
		auto _6e5d_hashmap_lib_Hashmap (*map) = _6e5d_c2r_lib_asMap(obj);
		fprintf(f,"[");
		for(auto _6e5d_hashmap_lib_Iter it = _6e5d_hashmap_lib_iter(map);_6e5d_hashmap_lib_next(map,(&it));){
			fprintf(f,"[");
			_6e5d_c2prim_lib_printobj(f,(it.key));
			fprintf(f," ");
			_6e5d_c2prim_lib_printobj(f,(*((_6e5d_c2r_lib_Object (*(*)))(it.value))));
			fprintf(f,"]");
		};
		fprintf(f,"]");
	}else if((8==(obj->ty))){
		auto uint8_t (*lbuf) = ((obj->value).lbuf);
		fwrite((lbuf+8),lbuflen(lbuf),1,f);
	}else if(true){
		fprintf(stderr,"BUG: corrupted type:%hhd""\x0a""""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_lib_chk((&obj));
	return NULL;
}
void _6e5d_c2prim_lib_assign(_6e5d_c2r_lib_Object (*(*dst)),_6e5d_c2r_lib_Object (*src)){
	_6e5d_c2r_lib_incref(src);
	_6e5d_c2r_lib_decref((*dst));
	((*dst)=src);
}
_6e5d_c2r_lib_Object (*_6e5d_c2prim_lib_abort()){
	abort();
}
