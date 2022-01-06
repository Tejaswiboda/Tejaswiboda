#include<stdio.h>
int main()
{
	int a,b,count=0;
	printf("prime numbers between 1 to 10 are");
	for(a=1;a<=10;a++)
	{
		for(b=2;b<a;b++)
		{
			if (a%b==0)
			count++;
			break;
		}
	}	if(count==0&&a!=1)
	{
		for(b=2;b<a;b++)
		{
			if(a%b==0)
			count++;
			break;
		}
		if(count==0&& a!=1)
		printf("%d",a);
		count==0;
	}
	printf("\t");
}
