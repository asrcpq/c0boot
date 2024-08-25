#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
#include<unistd.h>
static size_t parent_dir_idx(char (*path),size_t j);
size_t _6e5d_c0path_lib_normalize(char (*path));
void _6e5d_c0path_lib_normrel(char (*rel));
static size_t parent_dir_idx(char (*path),size_t j){
	(j-=2);
	for(;;(j-=1)){
		if(('\x2f'==path[j])){
			(j+=1);
			break;
		};
		if((j==1)){
			break;
		};
	};
	return j;
}
size_t _6e5d_c0path_lib_normalize(char (*path)){
	if(((*path)!='\x2f')){
		return 0;
	};
	auto size_t prev = 1;
	auto size_t i = 1;
	auto size_t j = 1;
	for(;;(i+=1)){
		auto bool last = false;
		if((path[i]==0)){
			(last=true);
		}else if((path[i]!='\x2f')){
			continue;
		};
		if(((i==prev)||((i==(prev+1))&&('\x2e'==path[prev])))){
			;
		}else if(((i==(prev+2))&&('\x2e'==path[prev])&&('\x2e'==path[(prev+1)]))){
			if((j>=3)){
				(j=parent_dir_idx(path,j));
			};
		}else if((prev>j)){
			auto size_t len = (i-prev);
			memmove((path+j),(path+prev),len);
			(j+=len);
			(path[j]='\x2f');
			(j+=1);
		}else if(true){
			(j=(i+1));
		};
		(prev=(i+1));
		if(last){
			break;
		};
	};
	if((j>1)){
		(j-=1);
	};
	(path[j]=0);
	return j;
}
static thread_local char normrelPath[4096];
void _6e5d_c0path_lib_normrel(char (*rel)){
	(normrelPath[0]=0);
	if(('\x2f'!=rel[0])){
		getcwd(normrelPath,4096);
		strcat(normrelPath,"/");
	};
	strcat(normrelPath,rel);
	_6e5d_c0path_lib_normalize(normrelPath);
	strcpy(rel,normrelPath);
}
