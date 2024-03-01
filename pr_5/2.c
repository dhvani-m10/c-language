#include<stdio.h>

main(){

    int r,c;

    printf("Enter array's row size : ");
    scanf("%d",&r);

    printf("Enter array's column size : ");
    scanf("%d",&c);

    int a[r][c];

    printf("==>Enter array's elements: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
    printf("\n");
}

int n=0;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]>n){
                n=a[i][j];
            }
        }
     }
         printf("The largest element is : %d",n);

}