#include <stdio.h>

int main(void)
{
	int arr1[5],i,min,max,sum=0;
	printf("���� 5�� �Է��Ͻÿ� \n");
	
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	min = arr1[0];
	max = arr1[0];
	for (i = 0; i < 5; i++)
	{
		sum += arr1[i];
		if (arr1[i] < min)
		{
			min = arr1[i];
		}
		if (arr1[i] > max)
		{
			max = arr1[i];
		}
	}
	printf("�ִ��� %d \n", max);
	printf("�ּڰ��� %d \n", min);
	printf("������ %d \n", sum);

	return 0;

}