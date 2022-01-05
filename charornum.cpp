



#include<stdio.h>
main()
{
	char x;
	printf("enter the charactier");
	scanf("%d",&x);
	switch(((x>='A')&&(x<='Z'))||((x>='a')&&(x<='z')))
{
	case 1:
	{
	printf("its a letter");
	break;
	}
	case 0:
{
		switch(((x>='1')||(x<='9')))
	{
		case 1:
		{
			printf("its a number");
			break;
		}
		case 0:
		{
			printf("its a symbol");
			break;
		}
	}
}
	break;
}
}
