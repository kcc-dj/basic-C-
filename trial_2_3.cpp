#include <stdio.h>

int main(void)
{
	int i,num;
	int *ptr1, *ptr2;
	int arr[10];
	ptr1 = &arr[0];
	ptr2 = &arr[9];
	printf("������ ������ �Է��Ͻÿ� \n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d",&num);
		if (num % 2 == 1)
		{
			*ptr1 = num;
			ptr1++;
		}
		else
		{
			*ptr2 = num;
			ptr2--;
		}
		
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}