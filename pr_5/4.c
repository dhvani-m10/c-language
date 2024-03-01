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
int r1,c1;


    printf("Enter row number : ");
    scanf("%d",&r1);
    printf("Elements of row %d: ",r1);
    int sum=0;
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        
        if(i==r1){
            printf("%d, ",a[i][j]);
            sum+=a[i][j];          
}
        }
}
            printf("\nThe sum of a row %d: %d\n\n",r1,sum);

int csum=0;
  printf("Enter column number : ");
    scanf("%d",&c1);
    printf("Elements of column %d: ",c1);
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        
        if(j==c1){
            printf("%d, ",a[i][j]);
            csum+=a[i][j];     
}
        }
}
            printf("\nThe sum of a column %d: %d\n\n",c1,csum);

}