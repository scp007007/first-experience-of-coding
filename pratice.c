#include <stdio.h>
#include <stdint.h>
#include <float.h>
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>

int main34(void)
{
	int_least32_t credit = INT32_MAX;

	printf("the max of INT is %" PRId32 "\n", credit);

	int_fast32_t number = 232323223;

	int16_t number1 = (int16_t)number;

	printf("the number is %" PRId16 "\n", number1);

	float number3 = 2.3333333f;
	printf("Using float = %f\n", number3);

	double number4 = 2.3333333f;
	printf("Using double = %f\n", number4);

	printf("the size of int = %zu\n", sizeof(int));
	
	const int16_t sun_flower = 123;
	printf("initally number %" PRId16 "\n", sun_flower);

	bool game_over = true;
	bool game_win = false;

	float max = FLT_MAX;
	printf("the maxium of float is %%e = %e", max);

	int number6;
	scanf_s("%d", &number6);
	printf("your number is = %d", number6);
	return 0;

	

}
