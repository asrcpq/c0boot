#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
typedef struct _6e5d_vec_Vec _6e5d_vec_Vec;
struct _6e5d_vec_Vec{
	size_t size;
	size_t capacity;
	size_t len;
	void (*p);
};
void _6e5d_vec_init(_6e5d_vec_Vec (*v),size_t size);
size_t _6e5d_vec_unwrap(_6e5d_vec_Vec (*v),void (*(*p)));
void _6e5d_vec_pushv(_6e5d_vec_Vec (*v),void (*val));
void (*_6e5d_vec_push(_6e5d_vec_Vec (*v)));
typedef struct _6e5d_ltr2_Ltr _6e5d_ltr2_Ltr;
struct _6e5d_ltr2_Ltr{
	uint64_t len;
	void (*value);
};
void _6e5d_ltr2_deinit(_6e5d_ltr2_Ltr (*l));
int8_t skipws(uint8_t (*(*p)));
uint8_t bfhex(uint8_t p);
uint8_t bf2hex(uint8_t (*p));
void parseEscaped(uint8_t (*(*p)),_6e5d_ltr2_Ltr (*ltr));
void parseLiteral(uint8_t (*(*p)),_6e5d_ltr2_Ltr (*ltr));
void parseList(uint8_t (*(*p)),_6e5d_ltr2_Ltr (*ltr));
void _6e5d_ltr2_parse(void (*s),_6e5d_ltr2_Ltr (*ltr));
void _6e5d_ltr2_deinit(_6e5d_ltr2_Ltr (*l)){
	if(((1lu<<63)&(l->len))){
		for(auto _6e5d_ltr2_Ltr (*ll) = (l->value);(ll<(((_6e5d_ltr2_Ltr (*))(l->value))+((size_t )((1lu<<63)^(l->len)))));(ll+=1)){
			_6e5d_ltr2_deinit(ll);
		};
	};
	free((l->value));
}
int8_t skipws(uint8_t (*(*p))){
	auto uint8_t (*s) = (*p);
	auto bool incomment = false;
	auto int8_t ret;
	while(true){
		auto uint8_t ch = (*s);
		if((ch==0)){
			return 0;
		}else if((ch=='\x0a')){
			(incomment=false);
		}else if(incomment){
			;
		}else if((ch=='\x23')){
			(incomment=true);
		}else if((ch=='\x5d')){
			(ret=0);
			break;
		}else if((ch=='\x5b')){
			(ret=2);
			break;
		}else if((ch=='\x22')){
			(ret=3);
			break;
		}else if(((ch!='\x20')&&(ch!='\x09'))){
			(ret=1);
			break;
		};
		(s+=1);
	};
	if((ret!=1)){
		(s+=1);
	};
	((*p)=s);
	return ret;
}
uint8_t bfhex(uint8_t p){
	if(((p<='\x39')&&(p>='\x30'))){
		return (p-'\x30');
	}else if(((p<='\x46')&&(p>='\x41'))){
		return (10+(p-'\x41'));
	}else if(((p<='\x66')&&(p>='\x61'))){
		return (10+(p-'\x61'));
	}else if(true){
		fprintf(stderr,"invalid ch %c""\x0a""",p);
		abort();
	};
}
uint8_t bf2hex(uint8_t (*p)){
	auto uint8_t b1 = bfhex((*p));
	auto uint8_t b2 = bfhex((*(1+p)));
	return (((uint8_t )(b1<<4))+b2);
}
void parseEscaped(uint8_t (*(*p)),_6e5d_ltr2_Ltr (*ltr)){
	auto _6e5d_vec_Vec ov;
	auto _6e5d_vec_Vec (*v) = (&ov);
	_6e5d_vec_init(v,1);
	auto uint8_t (*s) = (*p);
	auto size_t esc = 0;
	while(true){
		auto uint8_t ch = (*s);
		if(((esc==0)&&(ch=='\x5c'))){
			(esc=1);
			(s+=1);
			continue;
		}else if(((esc==1)&&(ch!='\x78'))){
			if((ch!='\x0a')){
				_6e5d_vec_pushv(v,s);
			};
			(esc=0);
		}else if(((esc>0)&&(esc<3)&&(ch!=0))){
			(esc+=1);
		}else if((esc==3)){
			auto uint8_t byte = bf2hex((s-1));
			_6e5d_vec_pushv(v,(&byte));
			(esc=0);
		}else if((ch=='\x09')){
			;
		}else if(((ch=='\x22')||(ch==0))){
			(s+=1);
			break;
		}else if(true){
			_6e5d_vec_pushv(v,s);
		};
		(s+=1);
	};
	((ltr->len)=_6e5d_vec_unwrap(v,(&(ltr->value))));
	((*p)=s);
}
void parseLiteral(uint8_t (*(*p)),_6e5d_ltr2_Ltr (*ltr)){
	auto _6e5d_vec_Vec ov;
	auto _6e5d_vec_Vec (*v) = (&ov);
	_6e5d_vec_init(v,1);
	auto uint8_t (*s) = (*p);
	while(true){
		auto uint8_t ch = (*s);
		if(((ch=='\x20')||(ch=='\x0a')||(ch=='\x5d')||(ch==0))){
			break;
		};
		_6e5d_vec_pushv(v,s);
		(s+=1);
		((*p)=s);
	};
	((ltr->len)=_6e5d_vec_unwrap(v,(&(ltr->value))));
}
void parseList(uint8_t (*(*p)),_6e5d_ltr2_Ltr (*ltr)){
	auto _6e5d_vec_Vec ov;
	auto _6e5d_vec_Vec (*v) = (&ov);
	_6e5d_vec_init(v,((size_t )(&((_6e5d_ltr2_Ltr (*))0)[1])));
	while(true){
		auto int8_t ret = skipws(p);
		if((0==ret)){
			break;
		};
		auto _6e5d_ltr2_Ltr (*nxt) = _6e5d_vec_push(v);
		if((ret==1)){
			parseLiteral(p,nxt);
		}else if((ret==2)){
			parseList(p,nxt);
		}else if((ret==3)){
			parseEscaped(p,nxt);
		};
	};
	((ltr->len)=((1lu<<63)|_6e5d_vec_unwrap(v,(&(ltr->value)))));
}
void _6e5d_ltr2_parse(void (*s),_6e5d_ltr2_Ltr (*ltr)){
	auto uint8_t (*c) = s;
	parseList((&c),ltr);
}
