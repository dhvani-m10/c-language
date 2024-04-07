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
	if(a%2==0)
	{
		printf("%d \t",a);
	}
		a++;
	}

	getch();
}