#include <stdio.h>

int main(void) {

	int num, num1=0,num2=0;
	printf("insert 5 positive integers \n");
	while (num1 < 5)
	{
		scanf_s("%d",&num);
		while (num < 1)
		{
			printf("re-insert integers \n");
			scanf_s("%d",&num);
		}
		num2 = num2 + num;
		num1++;
	}
	printf("Sum : %d \n",num2);

	return 0;
}