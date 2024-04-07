#include<stdio.h>
// #include<conio.h>

main()
{
	float c,f;
	// clrscr();

	printf("celsius\t: ");
	scanf("%f",&c);

	f=(c*9/5)+32;

	printf("Fahrenheit\t:%.1f",f);
	// getch();
}