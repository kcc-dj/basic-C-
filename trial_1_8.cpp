#include <stdio.h>

int twojegop(int num)
{
	if (num == 0)
	{
		return 1;
	}
	else 
	{
		return 2*twojegop(num - 1);
		
	}
}
int main(void)
{
	int num;
	printf("숫자 입력하시오 \n");
	scanf_s("%d",&num);
	printf("2의 %d승 : %d \n",num,twojegop(num));
	return 0;

}