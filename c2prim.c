#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
#include<unistd.h>
typedef struct _6e5d_hashmap_Hashmap _6e5d_hashmap_Hashmap;
typedef struct _6e5d_hashmap_Iter _6e5d_hashmap_Iter;
typedef union _6e5d_c2r_Value _6e5d_c2r_Value;
typedef struct _6e5d_vec_Vec _6e5d_vec_Vec;
typedef struct _6e5d_c2r_Object _6e5d_c2r_Object;
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
struct _6e5d_hashmap_Iter{
	uint8_t (*entry);
	void (*key);
	void (*value);
	uint8_t (*end);
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
struct _6e5d_vec_Vec{
	size_t size;
	size_t capacity;
	size_t len;
	void (*p);
};
struct _6e5d_c2r_Object{
	_6e5d_c2r_Value value;
	uint32_t rc;
	int8_t ty;
};
bool _6e5d_hashmap_next(_6e5d_hashmap_Hashmap (*p),_6e5d_hashmap_Iter (*it));
_6e5d_hashmap_Iter _6e5d_hashmap_iter(_6e5d_hashmap_Hashmap (*p));
void (*_6e5d_hashmap_getk(_6e5d_hashmap_Hashmap (*map),void (*key)));
bool _6e5d_hashmap_remove(_6e5d_hashmap_Hashmap (*map),void (*key));
void _6e5d_hashmap_insertv(_6e5d_hashmap_Hashmap (*map),void (*key),void (*value));
void (*_6e5d_hashmap_get(_6e5d_hashmap_Hashmap (*map),void (*key)));
uint64_t _6e5d_hashmap_fnv1a(void (*v),size_t len);
void _6e5d_hashmap_init(_6e5d_hashmap_Hashmap (*map),size_t size_key,size_t size_value);
void _6e5d_c2r_check(_6e5d_c2r_Object (*po));
_6e5d_vec_Vec (*_6e5d_c2r_asVec(_6e5d_c2r_Object (*po)));
void _6e5d_c2r_decref(_6e5d_c2r_Object (*po));
_6e5d_c2r_Object (*_6e5d_c2r_incref(_6e5d_c2r_Object (*po)));
_6e5d_hashmap_Hashmap (*_6e5d_c2r_asMap(_6e5d_c2r_Object (*po)));
void _6e5d_c2r_deconly(_6e5d_c2r_Object (*po));
void _6e5d_vec_init(_6e5d_vec_Vec (*v),size_t size);
void _6e5d_vec_resize(_6e5d_vec_Vec (*v),size_t newlen);
_6e5d_c2r_Object (*_6e5d_c2prim_add(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_sub(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_mul(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_div(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_ge(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_le(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_gt(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_lt(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_eq(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_ne(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_isBytes(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isList(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isU64(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isI64(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isF32(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_isNil(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_not(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_neg(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_inv(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_mod(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_and(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_or(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_xor(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_shl(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_shr(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2)));
_6e5d_c2r_Object (*_6e5d_c2prim_listInit());
_6e5d_c2r_Object (*_6e5d_c2prim_bytesInit());
void _6e5d_c2prim_resizeList(_6e5d_c2r_Object (*obj),size_t len);
_6e5d_c2r_Object (*_6e5d_c2prim_resize(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*vlen)));
void _6e5d_c2prim_listSet(_6e5d_c2r_Object (*obj),size_t index,_6e5d_c2r_Object (*value));
void bytesSet(_6e5d_c2r_Object (*obj),size_t index,_6e5d_c2r_Object (*value));
_6e5d_c2r_Object (*fromkey(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*map2list(_6e5d_hashmap_Hashmap (*map)));
size_t lbuflen(uint8_t (*p));
_6e5d_c2r_Object (*_6e5d_c2prim_asBytes(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_asList(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object tokey(_6e5d_c2r_Object (*obj));
void mapSet(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index),_6e5d_c2r_Object (*value));
_6e5d_c2r_Object (*_6e5d_c2prim_setItem(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index),_6e5d_c2r_Object (*value)));
_6e5d_c2r_Object (*listGet(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*oindex)));
_6e5d_c2r_Object (*bytesGet(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*oindex)));
_6e5d_c2r_Object (*mapGet(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index)));
_6e5d_c2r_Object (*_6e5d_c2prim_getItem(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index)));
_6e5d_c2r_Object (*_6e5d_c2prim_length(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_fromBuf(void (*p),size_t len));
uint64_t maphasher(void (*p),size_t len);
size_t toraw(_6e5d_c2r_Object (*v),void (*(*p)));
bool mapeq(void (*p1),void (*p2),size_t len);
_6e5d_c2r_Object (*_6e5d_c2prim_mapInit());
_6e5d_c2r_Object (*_6e5d_c2prim_fromU64(uint64_t val));
uint64_t _6e5d_c2prim_toU64(_6e5d_c2r_Object (*obj));
_6e5d_c2r_Object (*_6e5d_c2prim_fromI64(int64_t val));
int64_t _6e5d_c2prim_toI64(_6e5d_c2r_Object (*obj));
_6e5d_c2r_Object (*_6e5d_c2prim_fromF32(float val));
float _6e5d_c2prim_toF32(_6e5d_c2r_Object (*obj));
_6e5d_c2r_Object (*_6e5d_c2prim_fromBool(bool val));
bool _6e5d_c2prim_toBool(_6e5d_c2r_Object (*obj));
size_t toSizet(_6e5d_c2r_Object (*obj));
_6e5d_c2r_Object (*_6e5d_c2prim_fromFn(void (*f)(void )));
_6e5d_c2r_Object (*_6e5d_c2prim_asU64(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_asI64(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_asF32(_6e5d_c2r_Object (*obj)));
int64_t _6e5d_c2prim_cstr(_6e5d_c2r_Object (*obj),char (*out),size_t maxlen);
char (*_6e5d_c2prim_cstrAlloc(_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_rc(_6e5d_c2r_Object (*obj)));
void writeesc(int fd,uint8_t (*p),size_t len);
_6e5d_c2r_Object (*_6e5d_c2prim_printobj(int fd,_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_printdbg(int fd,_6e5d_c2r_Object (*obj)));
_6e5d_c2r_Object (*_6e5d_c2prim_add(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch %hhd %hhd""\x0a""",(v1->ty),(v2->ty));
		abort();
	};
	if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)+_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromI64((_6e5d_c2prim_toI64(v1)+_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromF32((_6e5d_c2prim_toF32(v1)+_6e5d_c2prim_toF32(v2))));
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_sub(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch %hhd %hhd""\x0a""",(v1->ty),(v2->ty));
		abort();
	};
	if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)-_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromI64((_6e5d_c2prim_toI64(v1)-_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromF32((_6e5d_c2prim_toF32(v1)-_6e5d_c2prim_toF32(v2))));
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_mul(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch %hhd %hhd""\x0a""",(v1->ty),(v2->ty));
		abort();
	};
	if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)*_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromI64((_6e5d_c2prim_toI64(v1)*_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromF32((_6e5d_c2prim_toF32(v1)*_6e5d_c2prim_toF32(v2))));
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_div(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch %hhd %hhd""\x0a""",(v1->ty),(v2->ty));
		abort();
	};
	if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)/_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromI64((_6e5d_c2prim_toI64(v1)/_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromF32((_6e5d_c2prim_toF32(v1)/_6e5d_c2prim_toF32(v2))));
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_ge(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1==NULL)||(v2==NULL))){
		fprintf(stderr,"cmp null""\x0a""");
		abort();
	}else if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch >=""\x0a""");
	}else if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toU64(v1)>=_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toI64(v1)>=_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toF32(v1)>=_6e5d_c2prim_toF32(v2))));
	}else if((4==(v1->ty))){
		auto _6e5d_vec_Vec (*vec1) = _6e5d_c2r_asVec(v1);
		auto _6e5d_vec_Vec (*vec2) = _6e5d_c2r_asVec(v2);
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
				(ret=_6e5d_c2prim_fromBool((eq1>=eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_fromBool((v1>=v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_le(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1==NULL)||(v2==NULL))){
		fprintf(stderr,"cmp null""\x0a""");
		abort();
	}else if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch <=""\x0a""");
	}else if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toU64(v1)<=_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toI64(v1)<=_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toF32(v1)<=_6e5d_c2prim_toF32(v2))));
	}else if((4==(v1->ty))){
		auto _6e5d_vec_Vec (*vec1) = _6e5d_c2r_asVec(v1);
		auto _6e5d_vec_Vec (*vec2) = _6e5d_c2r_asVec(v2);
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
				(ret=_6e5d_c2prim_fromBool((eq1<=eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_fromBool((v1<=v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_gt(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1==NULL)||(v2==NULL))){
		fprintf(stderr,"cmp null""\x0a""");
		abort();
	}else if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch >""\x0a""");
	}else if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toU64(v1)>_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toI64(v1)>_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toF32(v1)>_6e5d_c2prim_toF32(v2))));
	}else if((4==(v1->ty))){
		auto _6e5d_vec_Vec (*vec1) = _6e5d_c2r_asVec(v1);
		auto _6e5d_vec_Vec (*vec2) = _6e5d_c2r_asVec(v2);
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
				(ret=_6e5d_c2prim_fromBool((eq1>eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_fromBool((v1>v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_lt(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1==NULL)||(v2==NULL))){
		fprintf(stderr,"cmp null""\x0a""");
		abort();
	}else if(((v1->ty)!=(v2->ty))){
		fprintf(stderr,"type mismatch <""\x0a""");
	}else if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toU64(v1)<_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toI64(v1)<_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toF32(v1)<_6e5d_c2prim_toF32(v2))));
	}else if((4==(v1->ty))){
		auto _6e5d_vec_Vec (*vec1) = _6e5d_c2r_asVec(v1);
		auto _6e5d_vec_Vec (*vec2) = _6e5d_c2r_asVec(v2);
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
				(ret=_6e5d_c2prim_fromBool((eq1<eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_fromBool((v1<v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_eq(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1==NULL)||(v2==NULL))){
		fprintf(stderr,"cmp null""\x0a""");
		abort();
	}else if(((v1->ty)!=(v2->ty))){
		(ret=_6e5d_c2prim_fromBool(false));
	}else if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toU64(v1)==_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toI64(v1)==_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toF32(v1)==_6e5d_c2prim_toF32(v2))));
	}else if((4==(v1->ty))){
		auto _6e5d_vec_Vec (*vec1) = _6e5d_c2r_asVec(v1);
		auto _6e5d_vec_Vec (*vec2) = _6e5d_c2r_asVec(v2);
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
				(ret=_6e5d_c2prim_fromBool((eq1==eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_fromBool((v1==v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_ne(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	auto _6e5d_c2r_Object (*ret) = NULL;
	if(((v1==NULL)||(v2==NULL))){
		fprintf(stderr,"cmp null""\x0a""");
		abort();
	}else if(((v1->ty)!=(v2->ty))){
		(ret=_6e5d_c2prim_fromBool(true));
	}else if((0==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toU64(v1)!=_6e5d_c2prim_toU64(v2))));
	}else if((1==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toI64(v1)!=_6e5d_c2prim_toI64(v2))));
	}else if((2==(v1->ty))){
		(ret=_6e5d_c2prim_fromBool((_6e5d_c2prim_toF32(v1)!=_6e5d_c2prim_toF32(v2))));
	}else if((4==(v1->ty))){
		auto _6e5d_vec_Vec (*vec1) = _6e5d_c2r_asVec(v1);
		auto _6e5d_vec_Vec (*vec2) = _6e5d_c2r_asVec(v2);
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
				(ret=_6e5d_c2prim_fromBool((eq1!=eq2)));
				break;
			};
			auto uint8_t v1 = (*p1);
			auto uint8_t v2 = (*p2);
			if((v1!=v2)){
				(ret=_6e5d_c2prim_fromBool((v1!=v2)));
				break;
			};
			(p1+=1);
			(p2+=1);
		};
	}else if(true){
		fprintf(stderr,":invalid type binop %hhd""\x0a""""\x0a""",(v1->ty));
		abort();
	};
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_isBytes(_6e5d_c2r_Object (*obj))){
	auto bool val = ((obj!=NULL)&&(4==(obj->ty)));
	_6e5d_c2r_check(obj);
	return _6e5d_c2prim_fromBool(val);
}
_6e5d_c2r_Object (*_6e5d_c2prim_isList(_6e5d_c2r_Object (*obj))){
	auto bool val = ((obj!=NULL)&&(5==(obj->ty)));
	_6e5d_c2r_check(obj);
	return _6e5d_c2prim_fromBool(val);
}
_6e5d_c2r_Object (*_6e5d_c2prim_isU64(_6e5d_c2r_Object (*obj))){
	auto bool val = ((obj!=NULL)&&(0==(obj->ty)));
	_6e5d_c2r_check(obj);
	return _6e5d_c2prim_fromBool(val);
}
_6e5d_c2r_Object (*_6e5d_c2prim_isI64(_6e5d_c2r_Object (*obj))){
	auto bool val = ((obj!=NULL)&&(1==(obj->ty)));
	_6e5d_c2r_check(obj);
	return _6e5d_c2prim_fromBool(val);
}
_6e5d_c2r_Object (*_6e5d_c2prim_isF32(_6e5d_c2r_Object (*obj))){
	auto bool val = ((obj!=NULL)&&(2==(obj->ty)));
	_6e5d_c2r_check(obj);
	return _6e5d_c2prim_fromBool(val);
}
_6e5d_c2r_Object (*_6e5d_c2prim_isNil(_6e5d_c2r_Object (*obj))){
	auto bool val = (obj==NULL);
	_6e5d_c2r_check(obj);
	return _6e5d_c2prim_fromBool(val);
}
_6e5d_c2r_Object (*_6e5d_c2prim_not(_6e5d_c2r_Object (*obj))){
	assert((0==(obj->ty)));
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromU64((~_6e5d_c2prim_toU64(obj)));
	_6e5d_c2r_check(obj);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_neg(_6e5d_c2r_Object (*obj))){
	assert((0==(obj->ty)));
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromU64((0==_6e5d_c2prim_toU64(obj)));
	_6e5d_c2r_check(obj);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_inv(_6e5d_c2r_Object (*obj))){
	assert((1==(obj->ty)));
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromI64((-_6e5d_c2prim_toI64(obj)));
	_6e5d_c2r_check(obj);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_mod(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	if((((v1->ty)!=0)||((v2->ty)!=0))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)%_6e5d_c2prim_toU64(v2)));
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_and(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	if((((v1->ty)!=0)||((v2->ty)!=0))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)&_6e5d_c2prim_toU64(v2)));
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_or(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	if((((v1->ty)!=0)||((v2->ty)!=0))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)|_6e5d_c2prim_toU64(v2)));
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_xor(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	if((((v1->ty)!=0)||((v2->ty)!=0))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)^_6e5d_c2prim_toU64(v2)));
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_shl(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	if((((v1->ty)!=0)||((v2->ty)!=0))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)<<_6e5d_c2prim_toU64(v2)));
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_shr(_6e5d_c2r_Object (*v1),_6e5d_c2r_Object (*v2))){
	if((((v1->ty)!=0)||((v2->ty)!=0))){
		fprintf(stderr,"type mismatch""\x0a""");
		abort();
	};
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_fromU64((_6e5d_c2prim_toU64(v1)>>_6e5d_c2prim_toU64(v2)));
	_6e5d_c2r_check(v1);
	_6e5d_c2r_check(v2);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_listInit()){
	auto _6e5d_c2r_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_Object (*))0)[1])));
	auto _6e5d_vec_Vec (*v) = malloc(((size_t )(&((_6e5d_vec_Vec (*))0)[1])));
	((*obj)=((_6e5d_c2r_Object ){.ty=5,.rc=0,.value={.v=v,},}));
	_6e5d_vec_init(v,((size_t )(&((_6e5d_c2r_Object (*(*)))0)[1])));
	return obj;
}
_6e5d_c2r_Object (*_6e5d_c2prim_bytesInit()){
	auto _6e5d_c2r_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_Object (*))0)[1])));
	auto _6e5d_vec_Vec (*v) = malloc(((size_t )(&((_6e5d_vec_Vec (*))0)[1])));
	((*obj)=((_6e5d_c2r_Object ){.ty=4,.rc=0,.value={.v=v,},}));
	_6e5d_vec_init(v,1);
	return obj;
}
void _6e5d_c2prim_resizeList(_6e5d_c2r_Object (*obj),size_t len){
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
	auto size_t oldlen = (v->len);
	if((oldlen>len)){
		for(auto size_t idx = len;(idx<oldlen);(idx+=1)){
			auto _6e5d_c2r_Object (*(*p)) = ((void (*))(((uint8_t (*))(v->p))+(idx*(v->size))));
			_6e5d_c2r_decref((*p));
		};
	};
	_6e5d_vec_resize(v,len);
	if((oldlen<len)){
		memset(((void (*))(((uint8_t (*))(v->p))+(oldlen*(v->size)))),0,((v->size)*(len-oldlen)));
	};
}
_6e5d_c2r_Object (*_6e5d_c2prim_resize(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*vlen))){
	auto size_t len = toSizet(vlen);
	if((4==(obj->ty))){
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
		auto size_t l0 = (v->len);
		_6e5d_vec_resize(v,len);
		if((len>l0)){
			memset(((v->p)+l0),0,(len-l0));
		};
	}else if((5==(obj->ty))){
		_6e5d_c2prim_resizeList(obj,len);
	}else if(true){
		fprintf(stderr,"resize bad type:%hhd""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_check(vlen);
	return NULL;
}
void _6e5d_c2prim_listSet(_6e5d_c2r_Object (*obj),size_t index,_6e5d_c2r_Object (*value)){
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
	assert((index<(v->len)));
	auto _6e5d_c2r_Object (*(*p)) = ((void (*))(((uint8_t (*))(v->p))+(index*(v->size))));
	_6e5d_c2r_decref((*p));
	_6e5d_c2r_incref(value);
	((*p)=value);
}
void bytesSet(_6e5d_c2r_Object (*obj),size_t index,_6e5d_c2r_Object (*value)){
	auto uint64_t val = _6e5d_c2prim_toU64(value);
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
	assert((index<(v->len)));
	auto uint8_t (*p) = ((void (*))(((uint8_t (*))(v->p))+(index*(v->size))));
	((*p)=((uint8_t )val));
}
_6e5d_c2r_Object (*fromkey(_6e5d_c2r_Object (*obj))){
	if((7!=(obj->ty))){
		auto _6e5d_c2r_Object (*ret) = malloc(((size_t )(&((_6e5d_c2r_Object (*))0)[1])));
		((*ret)=(*obj));
		return ret;
	};
	return _6e5d_c2prim_asBytes(obj);
}
_6e5d_c2r_Object (*map2list(_6e5d_hashmap_Hashmap (*map))){
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_listInit();
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(ret);
	auto size_t len = (map->len);
	_6e5d_vec_resize(v,len);
	auto size_t idx = 0;
	for(auto _6e5d_hashmap_Iter it = _6e5d_hashmap_iter(map);_6e5d_hashmap_next(map,(&it));){
		auto _6e5d_c2r_Object (*(*p)) = ((void (*))(((uint8_t (*))(v->p))+(idx*(v->size))));
		((*p)=fromkey(((_6e5d_c2r_Object (*))(it.key))));
		(((*p)->rc)=1);
		(idx+=1);
	};
	return ret;
}
size_t lbuflen(uint8_t (*p)){
	return ((size_t )(*((uint64_t (*))p)));
}
_6e5d_c2r_Object (*_6e5d_c2prim_asBytes(_6e5d_c2r_Object (*obj))){
	auto _6e5d_c2r_Object (*ret);
	if((NULL==obj)){
		(ret=_6e5d_c2prim_fromBuf("nil",3));
	}else if((7==(obj->ty))){
		auto uint8_t (*p) = ((obj->value).lbuf);
		(ret=_6e5d_c2prim_fromBuf((p+8),lbuflen(p)));
	}else if((4==(obj->ty))){
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
		(ret=_6e5d_c2prim_fromBuf((v->p),(v->len)));
	}else if((0==(obj->ty))){
		(ret=_6e5d_c2prim_bytesInit());
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(ret);
		_6e5d_vec_resize(v,21);
		auto int len = snprintf((v->p),21,"%lu",_6e5d_c2prim_toU64(obj));
		assert((len>0));
		_6e5d_vec_resize(v,((size_t )len));
	}else if((1==(obj->ty))){
		(ret=_6e5d_c2prim_bytesInit());
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(ret);
		_6e5d_vec_resize(v,21);
		auto int len = snprintf((v->p),21,"%ld",_6e5d_c2prim_toI64(obj));
		assert((len>0));
		_6e5d_vec_resize(v,((size_t )len));
	}else if((2==(obj->ty))){
		(ret=_6e5d_c2prim_bytesInit());
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(ret);
		_6e5d_vec_resize(v,21);
		auto int len = snprintf((v->p),21,"%.16g",_6e5d_c2prim_toF32(obj));
		assert((len>0));
		_6e5d_vec_resize(v,((size_t )len));
	}else if(true){
		fprintf(stderr,"asbytes""\x0a""");
		abort();
	};
	_6e5d_c2r_check(obj);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_asList(_6e5d_c2r_Object (*obj))){
	auto _6e5d_c2r_Object (*ret);
	if((6==(obj->ty))){
		auto _6e5d_hashmap_Hashmap (*m) = _6e5d_c2r_asMap(obj);
		(ret=map2list(m));
	}else if(true){
		fprintf(stderr,"aslist""\x0a""");
		abort();
	};
	_6e5d_c2r_check(obj);
	return ret;
}
_6e5d_c2r_Object tokey(_6e5d_c2r_Object (*obj)){
	if(((5==(obj->ty))||(6==(obj->ty)))){
		abort();
	};
	if((4!=(obj->ty))){
		auto _6e5d_c2r_Object v = (*obj);
		((v.rc)=1);
		return v;
	};
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
	auto uint8_t (*lbuf) = malloc(((v->len)+8));
	((*((uint64_t (*))lbuf))=(v->len));
	memcpy((8+lbuf),(v->p),(v->len));
	return ((_6e5d_c2r_Object ){.rc=1,.ty=7,.value={.lbuf=lbuf,},});
}
void mapSet(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index),_6e5d_c2r_Object (*value)){
	auto _6e5d_hashmap_Hashmap (*map) = _6e5d_c2r_asMap(obj);
	auto uint8_t (*item) = _6e5d_hashmap_getk(map,index);
	if((NULL!=item)){
		auto _6e5d_c2r_Object (*pkey) = ((_6e5d_c2r_Object (*))item);
		auto _6e5d_c2r_Object (*(*pvalue)) = ((_6e5d_c2r_Object (*(*)))(item+((size_t )(&((_6e5d_c2r_Object (*))0)[1]))));
		_6e5d_c2r_decref((*pvalue));
		_6e5d_hashmap_remove(map,index);
		if((7==(pkey->ty))){
			free(((pkey->value).lbuf));
		};
	};
	if((NULL!=value)){
		_6e5d_c2r_incref(value);
		auto _6e5d_c2r_Object key = tokey(index);
		_6e5d_hashmap_insertv(map,(&key),(&value));
	};
}
_6e5d_c2r_Object (*_6e5d_c2prim_setItem(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index),_6e5d_c2r_Object (*value))){
	assert((NULL!=obj));
	if((4==(obj->ty))){
		auto size_t si = toSizet(index);
		bytesSet(obj,si,value);
	}else if((5==(obj->ty))){
		auto size_t si = toSizet(index);
		_6e5d_c2prim_listSet(obj,si,value);
	}else if((6==(obj->ty))){
		_6e5d_c2r_incref(index);
		mapSet(obj,index,value);
		_6e5d_c2r_deconly(index);
	}else if(true){
		abort();
	};
	_6e5d_c2r_check(index);
	_6e5d_c2r_check(value);
	return NULL;
}
_6e5d_c2r_Object (*listGet(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*oindex))){
	assert((NULL!=obj));
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
	auto size_t index = toSizet(oindex);
	assert((index<(v->len)));
	auto _6e5d_c2r_Object (*(*p)) = ((void (*))(((uint8_t (*))(v->p))+(index*(v->size))));
	return (*p);
}
_6e5d_c2r_Object (*bytesGet(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*oindex))){
	assert((NULL!=obj));
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
	auto size_t index = toSizet(oindex);
	assert((index<(v->len)));
	auto uint8_t (*p) = ((void (*))(((uint8_t (*))(v->p))+(index*(v->size))));
	return _6e5d_c2prim_fromU64((*p));
}
_6e5d_c2r_Object (*mapGet(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index))){
	auto _6e5d_hashmap_Hashmap (*m) = _6e5d_c2r_asMap(obj);
	auto _6e5d_c2r_Object (*(*got)) = _6e5d_hashmap_get(m,index);
	if((NULL==got)){
		return NULL;
	}else if(true){
		return (*got);
	};
}
_6e5d_c2r_Object (*_6e5d_c2prim_getItem(_6e5d_c2r_Object (*obj),_6e5d_c2r_Object (*index))){
	assert((NULL!=obj));
	auto _6e5d_c2r_Object (*ret);
	_6e5d_c2r_incref(index);
	if((4==(obj->ty))){
		(ret=bytesGet(obj,index));
	}else if((5==(obj->ty))){
		(ret=listGet(obj,index));
	}else if((6==(obj->ty))){
		(ret=mapGet(obj,index));
	}else if(true){
		abort();
	};
	_6e5d_c2r_incref(ret);
	_6e5d_c2r_check(obj);
	_6e5d_c2r_decref(index);
	_6e5d_c2r_deconly(ret);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_length(_6e5d_c2r_Object (*obj))){
	assert((NULL!=obj));
	auto _6e5d_c2r_Object (*ret);
	if(((4==(obj->ty))||(5==(obj->ty)))){
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
		(ret=_6e5d_c2prim_fromU64(((uint64_t )(v->len))));
	}else if((6==(obj->ty))){
		auto _6e5d_hashmap_Hashmap (*v) = _6e5d_c2r_asMap(obj);
		(ret=_6e5d_c2prim_fromU64(((uint64_t )(v->len))));
	}else if(true){
		abort();
	};
	_6e5d_c2r_check(obj);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_fromBuf(void (*p),size_t len)){
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_bytesInit();
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(ret);
	_6e5d_vec_resize(v,len);
	memcpy((v->p),p,len);
	return ret;
}
uint64_t maphasher(void (*p),size_t len){
	auto _6e5d_c2r_Object (*v) = p;
	auto int8_t ty = (v->ty);
	if((ty==2)){
		return _6e5d_hashmap_fnv1a((&(v->value)),4);
	}else if((ty==0)){
		return _6e5d_hashmap_fnv1a((&(v->value)),8);
	}else if((ty==1)){
		return _6e5d_hashmap_fnv1a((&(v->value)),8);
	}else if((ty==4)){
		auto _6e5d_vec_Vec (*bv) = _6e5d_c2r_asVec(v);
		return _6e5d_hashmap_fnv1a((bv->p),(bv->len));
	}else if((ty==7)){
		auto uint8_t (*lbuf) = ((v->value).lbuf);
		auto uint64_t len = (*((uint64_t (*))lbuf));
		return _6e5d_hashmap_fnv1a((lbuf+8),((size_t )len));
	}else if(true){
		fprintf(stderr,"unimplmeneted maphasher %hhd""\x0a""",ty);
		abort();
	};
}
size_t toraw(_6e5d_c2r_Object (*v),void (*(*p))){
	if((7==(v->ty))){
		auto uint8_t (*pv) = ((v->value).lbuf);
		((*p)=(pv+8));
		return lbuflen(pv);
	}else if((4==(v->ty))){
		auto _6e5d_vec_Vec (*pv) = _6e5d_c2r_asVec(v);
		assert((NULL!=pv));
		((*p)=(pv->p));
		return (pv->len);
	}else if(true){
		((*p)=NULL);
		return 0;
	};
}
bool mapeq(void (*p1),void (*p2),size_t len){
	auto _6e5d_c2r_Object (*v1) = p1;
	auto _6e5d_c2r_Object (*v2) = p2;
	assert((v1!=NULL));
	assert((v2!=NULL));
	if(((7==(v2->ty))||(7==(v1->ty)))){
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
	auto _6e5d_c2r_Object (*ret) = _6e5d_c2prim_eq(v1,v2);
	return _6e5d_c2prim_toBool(ret);
}
_6e5d_c2r_Object (*_6e5d_c2prim_mapInit()){
	auto _6e5d_c2r_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_Object (*))0)[1])));
	auto _6e5d_hashmap_Hashmap (*map) = malloc(((size_t )(&((_6e5d_hashmap_Hashmap (*))0)[1])));
	((*obj)=((_6e5d_c2r_Object ){.ty=6,.rc=0,.value={.map=map,},}));
	_6e5d_hashmap_init(map,((size_t )(&((_6e5d_c2r_Object (*))0)[1])),((size_t )(&((_6e5d_c2r_Object (*(*)))0)[1])));
	((map->eq)=mapeq);
	((map->hasher)=maphasher);
	return obj;
}
_6e5d_c2r_Object (*_6e5d_c2prim_fromU64(uint64_t val)){
	auto _6e5d_c2r_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_Object (*))0)[1])));
	((*obj)=((_6e5d_c2r_Object ){.ty=0,.rc=0,.value={.u64=val,},}));
	return obj;
}
uint64_t _6e5d_c2prim_toU64(_6e5d_c2r_Object (*obj)){
	auto uint64_t ret = ((obj->value).u64);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_fromI64(int64_t val)){
	auto _6e5d_c2r_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_Object (*))0)[1])));
	((*obj)=((_6e5d_c2r_Object ){.ty=1,.rc=0,.value={.i64=val,},}));
	return obj;
}
int64_t _6e5d_c2prim_toI64(_6e5d_c2r_Object (*obj)){
	auto int64_t ret = ((obj->value).i64);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_fromF32(float val)){
	auto _6e5d_c2r_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_Object (*))0)[1])));
	((*obj)=((_6e5d_c2r_Object ){.ty=2,.rc=0,.value={.f32=val,},}));
	return obj;
}
float _6e5d_c2prim_toF32(_6e5d_c2r_Object (*obj)){
	auto float ret = ((obj->value).f32);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_fromBool(bool val)){
	return _6e5d_c2prim_fromU64(((uint64_t )val));
}
bool _6e5d_c2prim_toBool(_6e5d_c2r_Object (*obj)){
	auto bool ret;
	if((0==(obj->ty))){
		auto uint64_t x = _6e5d_c2prim_toU64(obj);
		(ret=(x!=0));
	}else if(true){
		abort();
	};
	_6e5d_c2r_check(obj);
	return ret;
}
size_t toSizet(_6e5d_c2r_Object (*obj)){
	return ((size_t )_6e5d_c2prim_toU64(obj));
}
_6e5d_c2r_Object (*_6e5d_c2prim_fromFn(void (*f)(void ))){
	auto _6e5d_c2r_Object (*obj) = malloc(((size_t )(&((_6e5d_c2r_Object (*))0)[1])));
	((*obj)=((_6e5d_c2r_Object ){.ty=3,.rc=0,.value={.pfn=f,},}));
	return obj;
}
_6e5d_c2r_Object (*_6e5d_c2prim_asU64(_6e5d_c2r_Object (*obj))){
	auto _6e5d_c2r_Object (*ret);
	if((0==(obj->ty))){
		(ret=_6e5d_c2prim_fromU64(((uint64_t )_6e5d_c2prim_toU64(obj))));
	}else if((1==(obj->ty))){
		(ret=_6e5d_c2prim_fromU64(((uint64_t )_6e5d_c2prim_toI64(obj))));
	}else if((2==(obj->ty))){
		(ret=_6e5d_c2prim_fromU64(((uint64_t )_6e5d_c2prim_toF32(obj))));
	}else if((4==(obj->ty))){
		auto char (*s) = _6e5d_c2prim_cstrAlloc(obj);
		(ret=_6e5d_c2prim_fromU64(((uint64_t )atol(s))));
		free(s);
	}else if(true){
		fprintf(stderr,"ncast %hhd""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_check(obj);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_asI64(_6e5d_c2r_Object (*obj))){
	auto _6e5d_c2r_Object (*ret);
	if((0==(obj->ty))){
		(ret=_6e5d_c2prim_fromI64(((int64_t )_6e5d_c2prim_toU64(obj))));
	}else if((1==(obj->ty))){
		(ret=_6e5d_c2prim_fromI64(((int64_t )_6e5d_c2prim_toI64(obj))));
	}else if((2==(obj->ty))){
		(ret=_6e5d_c2prim_fromI64(((int64_t )_6e5d_c2prim_toF32(obj))));
	}else if((4==(obj->ty))){
		auto char (*s) = _6e5d_c2prim_cstrAlloc(obj);
		(ret=_6e5d_c2prim_fromI64(((int64_t )atol(s))));
		free(s);
	}else if(true){
		fprintf(stderr,"ncast %hhd""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_check(obj);
	return ret;
}
_6e5d_c2r_Object (*_6e5d_c2prim_asF32(_6e5d_c2r_Object (*obj))){
	auto _6e5d_c2r_Object (*ret);
	if((0==(obj->ty))){
		(ret=_6e5d_c2prim_fromF32(((float )_6e5d_c2prim_toU64(obj))));
	}else if((1==(obj->ty))){
		(ret=_6e5d_c2prim_fromF32(((float )_6e5d_c2prim_toI64(obj))));
	}else if((2==(obj->ty))){
		(ret=_6e5d_c2prim_fromF32(((float )_6e5d_c2prim_toF32(obj))));
	}else if((4==(obj->ty))){
		auto char (*s) = _6e5d_c2prim_cstrAlloc(obj);
		(ret=_6e5d_c2prim_fromF32(((float )atof(s))));
		free(s);
	}else if(true){
		fprintf(stderr,"ncast %hhd""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_check(obj);
	return ret;
}
int64_t _6e5d_c2prim_cstr(_6e5d_c2r_Object (*obj),char (*out),size_t maxlen){
	if((4!=(obj->ty))){
		fprintf(stderr,"cstr:%hhd""\x0a""",(obj->ty));
		abort();
	};
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
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
char (*_6e5d_c2prim_cstrAlloc(_6e5d_c2r_Object (*obj))){
	auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
	if((v==NULL)){
		return NULL;
	};
	auto size_t len = (v->len);
	auto char (*p) = malloc((len+1));
	(p[len]=0);
	memcpy(p,(v->p),len);
	return p;
}
_6e5d_c2r_Object (*_6e5d_c2prim_rc(_6e5d_c2r_Object (*obj))){
	auto uint64_t v64 = ((uint64_t )(obj->rc));
	_6e5d_c2r_check(obj);
	return _6e5d_c2prim_fromU64(v64);
}
void writeesc(int fd,uint8_t (*p),size_t len){
	auto bool quoted = false;
	for(auto size_t idx = 0;(idx<len);(idx+=1)){
		auto char ch = ((char )p[idx]);
		if(((ch=='\x22')||(ch=='\x5c')||(ch=='\x23')||(ch=='\x5b')||(ch=='\x5d')||(ch<=32)||(ch==127))){
			(quoted=true);
			break;
		};
	};
	if(quoted){
		write(fd,"""\x22""",1);
	};
	for(auto size_t idx = 0;(idx<len);(idx+=1)){
		auto char ch = ((char )p[idx]);
		if(((ch=='\x22')||(ch=='\x5c'))){
			write(fd,"""\x5c""",1);
			write(fd,(&ch),1);
		}else if(((ch<=32)||(ch==127))){
			dprintf(fd,"""\x5c""x%02hhx",ch);
		}else if(true){
			write(fd,(&ch),1);
		};
	};
	if(quoted){
		write(fd,"""\x22""",1);
	};
}
_6e5d_c2r_Object (*_6e5d_c2prim_printobj(int fd,_6e5d_c2r_Object (*obj))){
	if((NULL==obj)){
		dprintf(fd,"nil");
	}else if((0==(obj->ty))){
		dprintf(fd,"%lu",_6e5d_c2prim_toU64(obj));
	}else if((1==(obj->ty))){
		dprintf(fd,"%ld",_6e5d_c2prim_toI64(obj));
	}else if((2==(obj->ty))){
		dprintf(fd,"%g",((double )_6e5d_c2prim_toF32(obj)));
	}else if((4==(obj->ty))){
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
		write(fd,(v->p),(v->len));
	}else if((5==(obj->ty))){
		dprintf(fd,"[");
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
		auto bool first = true;
		for(auto _6e5d_c2r_Object (*(*it)) = (v->p);(((void (*))it)<((void (*))(((uint8_t (*))(v->p))+((v->len)*(v->size)))));(it+=1)){
			if(first){
				(first=false);
			}else if(true){
				dprintf(fd," ");
			};
			_6e5d_c2prim_printobj(fd,(*it));
		};
		dprintf(fd,"]");
	}else if((6==(obj->ty))){
		auto _6e5d_hashmap_Hashmap (*map) = _6e5d_c2r_asMap(obj);
		dprintf(fd,"[");
		for(auto _6e5d_hashmap_Iter it = _6e5d_hashmap_iter(map);_6e5d_hashmap_next(map,(&it));){
			dprintf(fd,"[");
			_6e5d_c2prim_printobj(fd,(it.key));
			dprintf(fd," ");
			_6e5d_c2prim_printobj(fd,(*((_6e5d_c2r_Object (*(*)))(it.value))));
			dprintf(fd,"]");
		};
		dprintf(fd,"]");
	}else if((7==(obj->ty))){
		auto uint8_t (*lbuf) = ((obj->value).lbuf);
		write(fd,(lbuf+8),lbuflen(lbuf));
	}else if(true){
		fprintf(stderr,"BUG: corrupted type:%hhd""\x0a""""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_check(obj);
	return NULL;
}
_6e5d_c2r_Object (*_6e5d_c2prim_printdbg(int fd,_6e5d_c2r_Object (*obj))){
	if((NULL==obj)){
		dprintf(fd,"nil");
	}else if((0==(obj->ty))){
		dprintf(fd,"%lu",_6e5d_c2prim_toU64(obj));
	}else if((1==(obj->ty))){
		dprintf(fd,"%ld",_6e5d_c2prim_toI64(obj));
	}else if((2==(obj->ty))){
		dprintf(fd,"%g",((double )_6e5d_c2prim_toF32(obj)));
	}else if((4==(obj->ty))){
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
		writeesc(fd,(v->p),(v->len));
	}else if((5==(obj->ty))){
		dprintf(fd,"[");
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(obj);
		auto bool first = true;
		for(auto _6e5d_c2r_Object (*(*it)) = (v->p);(((void (*))it)<((void (*))(((uint8_t (*))(v->p))+((v->len)*(v->size)))));(it+=1)){
			if(first){
				(first=false);
			}else if(true){
				dprintf(fd," ");
			};
			_6e5d_c2prim_printdbg(fd,(*it));
		};
		dprintf(fd,"]");
	}else if((6==(obj->ty))){
		auto _6e5d_hashmap_Hashmap (*map) = _6e5d_c2r_asMap(obj);
		dprintf(fd,"[");
		for(auto _6e5d_hashmap_Iter it = _6e5d_hashmap_iter(map);_6e5d_hashmap_next(map,(&it));){
			dprintf(fd,"[");
			_6e5d_c2prim_printdbg(fd,(it.key));
			dprintf(fd," ");
			_6e5d_c2prim_printdbg(fd,(*((_6e5d_c2r_Object (*(*)))(it.value))));
			dprintf(fd,"]");
		};
		dprintf(fd,"]");
	}else if((7==(obj->ty))){
		auto uint8_t (*lbuf) = ((obj->value).lbuf);
		writeesc(fd,(lbuf+8),lbuflen(lbuf));
	}else if(true){
		fprintf(stderr,"BUG: corrupted type:%hhd""\x0a""""\x0a""",(obj->ty));
		abort();
	};
	_6e5d_c2r_check(obj);
	return NULL;
}
