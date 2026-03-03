#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <windows.h>

int main0000000000() {
	for (uint32_t index = 0; index < 10; index++)
	{
		printf("%" PRIu32 "\n",index);
		Sleep(100);
	}

}