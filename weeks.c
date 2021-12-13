#include<stdio.h>
main()
{
	char a;
	printf("enter a character");
	scanf("%c",&a);
	
	switch(a>='a'&&a<='z'||a>='A'&&a<='Z')
	{
		case 1:
			printf("entered charecter is a charecter");
			break;
		case 0:
			switch(a>='0' &&a<='9')
			{
				case 1:
					printf("entered charecter is a digit");
					break;
			}
			
	}
	
}
	
