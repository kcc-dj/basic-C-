#include <stdio.h>

int Fibo (int num)
{
	int i,j=1,k=0;
	for (i = 0 ; i < num + 1; i++)
	{
		printf("%d ", k);
		k = k + j;
		j = k-j;
	}
	return 0;
}

int n1;

int main(void)
{
	printf("���ϴ� �Ǻ���ġ ���� Ƚ���� �Է��϶�.\n");
	scanf_s("%d",&n1);
	Fibo(n1);

	return 0;
}