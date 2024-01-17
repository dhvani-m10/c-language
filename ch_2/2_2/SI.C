#include<stdio.h>
#include<conio.h>

main()
{
	int p,r,n,si;

	clrscr();

	printf("enter the value of p\t: ");
	scanf("%d",&p);

	printf("enter the value of r\t: ");
	scanf("%d",&r);

	printf("enter the value of n\t: ");
	scanf("%d",&n);

	si=p*r*n/100;

	printf("simple interest is\t:%d",si);
	getch();
}