#include <stdio.h>

void lenchar(char *ch11, int *num)
{
	int i=0,k = 0;
	while (1)
	{
		k++;
		i++;
		if (ch11[i] == 0)
			break;
	}
	*num= k;
}


int main(void)
{
	int len,i,j=0,num1;
	char ch1[20];
	printf("���ڸ� �Է��Ͻÿ� \n");
	scanf_s("%s", ch1, sizeof(ch1));
	lenchar(ch1, &num1);
	for (i = 0; i < num1/2; i++)
	{

		if (ch1[i] != ch1[num1 - (i+1)])
		{
			printf("ȸ���� �ƴմϴ�. \n");
			j++;
		}
		if (ch1[i] != ch1[num1 - (i+1)])
			break;
		else
			continue;
	}
	if (j == 0)
	{
		printf("ȸ���Դϴ�! \n");
	}

	return 0;

}