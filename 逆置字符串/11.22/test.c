#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void invert(char *ch, int start, int end)
{
	char temp;
	while (start < end)
	{
		temp = ch[start];
		ch[start] = ch[end];
		ch[end] = temp;
		start++;
		end--;

	}
}
void invertsentence(char *arr)
{
	int len = 0;
	int start = 0;
	int end = 0;
	len = strlen(arr);
	invert(arr, start, len - 1);
	while (arr[start] != '\0')
	{
		if (arr[end] != ' '&&arr[end] != '\0')
		{
			end++;
		}
		else
		{
			invert(arr, start, end - 1);
			end++;
			start = end;

		}
	}
}
int main()
{
	char a[100];
	gets(a);
	invertsentence(a);
	puts(a);
	return 0;
}



















