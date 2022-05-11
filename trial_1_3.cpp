#include <stdio.h>
int md(int n1, int n2)
{
	int n3,j;
	if(n1 > n2)
	{
		n3 = n1;
		n1 = n2;
		n2 = n3;
	}
	for (int i = 1; i < n2 + 1; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			j = i;
		}
	}
	printf("%d \n", j);
	return 0;
}

int main(void)
{
	int num1,num2;
	printf("양의 정수 두개를 입력하시오. \n");
	scanf_s("%d %d",&num1,&num2);

	printf("둘의 최대 공약수는 : ");
	md(num1, num2);
	return 0;
}