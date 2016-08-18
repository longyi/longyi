#include<stdio.h>
int main(void)
{
int x,y;

printf("input x:");

scanf("%d",&x);

if(x<0){printf("output:\nF<%d>=%d",x,y=-5*x+27);}

else if(x==0){
printf("output:\nF<%d>=%d",x,y=7909);}

else if(x>0)
{printf("output:\nF<%d>=%d",x,y=2*x-1);}

return 0;
}
