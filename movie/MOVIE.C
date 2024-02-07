#include<stdio.h>
#include<conio.h>

main()
{
	int n,ticket,p,date;
	char c='s';
	char name,t,movie;
	long int num,h;
	clrscr();

	printf("Click on option 1 for Bollywood Movies\n");
	printf("Click on option 2 for Hollywood Movies\n");
	printf("Click on option 3 for Gujrati Movies\n");
	printf("Click on option 4 for South Movies\n");

	printf("\nEnter your choice : ");
	scanf("%d",&n);

	switch(n)
	{
	clrscr();
	      case 1 :
		      printf("Press 1 for Action movie\n");
		      printf("Press 2 for Comedy movie\n");
		      printf("Press 3 for Thriller movie\n");

		      printf("\nEnter your choice : ");
		      scanf("%d",&n);

		      switch(n)
		      {
				clrscr();
				case 1 :
					printf("1.War\n");
					printf("2.Jawaan\n");
					printf("3.Tejas\n");
					printf("4.Tiger Zinda hai\n");

		       printf("\nEnter any number : ");
		       scanf("%d",&n);

				 switch(n)
		      {
			clrscr();
				case 1:
					printf("War\n");
					printf("Price\t : 220\n");

		      printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=220*n;

					break;

				case 2 :
					printf("Jawaan\n");
					printf("Price\t : 300\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=300*n;

					break;

				case 3 :
					printf("Tejas\n");
					printf("Price\t : 240\n");

		      printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=240*n;


					break;

				case 4 :
					printf("Tiger Zinda hai\n");
					printf("Price\t : 290\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=290*n;


					break;
				break;
				}

				break;

				case 2 :
					printf("1.OMG 2\n");
					printf("2.Golmaal Again\n");
					printf("3.Dream girl 2\n");
					printf("4.Khichdi 2\n");
		       printf("\nEnter any number : ");
		      scanf("%d",&n);

		     switch(n)
		      {
			clrscr();
				case 1:
					printf("OMG-2\n");
					printf("Price\t : 350\n");
		      printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=350*n;


					break;

				case 2 :
					printf("Golmaal again\n");
					printf("Price\t : 280\n");

		      printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=280*n;


					break;

				case 3 :
					printf("Dream Girl 2\n");
					printf("Price\t : 260\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=260*n;


					break;

				case 4 :
					printf("Khichdi-2\n");
					printf("Price\t : 250\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=250*n;


					break;

				break;
				}

				break;

			case 3 :
				printf("1.Runway 34\n");
				printf("2.Madras cafe\n");
				printf("3.Freddy\n");
				printf("4.IB71\n");

		      printf("\nEnter any number : ");
		      scanf("%d",&n);

		       switch(n)
		      {
			clrscr();
				case 1:
					printf("Runway 34\n");
					printf("Price\t : 340\n");

			 printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=340*n;


					break;

				case 2 :
					printf("Madras cafe\n");
					printf("Price\t : 260\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=260*n;


					break;

				case 3 :
					printf("Freddy\n");
					printf("Price\t : 220\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=220*n;


					break;

				case 4 :
					printf("IB71\n");
					printf("Price\t : 380\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=380*n;


					break;

				break;
				}


			      break;
			      }
			break;


	      case 2 :
		      clrscr();
		      printf("Press 1 for Science Fiction movie\n");
		      printf("Press 2 for Advantures movie\n");
		      printf("Press 3 for Action movie\n");

		      printf("\nEnter your choice : ");
		      scanf("%d",&n);

		       switch(n)
		      {
		       clrscr();
			case 1 :
				 printf("1.Avengers-Endgame\n");
				 printf("2.The Flash\n");
				 printf("3.The Adam Project\n");
				 printf("4.The Creator\n");

		      printf("\nEnter any number : ");
		      scanf("%d",&n);

				 switch(n)
		      {
			clrscr();
				case 1:
					printf("Avengers-Endgame\n");
					printf("Price\t : 320\n");

		      printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=320*n;


					break;

				case 2 :
					printf("The Flash\n");
					printf("Price\t : 280\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=280*n;


					break;

				case 3 :
					printf("The Adam Project\n");
					printf("Price\t : 260\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=260*n;


					break;

				case 4 :
					printf("The Creator\n");
					printf("Price\t : 220\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=220*n;


					break;

				break;
				}

			       break;

				case 2 :
					printf("1.Fast x\n");
					printf("2.Journey 2-The Mysterious Island\n");
					printf("3.Black Adam\n");
					printf("4.Jumanji-The next level\n");

			 printf("\nEnter any number : ");
			 scanf("%d",&n);

				switch(n)
		      {
				clrscr();
				case 1:
					printf("Fast X\n");
					printf("Price\t : 290\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=290*n;


					break;

				case 2 :
					printf("Journey 2-The Mysterious Island\n");
					printf("Price\t : 250\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=250*n;


					break;

				case 3 :
					printf("Black Adam\n");
					printf("Price\t : 260\n");

		      printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=260*n;


					break;

				case 4 :
					printf("Jumanji\n");
					printf("Price\t : 270\n");

		      printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=270*n;


					break;

				break;
				}
				break;

				case 3 :
					printf("1.Iron man\n");
					printf("2.Thor-Love and Thunder\n");
					printf("3.Spiderman-No way home\n");

			printf("\nEnter any number : ");
			scanf("%d",&n);

			    switch(n)
		      {
			clrscr();
				case 1:
					printf("Iron man\n");
					printf("Price\t : 350\n");

		      printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=350*n;


					break;

				case 2 :
					printf("Thor-Love and Thunder\n");
				       printf("Price\t : 360\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=360*n;


					break;

				case 3 :
					printf("Spiderman-No way home\n");
				       printf("Price\t : 380\n");
					break;

				 break;
			}
				break;
		    }
		    break;


	      case 3 :

		      printf("Press 1 for Drama movie\n");
		      printf("Press 2 for Comedy movie\n");

		      printf("\nEnter your choice : ");
		      scanf("%d",&n);

		      switch(n)
		      {
				case 1 :
					printf("1.Pappa tamne nahi samjay\n");
					printf("2.Chaal jeevi laiye\n");
					printf("3.Sharato lagu\n");

			printf("\nEnter any number : ");
			scanf("%d",&n);

			    switch(n)
		      {
			clrscr();
				case 1:
					printf("Pappa tamne nahi samjay\n");
					printf("Price\t : 350\n");

			 printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=350*n;


					break;

				case 2 :
					printf("Chaal jeevi laiye\n");
				       printf("Price\t : 400\n");

		      printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=400*n;


					break;

				case 3 :
					printf("Sharato lagu\n");
				       printf("Price\t : 230\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=230*n;


					break;

				 break;
			}
				break;


				case 2 :
					printf("1.Chhelo divas\n");
					printf("2.3 Ekka\n");
					printf("3.Shu thayu?\n");

			printf("\nEnter any number : ");
			scanf("%d",&n);

			    switch(n)
		      {
			clrscr();
				case 1:
					printf("Chhelo divas\n");
				       printf("Price\t : 420\n");

			 printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=420*n;


					break;

				case 2 :
					printf("3 Ekka\n");
					printf("Price\t : 290\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=290*n;


					break;

				case 3 :
					printf("Shu thayu?\n");
					printf("Price\t : 270\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=270*n;


					break;

				 break;
			}
				break;

		       }
		       break;

	      case 4 :
		      printf("Press 1 for Action movie\n");
		      printf("Press 2 for Thriller movie\n");
		      printf("Press 3 for sport movie\n");

		      printf("\nEnter your choice : ");
		      scanf("%d",&n);

		       switch(n)
		      {
				case 1 :
					printf("1.RRR\n");
					printf("2.The Warriorr\n");
					printf("3.Custody\n");
					printf("4.Salaar-part 1\n");

		      printf("\nEnter your choice : ");
		      scanf("%d",&n);

		     switch(n)
		      {
			clrscr();
				case 1:
					printf("RRR\n");
					printf("Price\t : 350\n");

			 printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=350*n;


					break;

				case 2 :
					printf("The Warrior\n");
					printf("Price\t : 290\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=290*n;


					break;

				case 3 :
					printf("Custody\n");
					printf("Price\t : 240\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=240*n;


					break;

				case 4 :
					printf("Salaar-part 1\n");
					printf("Price\t : 300\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=300*n;
						break;

				break;
				}

				break;

				case 2 :
					printf("1.Raththam\n");
					printf("2.Leo\n");
					printf("3.Varisu\n");
					printf("4.Eagle\n");


		      printf("\nEnter any number : ");
		      scanf("%d",&n);

		     switch(n)
		      {
			clrscr();
				case 1:
					printf("Raththam\n");
					printf("Price\t : 280\n");

			 printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=280*n;


					break;

				case 2 :
					printf("Leo\n");
					printf("Price\t : 300\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=300*n;


					break;

				case 3 :
					printf("Varisu\n");
					printf("Price\t : 240\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=240*n;


					break;

				case 4 :
					printf("Eagle\n");
					printf("Price\t : 300\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=300*n;


					break;

				break;
				}

				break;


				case 3 :
					printf("1.Jersey\n");
					printf("2.83\n");


		      printf("\nEnter any number : ");
		      scanf("%d",&n);

		     switch(n)
		      {
			clrscr();
				case 1:
					printf("Jersey\n");
					printf("Price\t : 270\n");

			 printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=270*n;


					break;

				case 2 :
					printf("83\n");
					printf("Price\t : 300\n");

		       printf("\nHow many persons you are : ");
		      scanf("%d",&n);

		      ticket=300*n;


					break;

				break;
				}
				break;
		      }
		      break;
		      }

		  clrscr();
		  textcolor(RED);
		  textbackground(WHITE);
	      printf("\n\n");
	      printf("--------------------------------------------------------------------------------");
	      cprintf("\t\t                                  Ticket Bill                               \t\t\n");
	      printf("--------------------------------------------------------------------------------\n");
	      textcolor(5);
	      textbackground(0);
	      cprintf("                                                           Rajhans Flamingo\n");
	      printf("\n");
	      printf("Name \t : ");
	      scanf("%s",&name);
	      printf("Contact No : ");
	      scanf("%ld",&num);
	      printf("Movie name : ");
	      scanf("%s",&movie);
	      printf("Show Time : ");
	      scanf("%s",&t);
	      printf("Date\t : 07/02/2024 \n");
	      printf("  \t\t\t\t\tTicket+GST : %d\n",ticket);
	      printf("--------------------------------------------------------------------------------");



	getch();

}
