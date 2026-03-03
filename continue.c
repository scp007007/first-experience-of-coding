#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int maind() {
	uint32_t sum = 0;
	
	uint32_t squre_of_number;

	puts("请输入数字");

	scanf_s("%" PRIu32 "",&squre_of_number);

	for (uint32_t number = 0; number <= squre_of_number; number++)
	{
		sum += number * number;
	}

	printf("您的输出结果是%" PRIu32 "\n",sum);

	return 0;
}