#include<stdio.h>

main(){

    int size;
       
    printf("Enter the size of an Array :");
    scanf("%d",&size);

    int a[size];


     printf("==>Enter array element : \n");
    for(int i=0;i<size;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&a[i]);
       
    }

    printf("The squares are: ");
    int square;
    for(int i=0;i<size;i++){
        square=a[i]*a[i];
        printf("%d, ", square);

    }
}