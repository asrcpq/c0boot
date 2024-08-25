#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
typedef struct _6e5d_vec_lib_Vec _6e5d_vec_lib_Vec;
struct _6e5d_vec_lib_Vec{
	size_t size;
	size_t capacity;
	size_t len;
	void (*p);
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
void _6e5d_vec_lib_init(_6e5d_vec_lib_Vec (*v),size_t size){
	((*v)=((_6e5d_vec_lib_Vec ){.size=size,.capacity=0,.len=0,.p=NULL,}));
}
void _6e5d_vec_lib_deinit(_6e5d_vec_lib_Vec (*v)){
	free((v->p));
}
void _6e5d_vec_lib_fit(_6e5d_vec_lib_Vec (*v)){
	((v->p)=realloc((v->p),((v->size)*(v->len))));
	assert((NULL!=(v->p)));
	((v->capacity)=(v->len));
}
void (*_6e5d_vec_lib_last(_6e5d_vec_lib_Vec (*v))){
	if((0==(v->len))){
		return NULL;
	};
	return ((void (*))(((uint8_t (*))(v->p))+((v->size)*((v->len)-1))));
}
void _6e5d_vec_lib_reserve(_6e5d_vec_lib_Vec (*v),size_t upcoming){
	auto size_t newlen = (upcoming+(v->len));
	if((newlen<=(v->capacity))){
		return ;
	}else if(((v->capacity)==0)){
		((v->capacity)=upcoming);
	}else if(true){
		while((newlen>(v->capacity))){
			((v->capacity)*=2);
		};
	};
	((v->p)=realloc((v->p),((v->capacity)*(v->size))));
	assert((NULL!=(v->p)));
}
void _6e5d_vec_lib_resize(_6e5d_vec_lib_Vec (*v),size_t newlen){
	if((newlen>(v->capacity))){
		_6e5d_vec_lib_reserve(v,(newlen-(v->len)));
	};
	((v->len)=newlen);
}
void _6e5d_vec_lib_extend(_6e5d_vec_lib_Vec (*v),void (*data),size_t len){
	_6e5d_vec_lib_reserve(v,len);
	memcpy(((void (*))(((uint8_t (*))(v->p))+((v->len)*(v->size)))),data,((v->size)*len));
	((v->len)+=len);
}
void _6e5d_vec_lib_debug(_6e5d_vec_lib_Vec (*v)){
	fprintf(stderr,"vec:len=%zu:size=%zu:cap=%zu",(v->len),(v->size),(v->capacity));
}
void (*_6e5d_vec_lib_push(_6e5d_vec_lib_Vec (*v))){
	_6e5d_vec_lib_reserve(v,1);
	((v->len)+=1);
	return _6e5d_vec_lib_last(v);
}
void _6e5d_vec_lib_pushv(_6e5d_vec_lib_Vec (*v),void (*val)){
	auto void (*p) = _6e5d_vec_lib_push(v);
	memcpy(p,val,(v->size));
}
void (*_6e5d_vec_lib_insert(_6e5d_vec_lib_Vec (*v),size_t pos)){
	assert((pos<=(v->len)));
	_6e5d_vec_lib_reserve(v,1);
	auto uint8_t (*p_ins) = ((void (*))(((uint8_t (*))(v->p))+(pos*(v->size))));
	for(auto uint8_t (*p) = ((void (*))(((uint8_t (*))(v->p))+((v->len)*(v->size))));(p>p_ins);(p-=(v->size))){
		memcpy(p,(p-(v->size)),(v->size));
	};
	((v->len)+=1);
	return p_ins;
}
void _6e5d_vec_lib_insertv(_6e5d_vec_lib_Vec (*v),size_t pos,void (*val)){
	auto void (*p) = _6e5d_vec_lib_insert(v,pos);
	memcpy(p,val,(v->size));
}
void _6e5d_vec_lib_srmi(_6e5d_vec_lib_Vec (*v),size_t idx){
	auto void (*p) = ((void (*))(((uint8_t (*))(v->p))+(idx*(v->size))));
	if((idx<((v->len)-1))){
		auto void (*lst) = _6e5d_vec_lib_last(v);
		assert((NULL!=_6e5d_vec_lib_last));
		memcpy(p,lst,(v->size));
	};
	((v->len)-=1);
}
void _6e5d_vec_lib_frombuf(_6e5d_vec_lib_Vec (*v),void (*p),size_t size,size_t len){
	((*v)=((_6e5d_vec_lib_Vec ){.p=p,.size=size,.len=len,.capacity=len,}));
}
size_t _6e5d_vec_lib_unwrap(_6e5d_vec_lib_Vec (*v),void (*(*p))){
	_6e5d_vec_lib_fit(v);
	((*p)=(v->p));
	return (v->len);
}
void _6e5d_vec_lib_copy(_6e5d_vec_lib_Vec (*i),_6e5d_vec_lib_Vec (*o)){
	((*o)=(*i));
	auto size_t len = ((i->capacity)*(i->size));
	((o->p)=malloc(len));
	assert((o->p));
	memcpy((o->p),(i->p),len);
}
