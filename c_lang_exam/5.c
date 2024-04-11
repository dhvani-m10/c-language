#include<stdio.h>

struct house{
	int room_quantity;
	int established_year;
	char city[20];
};

main(){
	int n,i;
	
	printf("Enter the number of house as per your choice : ");
	scanf("%d",&n);
	
	struct house h1[n];
	
	for(i=0;i<n;i++){
		printf("House Details no %d: \n",i+1);
		printf("Enter Room Quantity : ");
		scanf("%d",&h1[i].room_quantity);
		printf("Enter Established year : ");
		scanf("%d",&h1[i].established_year);
		fflush(stdin);
		printf("Enter city name : ");
		scanf("%s",&h1[i].city);
	}
	
		for(i=0;i<n;i++){
			printf("\n\n**House no %d**\n",i+1);
			printf("Room quantity ==> %d\n",h1[i].room_quantity);
			printf("Established year ==> %d\n",h1[i].established_year);
			printf("City ==> %s\n",h1[i].city);
		}

}