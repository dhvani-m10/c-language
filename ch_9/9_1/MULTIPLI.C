#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n,multi=1;
	clrscr();

	printf("Enter any value : ");
	scanf("%d",&n);

	printf("\n");
	while(a<=n)
	{
		multi=multi*a;
		a++;
	}

	printf("The multiplication is : %d\n",multi);

	getch();
}