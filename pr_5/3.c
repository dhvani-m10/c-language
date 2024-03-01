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

printf("The transpose matrix of an array:\n");
 for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[j][i]);        }
        printf("\n");
 }
}