#include <stdio.h>
#include <stdint.h>

int main8383(void)

{
	uint16_t height = 156;

	if (height >= 180) {
		printf("Your height is enought for army\n");
	}
	else if (height <= 160) {
		printf("you are really man!\n");
	}
	else {
		printf("You are passed!\n");
	}


}