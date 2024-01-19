#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();
	printf("Enter any number : ");
	scanf("%d",&n);
	printf("\n");

	printf("\npre Increment-Decrement :\n ");
	printf("Increment : %d\n",++n);
	printf("Decrement : %d\n",--n);

	printf("\npost Increment-Decrement :\n");
	printf("I : %d\n",n++);
	printf("Increment : %d\n",n);
	printf("D : %d\n",n--);
	printf("Decrement : %d\n",n);

	getch();
}