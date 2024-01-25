#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);

	a=a^b;
	b=a^b;
	a=a^b;

	printf("\n");
	printf("A\t:\t%d\n",a);
	printf("B\t:\t%d\n",b);

	getch();

}








