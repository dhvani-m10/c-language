#include<stdio.h>

main(){
	int rem,sum=0,mul=1,n;
	
	printf("Enter any number : ");
	scanf("%d",&n);
	
	rem=n%10;
	sum+=rem;
	mul*=rem;
	n/=10;
	
	printf("Reverse number : %d",rem);
}