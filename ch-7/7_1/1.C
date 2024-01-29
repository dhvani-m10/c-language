#include<stdio.h>
#include<conio.h>

main()
{
	int n1,n2;
	clrscr();

	printf("\n");
	printf("Enter the value of first number : ");
	scanf("%d",&n1);
	printf("Enter the value of second number : ");
	scanf("%d",&n2);

	printf("\n");
	if(n1<n2)
	{
	printf("The minimum value is : %d\n",n1);
	}
	else
	{
	printf("The minimum value is : %d\n",n2);
	}

	getch();
}
