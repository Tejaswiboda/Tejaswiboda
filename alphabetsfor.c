#include<stdio.h>
int main()
{
	char a,b;
	scanf("%c",&a);
	for(a=75;a>=65;--a)
	{
		for(b=65;b<=a;++b)
		{
			printf("\t");
			printf("%c",a);
		}
		printf("\n");
	}
}
