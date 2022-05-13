#include <stdio.h>


int main(void)
{
	int arr[5][5];
	int i, j,k,l,m,num;
	for (i = 0; i < 4; i++)
	{
		printf("%d째 사람 ", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("%d번과목 점수 입력해라 \n",j+1);
			scanf_s("%d",&num);
			arr[i][j] = num;
		}
	}
	m = 0;
	for (i = 0; i < 4; i++)
	{
		k = 0;
		l = 0;
		for (j = 0; j < 4; j++)
		{
			l+= arr[j][i];
			k+=arr[i][j];
		}
		arr[i][4] = k;
		arr[4][i] = l;
		m += l;
	}
	arr[4][4] = m;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}


	return 0;

}