

#include<math.h>
int main(void)
{ 
printf("input: ");	
float a,b,c,area,p;

	scanf("%f,%f,%f",&a,&b,&c);
	p=(a+b+c)/2;
	
	area=sqrt(p*(p-a)*(p-b)*(p-c));
	if(a+b>c)
	printf("output: %f",area);
	else
	printf("output: data error");
	return 0;
	
} 
