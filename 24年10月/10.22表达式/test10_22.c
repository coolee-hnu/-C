#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////整型提升
////int - 4个字节，32个比特位
////char - 1个字节，8个比特位
//int main()
//{
//	char a = 5;
//	//00000000 00000000 00000000 00000101 - a
//	//00000101 - a
//	char b = 126;
//	//00000000 00000000 00000000 01111110 - b
//	//01111110 - b
//	char c = a + b;
//	//00000000 00000000 00000000 10000011 - a+b
//	//10000011 - c
//	//11111111 11111111 11111111 10000011 - c补码
//	//11111111 11111111 11111111 10000010 - c反码
//	//10000000 00000000 00000000 01111101 - c原码
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}
//int fib(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n == 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int del = 0;
	scanf("%d", &del);
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}