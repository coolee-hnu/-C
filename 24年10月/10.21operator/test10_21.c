#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;//p就是指针变量
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//~是按二进制位取反
//	//0000 0000 0000 0000 0000 0000 0000 0011 - 原码、补码、反码
//	//1111 1111 1111 1111 1111 1111 1111 1100 - 补码
//	//1111 1111 1111 1111 1111 1111 1111 1011 - 补码-1
//	//1000 0000 0000 0000 0000 0000 0000 0100 - -4
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	a |= (1 << 4);
//	printf("%d\n", a);
//	a &= ~(1 << 4);
//	printf("%d\n", a);
//	//0000 0000 0000 0000 0000 0000 0000 0011 - 3
//	//0000 0000 0000 0000 0000 0000 0000 0001 - 1
//	//0000 0000 0000 0000 0000 0000 0001 0000 - 1<<4
//	//0000 0000 0000 0000 0000 0000 0001 0011 - 13|1<<4
//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = ++a;//前置++，先++后使用
//	//a=a+1,b=a
//	int c = a++;//后置++，先使用后++
//	//b=a,a=a+1
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//强制转换类型
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	"abc" == "abcdef";//这样写是在比较2个字符串的首字符的地址
//	//两个字符串的比较应该用strcmp
//	return 0;
//}

//&&  左边为假，右边就不计算了
//||  左边为真，右边就不计算了
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++&&++b&&d++;
//	i = a++ || ++b || d++;
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	return 0;
//}

////三目操作符
//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}
//
//	(a > 5) ? (b = 3) : (b = -3);
//	b = (a > 5 ? 3 : -3);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	//arr[7] -->*(arr+7) -->*(7+arr) -->7[arr]

	//arr是数组首元素的地址
	//arr+7就是跳过7个元素，指向了第8个元素
	//*（arr+7）就是第8个元素
	arr[7] = 8;
	7[arr] = 9;

	return 0;
}