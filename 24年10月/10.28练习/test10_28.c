#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////方法1
////int count_num_of_1(unsigned int n)
////{
////	int count = 0;
////	while (n)
////	{
////		if ((n % 2) == 1)
////		{
////			count++;
////		}
////		n = n / 2;
////	}
////	return count;
////}
//
////方法2
////int count_num_of_1(int n)
////{
////	int i = 0;
////	int count = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (((n >> i) & 1) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//
////方法3
//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;   
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}

//int count_diff(int m, int n)
//{
//	int count = 0;
	//int i = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if (((n >> i) & 1) != ((m >> i) & 1))
	//	{
	//		count++;
	//	}
	//}
//	int ret = m ^ n;//^异或操作符，相同为0，相异为0
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int ret = count_diff(m, n);
//	printf("%d\n", ret);
//	return 0;
//}
// 
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int is_leap_year(int y)
{
	return(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}

int main()
{
	int y = 0;
	int m = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &y, &m) == 2)
	{
		int d = days[m];
		if ((is_leap_year(y)==1) && m == 2)
		{
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}