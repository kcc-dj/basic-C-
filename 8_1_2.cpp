#include <stdio.h>

int main(void) {

	int num,num1,abst;
	printf("insert two integers \n");
	scanf_s("%d %d",&num,&num1);
	abst = num - num1;
	if(abst>0)
	{
		printf("%d", abst);
	
	}
	else
	{
		printf("%d", abst * -1);
	}
	return 0;
}