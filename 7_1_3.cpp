#include <stdio.h>

int main(void) {

	int num=1, num1=0;
	
	while (num != 0)
	{
		printf("insert integers \n");
		scanf_s("%d", &num);
		num1 = num1 + num;

	}
	printf("sum of integers : %d \n", num1);
	return 0;
}