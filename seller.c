#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int mainU() {
	const uint32_t PRICE = 5;//饮料价格为5美金
	uint32_t coins;//投入的硬币金额只能为1，3，5美金
	uint32_t balance = 0;//零钱

	puts("您好，欢迎使用自动贩卖机，请投入硬币");
	puts("本贩卖机仅支持1，3，5元硬币");

	while (balance<PRICE) {
		scanf_s("%" PRIu32 "",&coins);

		if (coins == 1 || coins == 3 || coins == 5) {
			balance += coins;
			printf("您已经投入%" PRIu32 "\n",balance);
		}
		else {
			printf("您输入的金额不符合要求，请重新投币\n");
		}
	}
	//找零
	if (balance > PRICE) {
		printf("退给您的金额是%" PRIu32 "\n",balance - PRICE);
	}
	puts("感谢您的购买，欢迎下次光临");
}