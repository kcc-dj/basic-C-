#include <stdio.h>

int main(void)
{
	int num,i,n1=1,n2;
	printf("숫자 입력하시오 \n");
	scanf_s("%d",&num);
	for (i = 1;; i++)
	{
		n1 = n1 * 2;
		if (n1 > num)
			break;
			
	}
	printf("최댓값은 %d 입니다.\n",i-1);
	return 0;
}