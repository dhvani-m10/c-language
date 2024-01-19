#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("enter the value of a\t: ");
	scanf("%d",&a);
	printf("enter the value of b\t: ");
	scanf("%d",&b);
	printf("\n");

	printf("Addition of %d and %d Ans \t: %d\n",a,b,a+b);
	printf("Subtraction of %d and %d Ans \t: %d\n",a,b,a-b);
	printf("Multiplication of %d and %d Ans\t: %d\n",a,b,a*b);
	printf("Division of %d and %d Ans \t: %d\n",b,a,b/a);
	printf("Modules of %d and %d Ans \t: %d\n",b,a,b%a);


	getch();


}