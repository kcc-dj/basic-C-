#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=0,j;
	printf("���� ���� : 0 ���� %d���� \n", RAND_MAX);
	while (1)
	{
		j = rand();
		if (j < 100)
		{
			printf("������� : %d \n", j);
			i++;
		}
		if (i == 5)
			break;
	}
	
	return 0;

}