#include <stdio.h>
void odd(int *ar, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (ar[i] % 2 == 1)
		{
			printf("%d ",ar[i]);
		}
	}
	printf("\n");
}
void even(int* ar, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		if (ar[i] % 2 == 0)
		{
			printf("%d ", ar[i]);
		}
	}
	printf("\n");
}





int main(void)
{
	int i,num,sz;
	int arr[10];
	printf("���� 10���� �Է��Ͻÿ� \n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d",&num);
		arr[i] = num;
	}
	sz = sizeof(arr) / sizeof(int);
	printf("�Է��� ������ Ȧ���� : ");
	odd(arr,sz);
	printf("�Է��� ������ ¦���� : ");
	even(arr,sz);
	return 0;

}