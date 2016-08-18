#include<stdio.h>

int main(void)
{
	int x,y;

	printf("input: ");
	scanf("%d,%d",&x,&y);

	if(x<y)
		printf("%d is bigger",y);

	else
		printf("%d is bigger",x);
	return 0;
	 
}
