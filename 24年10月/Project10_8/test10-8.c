#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("&arr[%d] = %p\n", i, &arr[i]);
//	//}
//	///*for (i = sz - 1; i >= 0; i--)*/
//	///*{
//	//	printf("%d ", arr[i]);
//
//	//}*/
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	int j = 0;
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//		*/
//	//}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %p\n",i,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 19,81,72,63,54,45,37,22,1,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("----------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("---------------\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
int main()
{
	int arr[3][4];
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	int sz = sizeof(arr);
	printf("%d\n", sz);

	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	return 0;
}