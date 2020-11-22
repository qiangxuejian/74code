#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int tmp = 0;
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	int i = 0;
	for (i = a;; i++)
	{
		if (i%a == 0 && i%b == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	
	return 0;
}