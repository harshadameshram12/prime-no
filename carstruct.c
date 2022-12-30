#include<stdio.h>
struct car
{
	int cmodelid;
	char cname;
	float cprice;
};
main()
{
	struct car c[5];
	int i,n;
	printf("\n enter a car name= ");
	scanf("%d",&n);
	printf("\n enter cmodel,cname,cprice= ");
	for(i=0;i<n;i++)
	{
	scanf("%d%s%f",&c[i].cmodelid,&c[i].cname,&c[i].cprice);
    {
    printf("\n cid \tcname \tcprice");
    for(i=0;i<n;i++)
    {
    	printf("\n%d \t%s \t%f",c[i].cmodelid,c[i].cname,c[i].cprice);
     }



	

