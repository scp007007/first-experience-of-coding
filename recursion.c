//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//
//uint32_t factorical(uint32_t n, uint32_t acc);
//
//int main(void) {
//	uint32_t number = 7;
//	
//	printf("%" PRIu32 "£¡µÄ½×³ËÊÇ%" PRIu32 "\n",number,factorical(number,1));
//
//	return 0;
//}
//
//uint32_t factorical(uint32_t n, uint32_t acc) {
//	if(n == 0){
//		return acc;
//	}
//	else {
//		return factorical(n - 1, acc * n);
//	}
//}