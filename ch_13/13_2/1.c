#include<stdio.h>

main(){

    int size1,size2;
    int sum=0;
       
    printf("Enter the size of an Array1 :");
    scanf("%d",&size1);

    int a[size1];


     printf("==>Enter array A's element : \n");
    for(int i=0;i<size1;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&a[i]);
       
    }

   printf("Enter the size of an Array2 :");
    scanf("%d",&size2);

    int b[size2];


     printf("==>Enter array B's element : \n");
    for(int i=0;i<size2;i++){
        printf("arr[%d] : ",i);
        scanf("%d",&b[i]);
       
    }

    int size3=size1+size2;
    int c[size3];
        for(int i=0;i<size1;i++){
            c[i]=a[i];
 }

    for(int i=0;i<size2;i++){
    c[size1+i]=b[i];
    }

     printf("Array c is : ");
     for(int i=0;i<size3;i++){
        printf("%d, ",c[i]); 
    }
    printf("\t");
}