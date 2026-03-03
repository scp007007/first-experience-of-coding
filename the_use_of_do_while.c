#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int mainI() {
	uint32_t choice;
	
	do {
		puts("*****菜单界面******");
		puts("1.新游戏");
		puts("2.载入游戏");
		puts("3.退出游戏");

		scanf_s("%" PRIu32 "", &choice);

		switch (choice)
		{
		case 1:
			printf("开始游戏");
			break;
		case 2:
			printf("游戏加载中");
			break;
		case 3:
			printf("游戏结束");
			break;
		default:
			printf("无效输入");
		}
		break;
	} while (choice != 3);
}