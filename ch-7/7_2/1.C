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

	printf("\n");
	if(a<b)
	{
	 if(a<c)
	 {
	 printf("The minimum value is : %d",a);
	 }
	 else
	 {
	 printf("The minimum value is : %d",c);
	 }
	}
	else{
	 if(b<c)
	 {
	  printf("The minimum value is : %d",b);
	 }
	 else
	 {
	 printf("The minimum value is : %d",c);
	 }
	}

	getch();
}

