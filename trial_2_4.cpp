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
	printf("문자를 입력하시오 \n");
	scanf_s("%s", ch1, sizeof(ch1));
	lenchar(ch1, &num1);
	for (i = 0; i < num1/2; i++)
	{

		if (ch1[i] != ch1[num1 - (i+1)])
		{
			printf("회문이 아닙니다. \n");
			j++;
		}
		if (ch1[i] != ch1[num1 - (i+1)])
			break;
		else
			continue;
	}
	if (j == 0)
	{
		printf("회문입니다! \n");
	}

	return 0;

}