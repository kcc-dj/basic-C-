#include <stdio.h>

int main(void)
{
	char arr[50],aa;
	int i=0,j,k=1;
	printf("���ڿ��� �Է��Ͻÿ�. \n");
	scanf_s("%s", arr,sizeof(arr));
	while (arr[i] != 0)
	{
		i++;
	}
	for (j = 0; j <= i / 2; j++)
	{
		aa = arr[i - k];
		arr[i - k] = arr[j];
		arr[j] = aa;
		k++;
	}
	printf("%s", arr);
	return 0;

}