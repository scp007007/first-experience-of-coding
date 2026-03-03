//#include <stdio.h>
//#include <stdint.h>
//#include <inttypes.h>
//#include <time.h>
//#include <stdlib.h>
//#define ROCK 1
//#define SCISSORS 2
//#define PAPER 3
//
//void play_instruction();
//uint32_t get_player_choice();
//uint32_t get_computer_choice();
//void winner(uint32_t player_choice,uint32_t computer_choice);
//void printf_choice(uint32_t choice);
//
//int main(void) {
//	srand(time(NULL));//生成随机数
//	
//	play_instruction();//打印游戏规则
//		
//	uint32_t player_choice = get_player_choice();
//
//	uint32_t computer_choice = get_computer_choice();//获取玩家与电脑的选择
//	
//	puts("玩家的选择是");
//	printf_choice(player_choice);
//	puts("电脑的选择是");
//	printf_choice(computer_choice);
//
//	winner(player_choice, computer_choice);//判断赢家
//
//}
//
//void play_instruction() {
//	puts("游戏规则");
//	puts("石头是1，剪刀是2，布是3，石头大于剪刀，剪刀大于布，布大于石头");
//	puts("=============================================================");
//}
//uint32_t get_player_choice() {	
//	uint32_t choice;
//
//	scanf_s("%" SCNu32, &choice);
//
//	while (choice < ROCK || choice > SCISSORS)
//	{
//		puts("请重新输入");
//		scanf_s("%" SCNu32, &choice);
//	}
//	return choice;
//}
//uint32_t get_computer_choice() {
//	return (rand() % (SCISSORS - ROCK + 1)) + ROCK;
//}
//void winner(uint32_t p_choice, uint32_t c_choice)
//{
//	if ((p_choice == ROCK&&c_choice == SCISSORS)||(p_choice == SCISSORS&&c_choice == PAPER)||(p_choice == PAPER &&c_choice == SCISSORS))
//	{
//		puts("你赢了");
//	}
//	else if (p_choice == c_choice)
//	{
//		puts("平局");
//	}
//	else {
//		puts("你输了");
//	}
//}
//void printf_choice(uint32_t choice) {
//	switch (choice)
//	{
//	case SCISSORS:
//		puts("剪刀");
//		break;
//	case PAPER: 
//		puts("布");
//		break;
//	case ROCK: 
//		puts("石头");
//		break;
//	default:
//		break;
//	}
//}