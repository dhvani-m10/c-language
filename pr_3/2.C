#include<stdio.h>
#include<conio.h>

main()
{
	 int n,count=0;
	 clrscr();

	 printf("Enter any number : ");
	 scanf("%d",&n);

	 while(n!=0)
	 {
		 count++;
		 n=n/10;

	 }

	  printf("\nTotal number of digit : %d",count);

	 getch();
}

