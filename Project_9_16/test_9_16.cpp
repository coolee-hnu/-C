#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//again:
//	printf("请输入我是猪，否则你的电脑将在1分钟内关机\n");
//	system("shutdown  -s -t 60");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
int max(int x,int y)
{
	
	if (x >= y)
	{
		return(x);
	}
	else if (x < y)
	{
		return(y);
	}
	
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = max(a, b);
	printf("%d\n", m);
	return 0;
}