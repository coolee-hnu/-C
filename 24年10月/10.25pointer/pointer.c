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
//	*pi = 100;//int*��float*����ͨ��
//	*pf = 100.0;
//	return 0;
//}

//int main()
//{
//	int* p;
//	//pû�г�ʼ��������ζ��û����ȷ��ָ��
//	//һ���ֲ���������ʼ���Ļ����ŵ������ֵ��0xccccccc
//	*p = 10;//�Ƿ������ڴ棬�����p����Ұָ��
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
//	int* p= test();//p-Ұָ�룬�����ֲ�����a�������Զ�����
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