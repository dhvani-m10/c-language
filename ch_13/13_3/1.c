#include<stdio.h>

main(){

   int row,col,n;
       
    printf("Enter the size of row :");
    scanf("%d",&row);

     printf("Enter the size of column :");
    scanf("%d",&col);

    int a[row][col];


     printf("==>Enter array element : \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        printf("arr[%d][%d] : ",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}

    float sum=0;
    float  avg;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=a[i][j];
            avg=sum/(row*col);
        }
     }

     printf("Average of an Array:");
     printf("%.2f",avg);
   
    }