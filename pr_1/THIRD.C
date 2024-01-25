#include<stdio.h>
#include<conio.h>

main()
{
	int a1,a2,a3;
	clrscr();

	printf("enter the value of angle 1 : ");
	scanf("%d",&a1);
	printf("enter the value of angle 2 : ");
	scanf("%d",&a2);

	a3=180 - (a1+a2);

	printf("\n\n");
	printf("angle 3\t:%d",a3);

	getch();

}

