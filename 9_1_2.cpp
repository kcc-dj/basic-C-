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
	printf("입력할 온도는 1. 섭씨온도 2.화씨온도 \n");
	scanf_s("%d",&n1);
	if (n1 == 1)
	{
		printf("섭씨온도를 입력하시오 \n");
		scanf_s("%lf",&n2);
		printf("화씨온도로 변환된 값은 %lf \n",CelToFah(n2));
	}
	else if (n1 == 2)
	{
		printf("화씨온도를 입력하시오 \n");
		scanf_s("%lf", &n2);
		printf("섭씨온도로 변환된 값은 %lf \n", FahToCel(n2));
	}

	return 0;
}