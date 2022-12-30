include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20],str1,str2;
	int n,i;
	n=strcmp(s1,s2);
	printf("enter the first string:");
	scanf("%s",str1);
	printf("enter the second string:");
	scanf("%s",str2);
	int c=campare(str1,str2);
	if(c==0)
	printf("string are same");
	else
	printf("strings are not same");
	
	
}
