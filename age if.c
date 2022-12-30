#include<stdio.h>
main()
{
	int age;
	printf("\n enter age= ");
	scanf("%d",&age);
	if(age<18)
	{
		printf("\n not eligibal to fill form");
     }
     else
     {
     	if(age>=18 && age<=60)
     	{
     		printf("eligibal to form");
		 }
		 else
		 {
		 	printf("ready for retirment");
		 }
	 }
}
