#include <stdio.h>

main()
{

    int row, col;

    printf("Enter the size of row :");
    scanf("%d", &row);

    printf("Enter the size of column :");
    scanf("%d", &col);

    int a[row][col];

    printf("==>Enter array A's element : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    int b[row][col];

    printf("==>Enter array B's element : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    int c[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Array C is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",c[i][j]);
        }
           printf("\n");
    }
}