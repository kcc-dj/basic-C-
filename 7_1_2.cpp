#include <stdio.h>

int main(void) {

	int num, num1 = 0;
	printf("insert one integer \n");
	scanf_s("%d",&num);

	while (num1 < num)
	{
		printf("%d ",(num1+1)*3);
		num1++;
	}
	
	return 0;
}