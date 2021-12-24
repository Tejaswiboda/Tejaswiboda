#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	scanf("%d",&n);
	while(i<n)
	{
		if (n%i==0)
		sum=sum+i;
		i++;
	}
	if(n==sum)
	printf("it is a perfect number");
	else
	printf("it is not a perfect number");
}

