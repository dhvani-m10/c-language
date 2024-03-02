#include<stdio.h>

main(){

    int n;
        int length;

    printf("Enter the size of an Array :");
    scanf("%d",&n);

    int arr[n];


     printf("==>Enter array element : \n");
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
       
    }


    for(int i=0;i<n;i++){
         length=n;
    }
    printf("Length of an Array : %d" ,length);

}