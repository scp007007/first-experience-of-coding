#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <windows.h>

int function = 10;

int main00() {
	const uint32_t total_steps = 100;

	for (uint32_t i = 0; i <= total_steps; i++)
	{
		printf("\r[");
		for (uint32_t j = 0; j < i; j++)
		{
			printf("#");
		}
		//Sleep(10);
		printf("%" PRIu32 "%%",(i * 100)/100);
		fflush(stdout);//显示任务的实时进展
	}
	printf("]\n");
	puts("任务完成");
}