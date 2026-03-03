#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int mainfd(){
	uint32_t const RUNINGNUMBER = 10;//该常量的作用是为了条件的判断，
	
	uint32_t current_rounds = 0;

	puts("Start running");//循环的目的

	while (current_rounds < RUNINGNUMBER)//条件上的判断
	{
		current_rounds++;//迭代点
		
		printf("你现在跑了第%" PRIu32 "圈\n",current_rounds);
	}
	return 0;
}