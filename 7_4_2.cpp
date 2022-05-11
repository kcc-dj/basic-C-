#include <stdio.h>

int main(void) {

	int i, num, num1,fact=1;
	printf("insert number \n");
	scanf_s("%d",&num);
	for (i = 1; i < num + 1; i++)
	{
		fact = fact * i;
	}
	printf("factorial : %d \n", fact);
	
	return 0;
}