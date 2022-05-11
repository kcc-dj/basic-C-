#include <stdio.h>

int main(void)
{
	int i, j = 0,k=0, num = 2;

	while (k<10) 
	{
		j = 0;
		for (i = 1; i < num + 1; i++)
		{
			if (num % i == 0)
			{
				j++;
			}
		
		}
		if (j == 2)
		{
			printf("%d ", num);
			k++;
		}
		num++;
	}
	return 0;
}