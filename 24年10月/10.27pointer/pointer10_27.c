#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//|指针减指针|得到的是之间元素的个数
//	//不是所有指针都能直接相减
//	//必须同一空间的指针相减
//	return 0;
//}
#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return(str - start);
//}
//int main()
//{
//	int len = my_strlen("zbcdef");
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa是一个指针变量，一级指针
//	int** ppa = &pa;//ppa是一个二级指针
//	**ppa = 20;
//	//*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//指针数组
//存放指针的数组就是指针数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//parr就是存放数组的指针
//	//指针数组
//	int* parr[10] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//	return 0;
//}

int main()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* parr[3] = { arr1,arr2,arr3 };
	int i = 0;
	for(i=0;i<3;i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);//arr[i] = *(arr+i)
		}
		printf("\n");
	}
	return 0;
}