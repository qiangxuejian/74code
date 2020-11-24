#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int tmp = 0;
	int i = 0;
	int a = 0;
	//int n = 0;
	int sum = 0;
	scanf("%d", &a);
	for (i=0;i<5;i++)
	{
		tmp = tmp * 10 + a;
		sum = sum + tmp;
	}
	printf("%d", sum);
	return 0;
}