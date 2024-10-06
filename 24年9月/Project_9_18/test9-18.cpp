#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void swap(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
////当实参传递给形参的时候，形参是实参的一份临时拷贝
////对形参的修改不能改变实参
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前，a = %d,b = %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后,a = %d,b = %d", a, b);
//
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//	
//}
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//int is_leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || n % 400 == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

int binary_search(int x[], int y, int z)
{
	int left = 0;
	int right = z - 1;
	while(left<=right)
	{
		int mid = (right - left) / 2 + left;
		if (x[mid] < y)
		{
			left = mid +1;
		}
		else if (x[mid] > y)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}

	}
	return -1;
}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 ,10 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标为：%d\n", ret);
	}

	return 0;
}