#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%u ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	/*while (num)
	{
		printf("%d ", num % 10);
		num = num / 10;
	}*/

	print(num);
	return 0;
}