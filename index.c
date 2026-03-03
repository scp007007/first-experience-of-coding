//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <stdbool.h>
//
//int main()
//{
//	size_t array[] = {10,20,30,40,50,94};
//
//	uint32_t* start_ptr = &array;
//
//	size_t target = 30;
//
//	size_t* target_ptr = NULL;
//
//	size_t size = sizeof(array) / sizeof(array[0]);
//
//	bool found = false;
//
//	size_t index = 0;
//
//	for (size_t i = 0; i < size; i++)
//	{
//		if (*(start_ptr + i) == target)
//		{
//			found = true;
//			index = i;
//			target_ptr = start_ptr + i;
//		}
//
//	}
//	if (found)
//		{
//			printf("target number = %" PRIu32 ",index = %zu",*target_ptr,index);
//		}
//}