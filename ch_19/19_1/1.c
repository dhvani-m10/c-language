#include <stdint.h>

void cube();

void main()
{
    int size;

    printf("Enter Array Size : ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
       
            printf("a[%d][%d] : ", i);
            scanf("%d", &arr[i]);
        }
        printf("\n");
    }