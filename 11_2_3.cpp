#include <stdio.h>

int main(void)
{
	int i=0, j, k=0;
	char arr[50];
	printf("���ܾ� �Է� �ϼ���. \n");
	scanf_s("%s",arr,sizeof(arr));
	while (arr[i] != 0)
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (k<arr[j])
		{
			k = arr[j];
		}
		
	}
	printf("%c", k);
	return 0;

}