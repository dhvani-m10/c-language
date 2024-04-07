#include <stdio.h>
void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
main()
{
    int a, b;

    printf("enter the value of a :\t");
    scanf("%d", &a);
    printf("enter the value of b :\t");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("A :%d\n", a);
    printf("B :%d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("A :%d\n", a);
    printf("B :%d\n", b);
}
