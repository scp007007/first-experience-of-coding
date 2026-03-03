//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <time.h>
//#include <stdlib.h>
//
//int main89() {
//	uint32_t scret_number;
//	uint32_t number;
//
//	srand(time(NULL));
//	scret_number = rand()%100 + 1;
//
//	puts("猜猜我输入的是那个数字？");
//
//	do {
//		scanf_s("%" PRIu32 "",&number);
//		if (scret_number > number) {
//			puts("数字太小了");
//		}
//		else if (scret_number < number) {
//			puts("数字太大了");
//		}
//	} while (number != scret_number);
//}