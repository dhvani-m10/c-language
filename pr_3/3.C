#include<stdio.h>
#include<conio.h>

main()
{
	 int n,first,last;
	 clrscr();

	 printf("Enter any number : ");
	 scanf("%d",&n);

	 last=n%10;

	 while(n>10)
	 {
		n=n/10;
	 }
	 first=n;
	 printf("\nThe sum of First and Last Digit is : %d",first+last);

	 getch();
}
