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
	
	int small=0;
		  for(i=0;i<n;i++){
		  	if(arr[i]<n){
		  	printf("small : %d\n",arr[i]);
			  }
	}
}
	
