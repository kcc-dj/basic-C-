#include <stdio.h>

int main(void) {

	int A=1,Z=1;
	for(A=1;A<10;A++)
	{
		for (Z = 1; Z < 10; Z++)
		{
			if(((A*11) + (Z*11))==99)
			{
				printf("A is %d and Z is %d \n",A,Z);
			}
		}
	
	}
	return 0;
}