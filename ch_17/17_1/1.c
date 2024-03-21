#include <stdio.h>

int get_cube();

void main()
{
    int a;
    printf("Enter any number : ");
    scanf("%d", &a);

    int result = get_cube(a);

    printf("Cube of %d is : %d ", a, result);
}

int get_cube(int a)
{

    return a * a * a;
}