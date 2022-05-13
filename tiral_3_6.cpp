#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
	int arr[3];
	int arr2[3];
	int n1,i,j,k,l,cou=0;
	srand((int)time(NULL));
	arr[0] = (rand() % 10);
	while (1)
	{
		arr[1] = rand() % 10;
		if (arr[1] != arr[0])
			break;
	}
	
	while (1)
	{
		arr[2] = rand() % 10;
		if (arr[2] != arr[0] && arr[2] != arr[1])
			break;
	}
	printf("%d %d %d", arr[0], arr[1], arr[2]);
	while (1) 
	{
		k = 0;
		l = 0;
		for (i = 0; i < 3; i++)
		{
			printf("숫자 입력 \n");
			scanf_s("%d", &n1);
			arr2[i] = n1;
		}
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (i == j && arr[i] == arr2[j])
				{
					k++;
				}
				else if (i != j && arr[i] == arr2[j])
				{
					l++;
				}
			}
		}
		cou++;
		printf("%d번째 결과 : %d strike %d ball \n",cou, k, l);
		if (k == 3)
		{
			printf("Game over \n");
		}
		if (k == 3)
			break;
	}
	return 0;

}