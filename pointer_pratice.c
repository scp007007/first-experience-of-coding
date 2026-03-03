//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main()
//{
//	uint32_t number [] = {10,20,30,40,50,60,70,80,90,100};
//
//	uint32_t* pointer = number;
//
//	uint32_t size = sizeof(number)/sizeof(number[0]);
//
//	printf("数组number的长度是%d\n",size);
//
//	pointer += 5;
//	//将number【0】往后移动五个格子
//	printf("%d\n",*pointer);
//
//	pointer -= 5;
//	printf("%d\n",*pointer);
//
//	uint32_t* start_ptr = &number[0];
//
//	uint32_t* end_ptr = &number[size - 1];
//
//	printf("数组的距离是%td\n",end_ptr - start_ptr);
//}