#include <stdio.h>

int main(void) {

	int num=1, num1;
	while (num < 100)
	{
		if (num % 7 == 0)
		{
			printf("%d ", num);
		}
		else if (num % 9 == 0)
		{
			printf("%d ", num);
		}
		num++;
	}
	return 0;
}