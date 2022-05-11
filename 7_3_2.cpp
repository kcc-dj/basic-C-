#include <stdio.h>

int main(void) {

	int num=1, num1=0;
	do
	{
		num1 = num1 + 2 * num;
		num++;
	} while (2 * num < 101);
	printf("%d \n", num1);
	
	return 0;
}