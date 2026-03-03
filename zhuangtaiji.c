#include <stdio.h>
#include <stdint.h>

int main4324() {
	uint32_t traffic_light = 1;

	switch (traffic_light)
	{
	case 0: 
		puts("ºìµÆ");
		traffic_light = 1;
		break;
	case 1:
		puts("ÂÌµÆ");
		traffic_light = 2;
		break;
	case 2:
		puts("»ÆµÆ");
		break;
	default:
		puts("????");
	}
}