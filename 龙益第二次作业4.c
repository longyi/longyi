#include<stdio.h>

int main(void)
{
	printf("input: ");
	int x,sum;

	scanf("%d",&x);

	
	
	printf("output: sum=%d",x%10+(x%100)/10+(x%1000)/100+x/1000);
	return 0;
}
