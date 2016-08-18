#include<stdio.h>
int main(void)
{int a,b,c,d;
printf("所有水仙花数为：");
	for (d=100;d<1000;d++)
{a=d/100;
b=d/10%10;
c=d%10;
if(a*100+b*10+c==a*a*a+b*b*b+c*c*c)
printf("\n%d",d);
}return 0;
	 
} 
