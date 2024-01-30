#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter the value of A : ");
	scanf("%d",&a);
	printf("Enter the value of B : ");
	scanf("%d",&b);
	printf("Enter the value of C : ");
	scanf("%d",&c);
	printf("Enter the value of D : ");
	scanf("%d",&d);

	printf("\n");
	if(a>b)
	{
	   if(a>c)
	   {
	     if(a>d)
	      {
	      printf("The maximum value is : %d",a);
	      }
	      else
	      {
	      printf("The maximum value is : %d",d);
	      }
	     }
	      else
	      {
	      if(c>d)
	      {
	      printf("The maximum value is : %d",c);
	   }
	      else
	   {
	      printf("The maximum value is : %d",d);
	   }
	}
      }
	   else
	   {
	   if(b>c)
	   {
	    if(b>d)
	    {
		printf("The maximum value is : %d",b);
	      }
	      else
	      {
	      printf("The maximum value is : %d",d);
	      }

	      }
	      else
	      {
	      if(c>d)
	      {
	      printf("The maximum value is : %d",c);
	   }
	      else
	   {
	      printf("The maximum value is : %d",d);
	   }
	   }
	   }
	   getch();
	   }






