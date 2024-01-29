#include<stdio.h>
#include<conio.h>

main()
{
	char ch;
	clrscr();

	printf("Enter any Character : ");
	scanf("%c",&ch);
	printf("\n");

	if(ch=='a'|| ch=='A')
	{
	printf("This is a Vowel!!",ch);
	}
	else if(ch=='e' || ch=='E')
	{
	printf("This is a Vowel!!",ch);
	}
	else if(ch=='i' || ch=='I')
	{
	printf("This is a Vowel!!",ch);
	}
	else if(ch=='o' || ch=='O')
	{
	printf("This is a Vowel!!",ch);
	}
	else if(ch=='u' || ch=='U')
	{
	printf("This is a Vowel!!",ch);
	}
	else
	{
	printf("This is a Consonent!!",ch);
	}

	getch();
}
