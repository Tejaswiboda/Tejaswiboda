#include<stdio.h>
main()
{
	int r,n,num,s=0;
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(s==num)
	printf("%d is an armstrong number",num);
	else
	printf("%d is not an armstrong number",num);
	
}
	

