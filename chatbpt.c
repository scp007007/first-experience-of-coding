#include <stdio.h>
#include <stdint.h>

int main43424(void)

{
	int8_t mychar = 127;

	int16_t myshort = 32767;

	int32_t myint = 2147483647;
	
	uint8_t myunsignedchar = 3834884;

	uint16_t myunsignedshort = 384983490;

	uint32_t myunsigedint = 4294967295;

	uint8_t myunsigedchar = 255;
	
	printf("the size of int =%zu byte(s)\n",sizeof(myint));

	printf("the size of char = %zu byte(s)\n",sizeof(mychar));

	printf("the size of unsignedint = %zu byte(s)",sizeof(myunsigedint));

	printf("the size of unsignedchar = %zu byte(s)",sizeof(myunsignedchar));

	printf("the size of unsignedshort = %zu byte(s)",sizeof(myunsignedshort));

	printf("the size of short = %zu byte(s)",sizeof(myshort));
	

}
