#include<stdio.h>
#include<conio.h>

main()
{
	int a=1,n,sum=0;
	clrscr();

	printf("Enter any value : ");
	scanf("%d",&n);

	printf("\n");
	while(a<=n)
	{
		sum=sum+a;
		a++;
	}

	printf("The sum is : %d\n",sum);

	getch();
}