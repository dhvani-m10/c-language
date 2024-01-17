#include<stdio.h>
#include<conio.h>

main()
{
	 float pi,area;
	 int r;
	 clrscr();

	 printf("\nenter the value of pi : ");
	 scanf("%f",&pi);

	 printf("\nenter the radius : ");
	 scanf("%d",&r);
	 printf("\n");

	 area=pi*r*r;

	 printf("area of circle is\t : %f ",area,r);
	 getch();
}
