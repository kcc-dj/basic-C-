#include <stdio.h>

void print44arr(int(* ar)[4])
{
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
}

void turnright(int(*ar)[4])
{
	int ar2[4][4];
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			ar2[i][j] = ar[3-j][i];

		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			ar[i][j] = ar2[i][j];

		}
	}

}



int main(void)
{
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int i, j;
	print44arr(arr);
	turnright(arr);
	print44arr(arr);

	

	return 0;

}