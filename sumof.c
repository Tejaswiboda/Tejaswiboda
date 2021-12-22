#include<stdio.h>
main()
{
	int k,n,sum;
	sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		k=n%10;
		sum=sum+k;
		n=n/10;
	}
	printf("the sum of the digits is equal to %d",sum);
}
