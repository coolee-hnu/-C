#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[5] = { 0 };
//	int max = 0;
//	int min = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("max=%d\nmin=%d\n", max, min);
//	return 0;
//}

//int main()
//{
//	char ch = 0;
//	//scanf读取成功的时候，返回的是读取的数据的个数
//	//scanf函数在读取失败的时候返回EOF
//	while (scanf("%c", &ch)==1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	return 0;
//
//int main()
//{
//	char ch = 0;
//	//%c的前面加空格
//	//跳过下一个字符之前的所有空白字符
//	while (scanf(" %c", &ch) == 1)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("%c is an alphbet.\n", ch);
//		else
//			printf("%c is not an alphbet.\n", ch);
//		//getchar();
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[3] = { 0 };
//	int max = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int sum = 0;
		int j = 0;
		for (j = 1; j <= 4; j++)
		{
			int k = (int)pow(10, j);
			sum += (i % k) * (i / k);
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}