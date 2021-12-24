#include<stdio.h>
main()
{
	int i,n,r,s=0;
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==i)
	printf("it is a palendrome");
	else
	printf("it is not a palendrome");
}
