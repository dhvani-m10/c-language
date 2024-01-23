#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,result;
	clrscr();

	printf("enter the value of x\t:");
	scanf("%d",&x);
	printf("enter the value of y\t:");
	scanf("%d",&y);

	result=(x+y)*(x+y)*(x+y);

	printf("\n");
	printf("(%d+%d)^3=\t%d\n",x,y,result);

	getch();

}
