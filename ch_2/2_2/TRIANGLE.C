#include<stdio.h>
#include<conio.h>

main()
{
	int b,h;
	float area;
	clrscr();

	printf("enter the value of b\t: ");
	scanf("%d",&b);

	printf("enter the value of h\t: ");
	scanf("%d",&h);

	area=0.5*b*h;

	printf("area of triangle is\t:%.2f",area);
	getch();
}