#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
int main3443(void)

{
	int16_t a = 1;
	int16_t b = 0;
	int16_t result = a && b;
	int16_t number = a || b;

	printf("result = %d\t", result);
	printf("number = %d\n\a", number);

	int num = 34;
	int add_num = 12;
	int sub_num = 2;
	int div_num = 3;
	int mol_num = 4;
	int mul_num = 3;
	int left_shift = 4;
	int right_shift = 2;
	int bit_or = 0b11111110;
	int bit_and = 0b11001110;
	int bit_xor = 0b11110000;
	int or = 3;
	int and = 23;

	num += add_num;
	printf("%d\n", num);
	num -= sub_num;
	printf("%d\n", num);
	num *= mul_num;
	printf("%d\n", num);
	num /= div_num;
	printf("%d\n", num);
	num %= mol_num;
	printf("%d\n", num);
	num <<= left_shift;
	printf("%d\n", num);
	num >>= right_shift;
	printf("%d\n", num);
}