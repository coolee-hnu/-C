#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("***1. play  0.exit*********\n");
	printf("***************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ�����̵ĺ���
	InitBoard(board, ROW, COL);
	//��ӡ���̵ĺ���
	DisplayBoard(board,ROW,COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		deafult:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}