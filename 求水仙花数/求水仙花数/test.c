#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
	int i = 1;
	printf("0��%d��ˮ�ɻ���Ϊ:\n", 99999);
	for (; i <= 99999; i++)
	{
		int count = 1;//ˮ�ɻ���������һλ
		int temp = i;
		int sum = 0;
		while (temp / 10)//����whileѭ���жϸ�����λ��
		{
			count++;
			temp /= 10;
		}
		temp = i;//���¸�temp��ֵ����Ϊtemp��whileѭ�����Ѿ����޸���
		while (temp)//�жϸ����Ƿ���ˮ�ɻ���
		{
			sum += pow(temp % 10, count);//��temp������������ÿһλ����������pow��������ÿһλ��n�η���nΪ����λ��
			temp /= 10;//��temp��10��ÿ�ν��������λ��ȥ
		}
		if (i == sum)
		{
			printf("%d ", sum);
		}
	}
	system("pause");
	return 0;
}