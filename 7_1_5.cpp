#include <stdio.h>

int main(void) {

	int num, num1=0,num2,sum=0;
	printf("how many integers do you want to insert?\n");
	scanf_s("%d",&num);
	while (num1 != num)
	{
		printf("insert integer \n");
		scanf_s("%d",&num2);
		sum = sum + num2;
		num1++;
	}
	printf("average : %lf \n",(double)sum/num);

	return 0;
}