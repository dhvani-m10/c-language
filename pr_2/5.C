#include<stdio.h>
#include<conio.h>

main()
{
	int a,total_bill;
	float Ebill;
	clrscr();

	printf("enter Electricity Unit : ");
	scanf("%d",&total_bill);

	if(a>=0 && a<=50)
	{
	Ebill=(total_bill*0.50);
	}
	else if(a>50 && a<=150)
	{
	Ebill=50*0.50+(total_bill-50)*0.75;
	}
	else if(a>150 && a<=250)
	{
	Ebill=50*0.50+100*0.75+(total_bill-150)*1.20;
	}
	else
	{
	Ebill=50*0.50+100*0.75+100*1.20+(total_bill-250)*1.50;
	}

	Ebill=Ebill+0.20*Ebill;
	printf("Electricity bill : %.2f\n",Ebill);
	getch();
}