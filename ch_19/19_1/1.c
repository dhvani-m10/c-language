#include <stdint.h>

void cube();

void main()
{
    int size;

    printf("Enter Array Size : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++)
    {

        printf("a[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("Square of each element:\n");
     for (int i = 0; i < size; i++)
    {
        printf("%d ",*(arr + i) * *(arr + i));
    }
}