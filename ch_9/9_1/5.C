#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("Enter First number : ");
	scanf("%d",&a);
	printf("Enter Second number : ");
	scanf("%d",&b);


	printf("\n");
	while(a<=b)
	{
	   if(a%4==0)
	   {
		printf("%d \t",a);
	   }
		a++;
	}

	getch();
}