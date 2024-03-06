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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int sum=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
                sum += a[i][j];
            
        }
    }

    printf("\nThe sum of diagonal elements of an Array : %d ",sum );
}