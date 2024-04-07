#include <stdint.h>

void cube();

void main()
{
    int size;

    printf("Enter Array Size : ");
    scanf("%d", &size);

    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Cube of all elements : \n");
    cube(arr,size);


}

void cube(int *arr,int size)
{
      for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d  ",(*(arr + i * size + j)) * (*(arr + i * size + j)) * (*(arr + i * size + j)));
        }
        printf("\n");
      }
}