#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
	int i = 1;
	printf("0到%d的水仙花数为:\n", 99999);
	for (; i <= 99999; i++)
	{
		int count = 1;//水仙花数至少是一位
		int temp = i;
		int sum = 0;
		while (temp / 10)//利用while循环判断该数的位数
		{
			count++;
			temp /= 10;
		}
		temp = i;//重新给temp赋值，因为temp在while循环中已经被修改了
		while (temp)//判断该数是否是水仙花数
		{
			sum += pow(temp % 10, count);//对temp求余是求它的每一位数，再利用pow函数对其每一位求n次方，n为它的位数
			temp /= 10;//对temp除10是每次将它的最低位除去
		}
		if (i == sum)
		{
			printf("%d ", sum);
		}
	}
	system("pause");
	return 0;
}