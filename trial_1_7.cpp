#include <stdio.h>

int main(void)
{
	int num,i,n1=1,n2;
	printf("���� �Է��Ͻÿ� \n");
	scanf_s("%d",&num);
	for (i = 1;; i++)
	{
		n1 = n1 * 2;
		if (n1 > num)
			break;
			
	}
	printf("�ִ��� %d �Դϴ�.\n",i-1);
	return 0;
}