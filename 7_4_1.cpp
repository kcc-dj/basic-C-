#include <stdio.h>

int main(void) {

	int i, num, num1,sum=0;
	printf("insert two integers! \n");
	scanf_s("%d %d",&num,&num1);
	for (i = num ; i < num1+1 ; i++)
	{
		sum = sum + i;

	}
	printf("%d \n",sum);
	
	return 0;
}