#include<stdio.h>

int main(void)
{
	char a;
	printf("input: ");
	scanf("%c",&a);
	if(a>='A'&&a<='Z')

	printf("这是一个大写字母,他的小写字母是%c",a+32);
if(a>='a'&&a<='z')
	
printf("这是一个小写字母,他的大写字母是%c",a-32);
	return 0;
}
