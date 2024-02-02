#include<stdio.h>
#include<conio.h>

main()
{
	char ch;
	clrscr();

	printf("s.Sunday\n");
	printf("M.Monday\n");
	printf("T.Tuesday\n");
	printf("W.Wednesday\n");
	printf("t.Thursday\n");
	printf("F.Friday\n");
	printf("S.Saturday\n");

	printf("Enter any character: ");
	scanf("%c",&ch);

	switch(ch)
	{
		case 's':
			printf("Sunday");
			break;

		case 'M':
			printf("Monday");
			break;

		case 'T':
			printf("Tuesday");
			break;

		case 'W':
			printf("Wednesday");
			break;

		case 't':
			printf("Thursday");
			break;

		case 'F':
			printf("Friday");
			break;

		case 'S':
			printf("Saturday\n");
			break;

		 default :
		 printf("Invalid Character...");
	}
	getch();
}