#include<stdio.h>
main()
{
	int n,d,r=0;
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	printf("the reverse numbere is %d",r);
}
