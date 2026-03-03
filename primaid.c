//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main() {
//	puts("请输入金字塔的层数");
//	
//	uint32_t levels;
//
//	scanf_s("%" SCNu32 ,&levels);
//
//	puts("金字塔如下");
//
//	for (uint32_t i = 1; i <= levels; i++)
//	{
//		uint32_t space = levels - i;
//		
//		for (uint32_t j = 1; j <= space; j++)
//		{
//			printf("  ");
//		}
//		for (uint32_t j = 1; j < i; j++)
//		{
//			printf("%" PRIu32 " ",j);
//		}
//		for (uint32_t j = i; j >= 1; j--)
//		{
//			printf("%" PRIu32 " ",j);
//		}
//		printf("\n");
//	}
//}