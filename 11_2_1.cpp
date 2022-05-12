#include <stdio.h>

int main(void)
{
	char arr[50];
	int i=0;
	printf("문자열을 입력하시오. \n");
	scanf_s("%s", arr,sizeof(arr));
	while (arr[i] != 0)
	{
		i++;
	}
	printf("문자열의 길이는 : %d",i);
	return 0;

}