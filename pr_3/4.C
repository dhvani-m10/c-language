#include<stdio.h>
#include<conio.h>

main()
{
	int n,rem,sum=0,multi=1;
	clrscr();

	printf("Enter any number : ");
	scanf("%d",&n);

	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		multi*=rem;
		n/=10;
	}

       if(sum==multi)
       {
	printf("This is a magic number",n);
	}
	else
	{
	printf("This is not a magic number",n);
	}


	getch();
}