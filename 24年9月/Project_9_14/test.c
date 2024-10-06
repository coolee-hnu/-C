#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void menu()
{
	printf("********************\n");
	printf("******* 1.play *****\n");
	printf("******* 0.exit *****\n");
	printf("********************\n");

}
void game()
{
	int guess = 0;
	//1.生成随机数
	//0~99--->1~100
	int ret = rand() % 100 + 1;//生成随机数的函数
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{printf("猜大了\n");
		}
		else if (guess < ret)
		{printf("猜小了\n");
		}
		else
		{printf("恭喜你，猜对了\n");
		break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择数字：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();//猜数字的整个逻辑
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);

	return 0;
}