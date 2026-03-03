#include <stdio.h>
#include <float.h>
#include <math.h>


int main23(void) {
	float Num1 = 12.3232f;
	double Num2 = 12.3232;

	float credit = 343.34f;

	float Max = FLT_MAX;
	
	printf("float max = %.3f\n" ,Max);//%.Nf中的N表示保留几位小数

	printf("Using float number = %.1f\n", Num1);

	printf("Using %%e  = %e\n", credit);

	printf("Using %%A = %A\n", credit);
	
	printf("Using double Number = %lf\n", Num2);
	//正无穷大

	float positive_infinity = INFINITY;

	printf("positive_infinity = %f\n" ,positive_infinity);

	//负无穷大
	float negative_infinity = -INFINITY;

	printf("negative_infinity = %f\n" ,negative_infinity);

	//nano
	float complexNumber = sqrt(-5);

	printf("sqrt -4 = %f\n" ,complexNumber);
	
	return 0;
}