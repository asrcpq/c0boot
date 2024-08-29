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
int8_t _6e5d_c2prim_lib_tid0(_6e5d_c2r_lib_Object (*obj));
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
_6e5d_c2r_lib_Object (*_6e5d_c1s_c0_push(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*o)));
_6e5d_c2r_lib_Object (*_6e5d_c1s_c0_split(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim)));
_6e5d_c2r_lib_Object (*_6e5d_c1s_c0_lindex(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim)));
_6e5d_c2r_lib_Object (*_6e5d_c1s_c0_ucopy(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*dst),_6e5d_c2r_lib_Object (*start),_6e5d_c2r_lib_Object (*end),_6e5d_c2r_lib_Object (*offset)));
_6e5d_c2r_lib_Object (*_6e5d_c1s_c0_push(_6e5d_c2r_lib_Object (*l),_6e5d_c2r_lib_Object (*o))){
	auto bool isbytes = (5==_6e5d_c2prim_lib_tid0(l));
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(l);
	assert(v);
	if(isbytes){
		if((1!=_6e5d_c2prim_lib_tid0(o))){
			fprintf(stderr,"c1spushbadtype""\x0a""");
			abort();
		};
		auto uint8_t b = ((uint8_t )_6e5d_c2prim_lib_toU64(o));
		_6e5d_vec_lib_pushv(v,(&b));
	}else if(true){
		_6e5d_c2r_lib_incref(o);
		_6e5d_vec_lib_pushv(v,(&o));
	};
	_6e5d_c2r_lib_chk((&l));
	_6e5d_c2r_lib_chk((&o));
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1s_c0_split(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim))){
	if((5!=_6e5d_c2prim_lib_tid0(s))){
		fprintf(stderr,"c1ssplitbads""\x0a""");
		abort();
	};
	if((1!=_6e5d_c2prim_lib_tid0(delim))){
		fprintf(stderr,"c1ssplitbaddelim""\x0a""");
		abort();
	};
	auto uint8_t d = ((uint8_t )_6e5d_c2prim_lib_toU64(delim));
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(s);
	auto _6e5d_c2r_lib_Object (*ret) = _6e5d_c2prim_lib_listInit();
	auto _6e5d_vec_lib_Vec (*r) = _6e5d_c2r_lib_asVec(ret);
	auto uint8_t (*prev) = (v->p);
	auto uint8_t (*end) = ((void (*))(((uint8_t (*))(v->p))+((v->len)*(v->size))));
	auto uint8_t (*iter);
	for((iter=(v->p));(iter<=end);(iter+=1)){
		if(((iter!=end)&&(d!=(*iter)))){
			continue;
		};
		auto _6e5d_c2r_lib_Object (*sp) = _6e5d_c2prim_lib_bytesInit();
		_6e5d_c2r_lib_incref(sp);
		_6e5d_vec_lib_pushv(r,(&sp));
		auto _6e5d_vec_lib_Vec (*v2) = _6e5d_c2r_lib_asVec(sp);
		_6e5d_vec_lib_extend(v2,prev,(iter-prev));
		(prev=(iter+1));
	};
	_6e5d_c2r_lib_chk((&s));
	_6e5d_c2r_lib_chk((&delim));
	return ret;
}
_6e5d_c2r_lib_Object (*_6e5d_c1s_c0_lindex(_6e5d_c2r_lib_Object (*s),_6e5d_c2r_lib_Object (*delim))){
	if((5!=_6e5d_c2prim_lib_tid0(s))){
		fprintf(stderr,"c1slindexbads""\x0a""");
		abort();
	};
	if((1!=_6e5d_c2prim_lib_tid0(delim))){
		fprintf(stderr,"c1slindexbaddelim""\x0a""");
		abort();
	};
	auto uint8_t d = ((uint8_t )_6e5d_c2prim_lib_toU64(delim));
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(s);
	auto size_t idx = 0;
	for(auto uint8_t (*iter) = (v->p);(((void (*))iter)<((void (*))(((uint8_t (*))(v->p))+((v->len)*(v->size)))));(iter+=1)){
		if(((*iter)==d)){
			return _6e5d_c2prim_lib_fromU64(idx);
		};
		(idx+=1);
	};
	_6e5d_c2r_lib_chk((&s));
	_6e5d_c2r_lib_chk((&delim));
	return NULL;
}
_6e5d_c2r_lib_Object (*_6e5d_c1s_c0_ucopy(_6e5d_c2r_lib_Object (*src),_6e5d_c2r_lib_Object (*dst),_6e5d_c2r_lib_Object (*start),_6e5d_c2r_lib_Object (*end),_6e5d_c2r_lib_Object (*offset))){
	auto size_t s = ((size_t )_6e5d_c2prim_lib_toU64(start));
	_6e5d_c2r_lib_chk((&start));
	auto size_t e = ((size_t )_6e5d_c2prim_lib_toU64(end));
	_6e5d_c2r_lib_chk((&end));
	auto size_t o = ((size_t )_6e5d_c2prim_lib_toU64(offset));
	_6e5d_c2r_lib_chk((&offset));
	auto _6e5d_vec_lib_Vec (*v) = _6e5d_c2r_lib_asVec(src);
	assert(v);
	auto _6e5d_vec_lib_Vec (*d) = _6e5d_c2r_lib_asVec(dst);
	assert(d);
	if((o>(d->len))){
		fprintf(stderr,"largedstoffset""\x0a""");
		abort();
	};
	if((e>(v->len))){
		(e=(v->len));
	};
	if(((s>=(v->len))||(e<s))){
		(s=0);
		(e=s);
	};
	auto size_t copylen = (e-s);
	auto size_t copyend = (o+copylen);
	if((copyend>(d->len))){
		_6e5d_vec_lib_resize(d,copyend);
	};
	auto void (*ps) = ((void (*))(((uint8_t (*))(v->p))+(s*(v->size))));
	auto void (*pd) = ((void (*))(((uint8_t (*))(d->p))+(o*(d->size))));
	auto bool isbytes = (5==_6e5d_c2prim_lib_tid0(src));
	if(isbytes){
		if((5!=_6e5d_c2prim_lib_tid0(dst))){
			fprintf(stderr,"ucopy:notbytes""\x0a""");
			abort();
		};
		memmove(pd,ps,copylen);
	}else if(true){
		if((6!=_6e5d_c2prim_lib_tid0(dst))){
			fprintf(stderr,"ucopy:notlist""\x0a""");
			abort();
		};
		memmove(pd,ps,(copylen*((size_t )(&((_6e5d_c2r_lib_Object (*(*)))0)[1]))));
		auto _6e5d_c2r_lib_Object (*(*p)) = ps;
		for(auto size_t idx = 0;(idx<copylen);(idx+=1)){
			_6e5d_c2r_lib_incref((*p));
			(p+=1);
		};
	};
	_6e5d_c2r_lib_chk((&src));
	_6e5d_c2r_lib_chk((&dst));
	return _6e5d_c2prim_lib_fromU64(copyend);
}
