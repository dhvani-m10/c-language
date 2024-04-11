#include<stdio.h>

main(){
	int n,i;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	//int square;
	printf("Squares are : \n");
	for(i=0;i<n;i++){
		printf("%d, ",*(arr +i)* *(arr+i));
	}
}