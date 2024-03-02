#include<stdio.h>

main(){

    int n;
        float sum;
        float avg;

    printf("Enter the size of an Array :");
    scanf("%d",&n);

    int arr[n];


     printf("==>Enter array element : \n");
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
       
    }

     for(int i=0;i<n;i++){
        sum+=arr[i];
         avg=sum/n;
        }
          printf("Average of an Array : %.2f",avg);
}
