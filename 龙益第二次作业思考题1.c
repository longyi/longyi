#include<stdio.h>

int main(void)
{
	char a;
	printf("input: ");
	scanf("%c",&a);
	if(a>='A'&&a<='Z')

	printf("����һ����д��ĸ,����Сд��ĸ��%c",a+32);
if(a>='a'&&a<='z')
	
printf("����һ��Сд��ĸ,���Ĵ�д��ĸ��%c",a-32);
	return 0;
}
