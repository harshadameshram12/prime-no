#include<stdio.h>
main()
{
 int maths,phy,chem,tot;
 printf("enter a 3 subjects marks");
 scanf("%d%d%d",&maths,&phy,&chem);
 tot=maths+phy+chem;
 if(maths>=65 && phy>=55 && chem>=50)
{
	printf("eligible for admission");
}
else
{
	printf("not eligibal");
 }
}
