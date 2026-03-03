#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int mainskfdj() {
	uint32_t sum = 0;
	char input;

	while (1) {
		puts("请输入数字1-9或者输入字符q");
		scanf_s(" %c",&input,1);//当我们输入了一个1，相当于输入了1\n,而前面的空格可以解决回车问题
		
		if (input == 'q') {
			break;
		}
		if (input >= '0' || input <= '9') {
			sum += input - '0';
		}
		else {
			puts("请输入一个数字或者q");
		}
	}
	printf("您的求和数字为%" PRIu32 "",sum);
}