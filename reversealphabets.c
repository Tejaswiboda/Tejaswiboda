#include<stdio.h>
int main()
{
	char a,b;
	scanf("%c",&a);
	for(b=65;b<=a;++b);
	{
		printf("\t");
		printf("%c",a);
	}
	printf("\n");
	
}
