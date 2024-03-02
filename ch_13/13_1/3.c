#include<stdio.h>

main(){

    int n;
    int sum=0;
       
    printf("Enter the size of an Array :");
    scanf("%d",&n);

    int a[n];


     printf("==>Enter array A's element : \n");
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&a[i]);
       
    }

    int b[n];


     printf("==>Enter array B's element : \n");
    for(int i=0;i<n;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&b[i]);
       
    }

    int c[n];
     printf("Array C is : ");
     for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
       printf("%d, ",c[i]);
     
     }
     }
     
   
            
     
