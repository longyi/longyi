

#include <stdio.h>
int main(void)
{	printf("input: ");
    char a,b;
    scanf("%d",&a);

    if(a==4||a==6||a==9||a==11)
    printf("output; \n2016.%d has 30 days",a);
    
else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	printf("output: \n2016.%d has 31 days",a);
	
	 else if(a==2)
	printf("output: \n2016.%d has 29 days",a);
    
else
	printf("output: \nInvalid month input!");
	return 0;
}
 

    

