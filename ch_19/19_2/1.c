#include <stdio.h>

void rev();

void main()
{
    int size, i;

    printf("Enter the array size : ");
    scanf("%d", &size);

    int arr[size];

    printf("\n");

    for (i = 0; i < size; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    rev(arr, size);

    printf("\n\n");

    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void rev(int *arr, int n)
{
    int *a = arr;
    int *b = arr + n - 1;
    int c;

    while (a < b)
    {
        c = *a;
        *a = *b;
        *b = c;
        a++;
        b--;
    }
}