#include <stdio.h>


int main(void)
{
	int num;
	printf("정수를 입력하시오 \n");
	scanf_s("%d",&num);
	printf("16진수로 변환된 값은 %x \n",num);
	return 0;
}