#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>



int main43(void) {
	uint32_t number1 = UINT32_MAX;

	uint8_t number2 = (uint8_t) number1;

	printf("numnber2 convertd to = %" PRIu8 "\n",number2);

	printf("number1 = %" PRIu32 "\n",number1);

	return 0;
}