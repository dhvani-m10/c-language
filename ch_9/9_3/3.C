#include<stdio.h>
#include<conio.h>

main()
{
	 int a,n;
	 clrscr();

	 printf("Enter any number : ");
	 scanf("%d",&n);

	 for(a=1;a<=10;a++)
	 {
		  printf("\n%d * %d = %d",n,a,n*a);
	 }


	 getch();

}