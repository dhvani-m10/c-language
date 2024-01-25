#include<stdio.h>
#include<conio.h>

main()
{
	float BaseSalary,grossSalary;
	int HRA=10,DA=5,TA=8;
	clrscr();

	printf("enter the base salary\t: ");
	scanf("%f",&BaseSalary);
	printf("HRA\t: %d\n",HRA);
	printf("DA\t: %d\n",DA);
	printf("TA\t: %d\n",TA);

	grossSalary=BaseSalary+(BaseSalary*(HRA+DA+TA)/100);

	printf("Gross Salary\t :%.2f",grossSalary);
	getch();
}

