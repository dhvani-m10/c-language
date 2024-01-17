#include<stdio.h>
#include<conio.h>

main()
{
	float pi,perimeter;
	int r;

	clrscr();

	printf("enter the value of pi\t: ");
	scanf("%f",&pi);

	printf("enter the value of r\t: ");
	scanf("%d",&r);

	perimeter=2*pi*r;

	printf("perimeter of circle is\t:%.2f",perimeter);
	getch();
}

