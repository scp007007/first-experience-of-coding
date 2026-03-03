#include <stdio.h>

int main0(void)

{
	unsigned short weight , height;

	weight = 400;
	height = 800;
	
	printf("(x,y) = (%hu,%hu)\n",weight , height);
	
	printf("size of int = %zu\n",sizeof(int));

	printf("size of long = %zu\n",sizeof(long));

	printf("size of long long = %zu\n",sizeof(long long));

	printf("size of short = %zu\n",sizeof(short));

}