#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py= tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 3; n <= 100; n+=3)
//	{
//		
//		
//			printf("%d ", n);
//	
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a < b) ? a : b;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 9; i <= 100; i++)
//	{
//		if (i % 10 == 9 )
//		{
//			count++;
//			printf("%d ", i);
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + flag * (1.0 / i);
		flag = -flag;

	}
	printf("%lf\n", sum);
	return 0;
}