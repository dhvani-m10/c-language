#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	printf("\n");
	if(n==0)
	{
	printf("This number is Natural!!");
	}
	else if(n>0)
	{
	printf("This number is Positive!!");
	}
	else
	{
	printf("This number is Negative!!");
	}

	getch();
}