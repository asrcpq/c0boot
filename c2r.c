#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
typedef struct _6e5d_vec_Vec _6e5d_vec_Vec;
typedef struct _6e5d_hashmap_Hashmap _6e5d_hashmap_Hashmap;
typedef struct _6e5d_hashmap_Iter _6e5d_hashmap_Iter;
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
struct _6e5d_hashmap_Iter{
	uint8_t (*entry);
	void (*key);
	void (*value);
	uint8_t (*end);
};
void _6e5d_vec_deinit(_6e5d_vec_Vec (*v));
void (*_6e5d_vec_end(_6e5d_vec_Vec (*v)));
void _6e5d_hashmap_deinit(_6e5d_hashmap_Hashmap (*map));
bool _6e5d_hashmap_next(_6e5d_hashmap_Hashmap (*p),_6e5d_hashmap_Iter (*it));
_6e5d_hashmap_Iter _6e5d_hashmap_iter(_6e5d_hashmap_Hashmap (*p));
typedef union _6e5d_c2r_Value _6e5d_c2r_Value;
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
struct _6e5d_c2r_Object{
	_6e5d_c2r_Value value;
	uint32_t rc;
	int8_t ty;
};
_6e5d_vec_Vec (*_6e5d_c2r_asStr(_6e5d_c2r_Object (*po)));
_6e5d_vec_Vec (*_6e5d_c2r_asVec(_6e5d_c2r_Object (*po)));
_6e5d_hashmap_Hashmap (*_6e5d_c2r_asMap(_6e5d_c2r_Object (*po)));
_6e5d_c2r_Object (*_6e5d_c2r_incref(_6e5d_c2r_Object (*po)));
void _6e5d_c2r_decref(_6e5d_c2r_Object (*po));
void _6e5d_c2r_deconly(_6e5d_c2r_Object (*po));
void _6e5d_c2r_check(_6e5d_c2r_Object (*po));
void deinit(_6e5d_c2r_Object (*po));
_6e5d_vec_Vec (*_6e5d_c2r_asStr(_6e5d_c2r_Object (*po))){
	if((4==(po->ty))){
		return ((po->value).v);
	}else if(true){
		return NULL;
	};
}
_6e5d_vec_Vec (*_6e5d_c2r_asVec(_6e5d_c2r_Object (*po))){
	if((po==NULL)){
		return NULL;
	};
	return ((po->value).v);
}
_6e5d_hashmap_Hashmap (*_6e5d_c2r_asMap(_6e5d_c2r_Object (*po))){
	if((po==NULL)){
		return NULL;
	};
	return ((po->value).map);
}
_6e5d_c2r_Object (*_6e5d_c2r_incref(_6e5d_c2r_Object (*po))){
	if((NULL==po)){
		return NULL;
	};
	((po->rc)+=1);
	return po;
}
void _6e5d_c2r_decref(_6e5d_c2r_Object (*po)){
	_6e5d_c2r_deconly(po);
	_6e5d_c2r_check(po);
}
void _6e5d_c2r_deconly(_6e5d_c2r_Object (*po)){
	if((NULL==po)){
		return ;
	};
	if((0==(po->rc))){
		abort();
	};
	((po->rc)-=1);
}
void _6e5d_c2r_check(_6e5d_c2r_Object (*po)){
	if((NULL==po)){
		return ;
	};
	if((0==(po->rc))){
		deinit(po);
		free(po);
	};
}
void deinit(_6e5d_c2r_Object (*po)){
	if((4==(po->ty))){
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(po);
		_6e5d_vec_deinit(v);
		free(v);
	}else if((5==(po->ty))){
		auto _6e5d_vec_Vec (*v) = _6e5d_c2r_asVec(po);
		for(auto _6e5d_c2r_Object (*(*it)) = (v->p);(((void (*))it)<_6e5d_vec_end(v));(it+=1)){
			_6e5d_c2r_decref((*it));
		};
		_6e5d_vec_deinit(v);
		free(v);
	}else if((6==(po->ty))){
		auto _6e5d_hashmap_Hashmap (*map) = _6e5d_c2r_asMap(po);
		for(auto _6e5d_hashmap_Iter it = _6e5d_hashmap_iter(map);_6e5d_hashmap_next(map,(&it));){
			deinit((it.key));
			_6e5d_c2r_decref((*((_6e5d_c2r_Object (*(*)))(it.value))));
		};
		_6e5d_hashmap_deinit(map);
		free(map);
	}else if((7==(po->ty))){
		free(((po->value).lbuf));
	};
}
