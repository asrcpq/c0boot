#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include<assert.h>
#include<time.h>
void _6e5d_c0date_lib_usleep(uint64_t u);
uint64_t _6e5d_c0date_lib_now();
uint64_t _6e5d_c0date_lib_fromymd(uint64_t ymd);
void _6e5d_c0date_lib_usleep(uint64_t u){
	auto struct timespec ts = {.tv_sec=(u/1000000),.tv_nsec=(1000*(u%1000000)),};
	nanosleep((&ts),NULL);
}
uint64_t _6e5d_c0date_lib_now(){
	auto struct timespec spec;
	clock_gettime(CLOCK_REALTIME,(&spec));
	return ((uint64_t )(((spec.tv_sec)*1000000)+((spec.tv_nsec)/1000)));
}
uint64_t _6e5d_c0date_lib_fromymd(uint64_t ymd){
	auto uint64_t day = (ymd%100);
	(ymd/=100);
	assert((day>0));
	auto uint64_t month = (ymd%100);
	assert((month>0));
	(month-=1);
	(ymd/=100);
	auto struct tm t = {.tm_year=100,.tm_mon=month,.tm_mday=day,};
	return ((uint64_t )mktime((&t)));
}
