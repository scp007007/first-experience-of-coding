#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <math.h>

int main2(void) {
	uint16_t apples = 13;
	uint16_t peaces = 5;

	uint16_t full_fruit = apples + peaces;
	uint16_t subtraction = apples - peaces;
	double kaifang = sqrt(peaces);
	uint16_t five_apples = 5 * apples;
	uint16_t average = apples / 5;
	uint16_t remain = apples % 5;
	
	printf("所有的水果数量为%" PRIu16 "个\n",full_fruit);
	printf("苹果数量减去桃子数量为%" PRIu16 "个\n",subtraction);
	printf("桃子数量开方为%f个\n" , kaifang);
	printf("五个苹果数量为%" PRIu16 "个\n" ,five_apples);
	printf("苹果每个人分5个可以分给%" PRIu16 "人\n" , average);
	printf("苹果平均分给5个人还剩下%" PRIu16 "个\n" ,remain);
}