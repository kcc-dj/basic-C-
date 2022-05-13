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
	printf("정수 10개를 입력하시오 \n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d",&num);
		arr[i] = num;
	}
	sz = sizeof(arr) / sizeof(int);
	printf("입력한 정수중 홀수는 : ");
	odd(arr,sz);
	printf("입력한 정수중 짝수는 : ");
	even(arr,sz);
	return 0;

}