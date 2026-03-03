#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main111() {
	bool is_vip = true;
	bool special_gift = true;

	uint16_t coins = 20;

	//房间a需要有vip
	if (is_vip) {
		printf("You are required to enter to the house a\n");
	}
	else {
		printf("You are not required to enter to the house a\n");
	}
	//房间b至少需要十个金币，且需要一个特殊道具
	if (coins >= 10 && special_gift) {
		printf("You are required to enter the house b\n");
	}
	else {
		printf("You are not required to enter the house b\n");
	}
	//房间c至少需要VIP身份，或者金币数量不得少于10
	if (is_vip || coins >= 10) {
		printf("You are required to enter the house c\n");
	}
	else {
		printf("You are not required to enter the house c\n");
	}
	//房间d玩家需要特殊道具或者VIP，并且金币数量不能少于5
	if ((is_vip || special_gift) && coins >= 5) {
		printf("You are required to enter the house d\n");
	}
	else {
		printf("You are not required to enter the house d\n");
	}
	return 0;
}