#include <stdio.h>

int main(void)
{
	int num,n1,n2,n3,n4;
	printf("�����Դϱ�? \n");
	scanf_s("%d",&num);
	n1 = num / 3600;
	n4 = num % 3600;
	n2 = n4 / 60;
	n3 = n4 % 60;
	printf("%d�� %d�� %d�� �Դϴ�.\n", n1, n2, n3);
	return 0;
}