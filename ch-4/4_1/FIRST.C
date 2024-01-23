#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,temp;
	clrscr();

	//before using third variable(swap)
	printf("enter the value of a\t:\t");
	scanf("%d",&a);
	printf("enter the value of b\t:\t");
	scanf("%d",&b);

	temp=a;
	a=b;
	b=temp;

	//after using third variable(swap)
	printf("A\t:%d\n",a);
	printf("B\t:%d\n",b);


	getch();
}