#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa=%p\n", pa);
//	printf("pa=%p\n", pa+1);
//	printf("pa=%p\n", pc);
//	printf("pa=%p\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pi = &a;
//	float* pf = &a;
//	*pi = 100;//int*和float*不能通用
//	*pf = 100.0;
//	return 0;
//}

//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的话，放的是随机值：0xccccccc
//	*p = 10;//非法访问内存，这里的p就是野指针
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;//&arr[0]
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p= test();//p-野指针，函数局部变量a出函数自动销毁
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 100;
//
//	int* p2 = NULL;
//	*p2 = 100;//err
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	arr[i] = 1;
	//}
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		//*p = 1;
		//p++;
		*(p + i) = 1;
	}
	return 0;
}