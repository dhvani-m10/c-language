#include<stdio.h>
#include<conio.h>

main()
{
	 int a,n,fact=1;
	 clrscr();

	 printf("Enter any number : ");
	 scanf("%d",&n);

	 for(a=1;a<=n;a++)
	 {
		fact*=a;
	 }
		printf("\nThe Factorial is : %d",fact);

	 getch();

}