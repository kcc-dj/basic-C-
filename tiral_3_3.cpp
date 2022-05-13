#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=0,j;
	printf("난수 범위 : 0 부터 %d까지 \n", RAND_MAX);
	while (1)
	{
		j = rand();
		if (j < 100)
		{
			printf("난수출력 : %d \n", j);
			i++;
		}
		if (i == 5)
			break;
	}
	
	return 0;

}