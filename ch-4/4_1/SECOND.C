#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	//before using third variable(swap)
	printf("enter the value of a\t:\t");
	scanf("%d",&a);
	printf("enter the value of b\t:\t");
	scanf("%d",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	print("\n");
	printf("A\t:%d\n",a);
	printf("B\t:%d\n",b);

	getch();

}