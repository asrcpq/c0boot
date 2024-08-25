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
static void deinit(_6e5d_c2r_lib_Object (*po));
_6e5d_vec_lib_Vec (*_6e5d_c2r_lib_asStr(_6e5d_c2r_lib_Object (*po))){
	if((5==(po->ty))){
		return ((po->value).v);
	}else if(true){
		return NULL;
	};
}
_6e5d_vec_lib_Vec (*_6e5d_c2r_lib_asVec(_6e5d_c2r_lib_Object (*po))){
	if((po==NULL)){
		return NULL;
	};
	return ((po->value).v);
}
_6e5d_hashmap_lib_Hashmap (*_6e5d_c2r_lib_asMap(_6e5d_c2r_lib_Object (*po))){
	if((po==NULL)){
		return NULL;
	};
	return ((po->value).map);
}
_6e5d_c2r_lib_Object (*_6e5d_c2r_lib_incref(_6e5d_c2r_lib_Object (*po))){
	if((NULL==po)){
		return NULL;
	};
	((po->rc)+=1);
	return po;
}
void _6e5d_c2r_lib_decref(_6e5d_c2r_lib_Object (*po)){
	_6e5d_c2r_lib_deconly(po);
	_6e5d_c2r_lib_chk((&po));
}
void _6e5d_c2r_lib_deconly(_6e5d_c2r_lib_Object (*po)){
	if((NULL==po)){
		return ;
	};
	if((0==(po->rc))){
		abort();
	};
	((po->rc)-=1);
}
void _6e5d_c2r_lib_chk(_6e5d_c2r_lib_Object (*(*pp))){
	auto _6e5d_c2r_lib_Object (*po) = (*pp);
	if((NULL==po)){
		return ;
	};
	if((0==(po->rc))){
		deinit(po);
		free(po);
		((*pp)=NULL);
	};
}
void _6e5d_c2r_lib_check0(_6e5d_c2r_lib_Object (*po)){
	if((NULL==po)){
		return ;
	};
	if((0==(po->rc))){
		deinit(po);
		free(po);
	};
}
static void deinit(_6e5d_c2r_lib_Object (*po)){
	if((5==(po->ty))){
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(po);
		_6e5d_vec_lib_deinit(v);
		free(v);
	}else if((6==(po->ty))){
		auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(po);
		for(auto _6e5d_c2r_lib_Object (*(*it)) = (v->p);(((void (*))it)<((void (*))(((uint8_t (*))(v->p))+((v->len)*(v->size)))));(it+=1)){
			_6e5d_c2r_lib_decref((*it));
		};
		_6e5d_vec_lib_deinit(v);
		free(v);
	}else if((7==(po->ty))){
		auto _6e5d_hashmap_lib_Hashmap (*map) = _6e5d_c2r_lib_asMap(po);
		for(auto _6e5d_hashmap_lib_Iter it = _6e5d_hashmap_lib_iter(map);_6e5d_hashmap_lib_next(map,(&it));){
			deinit((it.key));
			_6e5d_c2r_lib_decref((*((_6e5d_c2r_lib_Object (*(*)))(it.value))));
		};
		_6e5d_hashmap_lib_deinit(map);
		free(map);
	}else if((8==(po->ty))){
		free(((po->value).lbuf));
	};
}
