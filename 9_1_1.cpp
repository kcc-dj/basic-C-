#include <stdio.h>

int biggest (int num1, int num2, int num3)
{
	if (num1 > num2 && num1 > num3)
	{
		return num1;
	}
	else if (num2 > num1 && num2 > num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}

int smallest(int num1, int num2, int num3)
{
	if (num1 < num2 && num1 < num3)
	{
		return num1;
	}
	else if (num2 < num1 && num2 < num3)
	{
		return num2;
	}
	else
	{
		return num3;
	}
}

int n1, n2, n3;
int main(void)
{
	printf("���� ���� �Է��Ͻÿ� \n");
	scanf_s("%d %d %d",&n1,&n2,&n3);
	printf("���� ū ������ %d \n",biggest(n1,n2,n3));
	printf("���� ���� ������ %d \n", smallest(n1,n2,n3));

	return 0;
}