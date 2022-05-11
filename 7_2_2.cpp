#include <stdio.h>

int main(void) {

	int num=0, num1, num2;
	while (num < 5)
	{
		num1 = 0;
		while (num1 < num)
		{
			printf("o ");
			num1++;
		}
		printf("* \n");
		num++;
	}
	
	return 0;
}