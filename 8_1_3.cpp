#include <stdio.h>

int main(void) {

	int num,num1,num2,avr;
	printf("insert score of Korean \n");
	scanf_s("%d",&num);
	printf("insert score of English \n");
	scanf_s("%d", &num1);
	printf("insert score of Math \n");
	scanf_s("%d", &num2);
	avr = (double)(num + num1 + num2) / 3;
	printf("your average score is %d !\n", avr);
	printf("so, your grade is ");
	if(avr>=90)
	{
		printf("A");
	}
	else if(avr>=80)
	{
		printf("B");
	}
	else if (avr >= 70)
	{
		printf("C");
	
	}
	else if (avr >= 50)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	return 0;
}