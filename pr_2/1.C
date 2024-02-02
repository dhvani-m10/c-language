#include<stdio.h>
#include<conio.h>

main()
{
	char ch;
	clrscr();

	printf("enter any character : ");
	scanf("%c",&ch);

	if(ch>'0' && ch<='9')
	{
	     printf("This is a digit!");
	}
	else if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
	{
	     printf("This is Character!");
	}
	else
	{
	     printf("This is Special character!");
	}
	getch();
}

