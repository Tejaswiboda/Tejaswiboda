#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("after swapping,a=%2d",a);
	printf("after swapping,b=%2d",b);
}
