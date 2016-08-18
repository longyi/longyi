#include<stdio.h>
int main(void)
{	printf("input:");
	int data1,data2;
	char a;
data1=(float)data1,data2=(float)data2;
	scanf("%d%c%d",&data1,&a,&data2);
	if(data2!=0&&a=='+')
	printf("output:\n%d%c%d=%d",data1,a,data2,data1+data2);
		if(data2!=0&&a=='-')
	printf("output:\n%d%c%d=%d",data1,a,data2,data1-data2);
		if(data2!=0&&a=='*')
	printf("output:\n%d%c%d=%d",data1,a,data2,data1*data2);
		if(data2!=0&&a=='%')
	printf("output:\n%d%c%d=%d",data1,a,data2,data1%data2);
		if(data2!=0&&a=='/')
	printf("output:\n%d%c%d=%.2f",data1,a,data2,(float)data1/data2);
		if(data2==0)
	printf("output:\nerror!chu shu wei 0.");
	return 0;
	
}
