#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("***********************\n");
	printf("***1. play  0.exit*****\n");
	printf("***********************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化数组的内容为指定的内容
	//mine 数组在没有布置雷的时候，都是“0”
	InitBoard(mine, ROWS, COLS,'0');
	//show 数组在没有布置雷的时候，都是“*”
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine, ROW, COL);
	//设置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
}

int main()
{
	int input = 0;
	//设置随机数的生成
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(input);
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}