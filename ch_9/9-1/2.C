#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n;
	clrscr();

	printf("Enter any value : ");
	scanf("%d",&n);

	printf("\n");
	while(n>=a)
	{
	if(n%2==0)
		{
			printf("%d \t",n);
		}
			n--;
	}

	getch();
}