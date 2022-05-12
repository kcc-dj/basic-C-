#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1=&num1, * ptr2=&num2, *ptr3;
	*ptr1 += 10;
	*ptr2 -= 10;
	ptr3 = ptr1;
	ptr1 = ptr2;
	ptr2 = ptr3;
	printf("%d %d",*ptr1,*ptr2);

	return 0;

}