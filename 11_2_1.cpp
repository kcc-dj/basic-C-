#include <stdio.h>

int main(void)
{
	char arr[50];
	int i=0;
	printf("���ڿ��� �Է��Ͻÿ�. \n");
	scanf_s("%s", arr,sizeof(arr));
	while (arr[i] != 0)
	{
		i++;
	}
	printf("���ڿ��� ���̴� : %d",i);
	return 0;

}