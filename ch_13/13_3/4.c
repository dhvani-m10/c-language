#include <stdio.h>

main()
{

    int row, col, n;

    printf("Enter the size of row :");
    scanf("%d", &row);

    printf("Enter the size of column :");
    scanf("%d", &col);

    int a[row][col];

    printf("==>Enter array element : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
        
    int sum=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0||j==0||i==row-1||j==col-1){
             sum += a[i][j];   
              printf("%d ", a[i][j]); 
            }
             else{
                printf("  ");
             }     
        }
        printf("\n");
    }

    printf("\nThe sum of  boundary  elements of an Array : %d ",sum );

}