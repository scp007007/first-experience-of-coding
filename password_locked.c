#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int mainh() {
	uint32_t attempt_number = 24;
	bool locked = attempt_number >= 3;

	if (locked) {
		puts("拒绝继续进行下去");
		return 0;
	}
	puts("可以继续进行");
	return 0;
}