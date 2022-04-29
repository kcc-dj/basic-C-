#include <stdio.h>

int main(void)
{
	int x1,x2,y1,y2;
	printf("insert first x and y\n");
	scanf("%d %d",&x1,&y1);
	printf("insert second x and y\n");
	scanf("%d %d",&x2,&y2);
	printf("width of rectangle is %d\n",(x2-x1)*(y2-y1));
	return 0;
}
		
