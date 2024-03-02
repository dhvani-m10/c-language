#include<stdio.h>

main(){

    int first,second,s=0,n=40;

    printf("Enter first number : ");
    scanf("%d",&first);

    
    printf("Enter second number : ");
    scanf("%d",&second);

    int year[s];
    for(int i=first;i<second;i++){
        if(i%4==0){
            year[s]=i;
            s++;
        }
 }
       printf("The Array is : ");
    for(int i=0;i<s;i++){
        printf("%d, ",year[i]);

    }


}
