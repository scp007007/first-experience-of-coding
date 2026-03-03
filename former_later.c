#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <inttypes.h>
#include <stdbool.h>

int main03443 (void){
	uint16_t value = 5;
	uint16_t result = value++;

	printf("value = %" PRIu16 ",result = %" PRIu16 "\n", value ,result);

	value = 5;//当要初始化同一个变量名时候，不用再重新使用int。
	result = ++value;

	printf("value = %" PRIu16 ", result = %" PRIu16 "\n",value ,result);
	
	uint32_t num = 12;
	num = num << 10;
	printf("num = %" PRIu32 "\n",num);

	uint32_t bigger = 123;
	uint32_t lesser = 12;

	bool big = bigger > lesser;
	bool less = bigger < lesser;
	bool equal = bigger == lesser;

	printf("bigger > lesser = %" PRIu32 "\n",big);
	printf("bigger < lesser = %" PRIu32 "\n",less);
	printf("bigger == lesser = %" PRIu32 "\n",equal);

	uint32_t score = 90;

	
	printf("你的成绩是%s\n", score >= 90 ? "优秀" : "垃圾");


}