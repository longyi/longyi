#include<stdio.h>
int main(void)
{	int a,b,c,d,e;
	printf("input:\n");
	scanf("%d/%d",&a,&b);
	c=(a-1)*31+b;
	d=(a-1)*30+b+1;
	e=31+b;
	if(a==1)
printf("outpit:\nsum=%d",c);
else if(a==2)
printf("outpit:\nsum=%d",e);
else if(a==3)
printf("outpit:\nsum=%d",c-2);
else if(a==4)
printf("outpit:\nsum=%d",d);
else if(a==5)
printf("outpit:\nsum=%d",c-3);
else if(a==6)
printf("outpit:\nsum=%d",d+1);	
else if(a==7)
printf("outpit:\nsum=%d",c-4);
else if(a==8)
printf("outpit:\nsum=%d",c-4);
else if(a==9)
printf("outpit:\nsum=%d",d+3);
else if(a==10)
printf("outpit:\nsum=%d",c-5);
else if(a==11)
printf("outpit:\nsum=%d",d+4);
else if(a==12)
printf("outpit:\nsum=%d",c-6);
return 0;
	
	
}
