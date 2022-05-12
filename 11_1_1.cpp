#include <stdio.h>

int main(void)
{
	int arr1[5],i,min,max,sum=0;
	printf("정수 5개 입력하시오 \n");
	
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
	printf("최댓값은 %d \n", max);
	printf("최솟값은 %d \n", min);
	printf("총합은 %d \n", sum);

	return 0;

}