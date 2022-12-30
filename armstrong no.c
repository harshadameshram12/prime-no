#include<stdio.h>
main()
{
	int n,i,r,sum=0,temp;
	prinf("\n enter n= ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n armstrong no");
	}
	else
	{
		printf("\n not armstrong no");
	}
}

