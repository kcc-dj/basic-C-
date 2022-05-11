#include <stdio.h>

int gugu(int n1, int n2)
{
	int i,n3;
	if (n1 > n2)
	{
		n3 = n2;
		n2 = n1;
		n1 = n3;
	}
	for (i = n1; i < n2 + 1; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d X %d = %d \n",i,j,i*j);
		}
	}
	return 0;
}

int main(void)
{
	int num1,num2;
	printf("양의 정수 두개를 입력하시오. \n");
	scanf_s("%d %d",&num1,&num2);

	printf("구구단 출력 : \n");
	gugu(num1, num2);
	return 0;
}