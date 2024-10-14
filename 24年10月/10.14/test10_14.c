#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//×Ö·û´®ÄæÐò£¨µÝ¹éÊµÏÖ£©
//×Ö·û´®ÄæÐò£¨Ñ­»·£©
//int main()
//{
//	char arr[] = "abcdef";
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//×Ö·û´®ÄæÐò

//void reverse(char arr[], int left, int right)
//{
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	if (left < right)
//	{
//		reverse(arr, left + 1, right - 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = strlen(arr) - 1;
//	reverse(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}

int DigiSum(unsigned int a)
{
	if (a > 9)
	{
		return DigiSum(a / 10) + a % 10;
	}
	else
		return a;
}

int main()
{
	unsigned int a = 0;
	scanf("%u", &a);
	int sum = DigiSum(a);
	printf("%d\n", sum);
	return 0;
}