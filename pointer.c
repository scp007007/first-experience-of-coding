//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//int main()
//{
//	uint32_t arrays[] = {10,20,30,40,50,60,70,80,90,100};
//
//	uint32_t* array_1 = arrays;
//
//	size_t size_arrays = sizeof(arrays) / sizeof(arrays[0]);
//
//	printf("previous array = {");
//	for (uint32_t i = 0; i < size_arrays; ++i)
//	{
//		printf("%" PRIu32 " ",arrays[i]);
//	}
//	printf("}\n\n");
//
//	for (size_t i = 0; i < size_arrays; ++i)
//	{
//		*(array_1 + i) += 5;
//		printf("%" PRIu32 " \n",arrays[i]);
//	}
//}