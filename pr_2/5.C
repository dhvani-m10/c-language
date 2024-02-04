#include<stdio.h>
#include<conio.h>

main()
{
	int u;
	float Ebill;
	clrscr();

	printf("enter Electricity Unit : ");
	scanf("%d",&u);

	if(u<=50)
	{
	Ebill=u*0.50;
	}
	else if(u>50 && u<=150)
	{
	Ebill=25+(u-50)*0.75;
	}
	else if(u>150 && u<=250)
	{
	Ebill=100+(u-150)*1.20;
	}
	else
	{
	Ebill=220+(u-250)*1.50;
	}

	Ebill=Ebill+0.20*Ebill;
	printf("Electricity bill : %.2f\n",Ebill);
	getch();
}