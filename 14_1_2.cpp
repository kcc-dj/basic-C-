#include <stdio.h>

void Swap3(int *ptr1, int *ptr2, int *ptr3)
{
	int aa = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = aa;
}



int main(void)
{
	int num1 = 1, num2=2,num3=3;;
	Swap3(&num1,&num2,&num3);
	printf("%d %d %d\n", num1,num2,num3);
	return 0;

}