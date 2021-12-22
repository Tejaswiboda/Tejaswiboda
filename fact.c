#include<stdio.h>
main()
{
	int fact=1,n;
	scanf("%d",&n);
	while(n>=1)
	{
		fact=fact*n;
		n--;
	}
	printf("the factorial ofnthe given number %d",fact);
}
