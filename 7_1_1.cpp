#include <stdio.h>

int main(void) {

	int num1=0,num;
	printf("insert one integer \n");
	scanf_s("%d", &num);

	while (num1 < num)
	{
		printf("Hello world!\n");
		num1++;
	}
	return 0;
}