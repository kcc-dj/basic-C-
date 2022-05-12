#include <stdio.h>

int main(void)
{
	int i, arr[6] = { 1,2,3,4,5,6 };
	int *ptr1,*ptr2,num;
	ptr1 = &arr[0];
	ptr2 = &arr[5];
	for (i = 0; i < 3; i++)
	{
		num = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 - i);
		*(ptr2 - i) = num;
	}
	i = 0;
	while (i < 6)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;

}