#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include "add.h"
//#include "sub.h"
//
//int Add(int x, int y)
//{
//	return x + y;
//}
#include "add.h"
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	//int ret = Sub(a, b);
	//printf("%d\n", ret);

	return 0;
}