#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//��ӡ����
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
			
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				//��ӡ�ָ���
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}

			}
		}
			printf("\n");
	}
}

//�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("���������\n");
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("���������꣺");
		scanf("%d %d", &x, &y);
		if (x>0 && x - 1 < row && y>0 && y - 1 < col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�˴������ӣ�����������\n");
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}
//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	int x = rand() % row;
	int y = rand() % col;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}

	}
}

//ƽ���жϺ���
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
				break;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col) 
{
	//�ж���һ��ߵ���Ӯ
	int i = 0;
	int count1 = 1;
	int count2 = 1;
	//�С���
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != ' ' && board[i][j + 1] == board[i][j])
			{
				count1++;
				if (count1 == play)
				{
					return board[i][j];
					break;
				}
			}
			if (board[j][i] != ' ' && board[j + 1][i] == board[j][i])
			{
				count2++;
				if (count2 == play)
				{
					return board[j][i];
					break;
				}
			}
		}
		count1 = 1;
		count2 = 1;
		
	}
	//�Խ���
	for (i = 0; i < row; i++)
	{
		if (board[i][i] != ' ' && board[i + 1][i + 1] == board[i][i])
		{
			count1++;
			if (count1 == play)
			{
				return board[i][i];
				break;
			}
		}
	}
	int n = 0;
	int j = 0;
	for (j = col-1; j < col; j--)
	{
		if (board[n][j] != ' ' && board[n + 1][j - 1] == board[n][j])
		{
			count1++;
			if (count1 == play)
			{
				return board[n][j];
				break;
			}
			n++;
		}
	}

	//ƽ��
	if (IsFull(board, row, col))
	{
		return 'Q';
	}

	//����
	return 'C';

}