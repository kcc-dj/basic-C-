#include <stdio.h>

int main(void)
{
	int i=1,j=0,k,l,m,num;
	int arr[50];
	printf("정수를 입력하시오 \n");
	scanf_s("%d",&num);
	while (1)
	{
		i = i * 2;
		j++;
		if (i > num)
			break;
		
	}
	l = j;
	for (i = j; i > 0; i--)
	{
		k = 1;
		m = i;
		while (1)
		{
			if (m == 1)
				break;
			k = k * 2;
			m--;

		}
		if ((num / k) == 1)
		{
			arr[j-1] = 1;
			num = num - k;
		}
		else
		{
			arr[j-1] = 0;
		}
		j--;
	}
	for (i = l-1; i >= 0; i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;

}