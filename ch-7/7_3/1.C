#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);
	printf("Enter the value of C : ");
	scanf("%d",&c);

	printf("\n\n");

	(a<b)
	      ?
	      (a<c)
		   ? printf("The minimum value is : %d",a)
		   : printf("The minimum value is : %d",c)
	      :
	      (b<c)
		   ? printf("The minimum value is : %d",b)
		   : printf("The minimum value is : %d",c);

	getch();
}


