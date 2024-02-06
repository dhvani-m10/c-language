#include<stdio.h>
#include<conio.h>

main()
{
	 int a,n,sum=0;
	 clrscr();

	 printf("Enter any number : ");
	 scanf("%d",&n);

	 for(a=1;a<=n;a++)
	 {
		sum+=a;
	 }
		printf("\nThe sum of all number is : %d",sum);

	 getch();

}