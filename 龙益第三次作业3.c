#include<stdio.h>

int main(void)
{
	printf("input an integer:");
	int a;
	scanf("%d",&a);
	if(a%5==0&&a%7==0)
	printf("output:\nYes¡£");

	else
	printf("output:\nNo.");
	return 0;
} 
