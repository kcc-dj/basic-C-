#include <stdio.h>

int main(void) {

	int num=1, num1=9;
	printf("insert integer \n");
	scanf_s("%d",&num);
	while (num1 > 0)
	{
		printf("%d ",num1*num);
		num1--;
	}

	return 0;
}