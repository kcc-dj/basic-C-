#include <stdio.h>

double CelToFah (double num)
{
	return 1.8 * num + 32;
}

double FahToCel(double num)
{
	return (num - 32) / 1.8;
}

int n1;
double n2;
int main(void)
{
	printf("�Է��� �µ��� 1. �����µ� 2.ȭ���µ� \n");
	scanf_s("%d",&n1);
	if (n1 == 1)
	{
		printf("�����µ��� �Է��Ͻÿ� \n");
		scanf_s("%lf",&n2);
		printf("ȭ���µ��� ��ȯ�� ���� %lf \n",CelToFah(n2));
	}
	else if (n1 == 2)
	{
		printf("ȭ���µ��� �Է��Ͻÿ� \n");
		scanf_s("%lf", &n2);
		printf("�����µ��� ��ȯ�� ���� %lf \n", FahToCel(n2));
	}

	return 0;
}