#include <stdio.h>

void valsquare(int num)
{
	printf("%d \n", num * num);

}

void refsquare(int * ptr)
{
	int num = *ptr;
	*ptr = num * num;
	printf("%d \n", *ptr);
}



int main(void)
{
	int num = 9;
	valsquare(num);
	printf("%d \n", num);
	refsquare(&num);
	printf("%d \n", num);
	return 0;

}