#include <stdio.h>

int main(void) {

	int num=1,num1=1,i;
	for(i=1;i<10;i++)
	{		
		if (i % 2 == 1)
			continue;
		num1 = 1;
		while (num1 < i + 1)
		{
			printf("%d X %d = %d \n", i, num1, i * num1);
			num1++;
		}
		if (i > 8)
			break;
		
	
	}
	return 0;
}