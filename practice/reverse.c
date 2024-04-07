// #include<stdio.h>

// main(){

//     int n;

//     printf("Enter the size of an Array :");
//     scanf("%d",&n);

//     int arr[n];

//      printf("==>Enter array element : \n");
//     for(int i=0;i<n;i++){
//         printf("arr[%d] : ",i);
//         scanf("%d",&arr[i]);

//             for(int i=0;i<n;i++){
//                 for(int j=0;j<n;j++){
//                  int   rev=arr[i];
//                     arr[i]=arr[j];
//                     arr[j]=rev;
//                 }
//             }

// for(i=0;i<n;i++){
//     printf("%d\n",i,arr[i]);
// }

// }
// }

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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
        }
    }
}