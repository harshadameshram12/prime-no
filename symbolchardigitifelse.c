#include<stdio.h>
main()
{

	char ch;
	printf("\n enter char=");
	scanf("%c", &ch);
	if(ch>='a' &&ch<='z')
{
	printf("\n it is character");
	}	
	else if(ch>='0'&& ch<='9')
	{
		printf("\n it is digit");
	}
	else 
	{
		printf("it is special symbol");
	}
}
