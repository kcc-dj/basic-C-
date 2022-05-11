#include <stdio.h>

int main(void)
{
	int num,n1,n2,n3,n4;
	printf("몇초입니까? \n");
	scanf_s("%d",&num);
	n1 = num / 3600;
	n4 = num % 3600;
	n2 = n4 / 60;
	n3 = n4 % 60;
	printf("%d시 %d분 %d초 입니다.\n", n1, n2, n3);
	return 0;
}