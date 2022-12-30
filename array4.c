#include<stdio.h>
main()
{
	int a[5],i;
	printf("\n enter 5 elements of array: ");
	for(i=0;i<=4;i++)
{
	scanf("%d",&a[i]);
}
printf("\n reverse array elements");
for(i=4;i>=0;i--)
{
	printf("\n%d",a[i]);
 }
}
