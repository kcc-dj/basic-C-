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
	printf("���� �Է��Ͻÿ� \n");
	scanf_s("%d",&num);
	printf("2�� %d�� : %d \n",num,twojegop(num));
	return 0;

}