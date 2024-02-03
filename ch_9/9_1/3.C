#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n;
	clrscr();

	printf("Enter any value : ");
	scanf("%d",&n);

	printf("\n");
	while(a<=n)
	{
		printf("%d \t",a);
		a++;
	}

	getch();
}