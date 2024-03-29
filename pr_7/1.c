#include <stdio.h>

void main()
{

    int first, second;

    printf("Enter 1 for Addition.\n");
    printf("Enter 2 for Substraction.\n");
    printf("Enter 3 for Multiplication.\n");
    printf("Enter 4 for Division.\n");
    printf("Enter 5 for Modules.\n");
    printf("Enter 0 for exit.\n");

    int ch;

    do
    {

        printf("\nenter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:
            printf("Enter the first value : ");
            scanf("%d", &first);
            printf("Enter the second value : ");
            scanf("%d", &second);

            int res = addition(first, second);

            printf("Addition of %d and %d is : %d\n", first, second, res);
            break;

        case 2:
            printf("Enter the first value : ");
            scanf("%d", &first);
            printf("Enter the second value : ");
            scanf("%d", &second);

            res = substraction(first, second);

            printf("substraction of %d and %d is : %d\n", first, second, res);
            break;

        case 3:
            printf("Enter the first value : ");
            scanf("%d", &first);
            printf("Enter the second value : ");
            scanf("%d", &second);

            res = multiplication(first, second);

            printf("multiplication of %d and %d is : %d\n", first, second, res);
            break;

        case 4:
            printf("Enter the first value : ");
            scanf("%d", &first);
            printf("Enter the second value : ");
            scanf("%d", &second);

            division(first, second);
            break;

        case 5:
            printf("Enter the first value : ");
            scanf("%d", &first);
            printf("Enter the second value : ");
            scanf("%d", &second);

            res = modules(first, second);

            printf("modules of %d and %d is : %d\n", first, second, res);
            break;

        case 0:
            printf("Loop Terminated!!");
            break;

        default:
            printf("Invalid Choice!!");
            break;
        }
    } while (ch != 0);
}

int addition(int first, int second)
{
    return first + second;
}

int substraction(int first, int second)
{
    return first - second;
}

int multiplication(int first, int second)
{
    return first * second;
}

int division(int first, int second)
{
    if (second == 0)
    {
        printf("cannot divided by 0!!\n");
    }
    else
    {
        printf("Sum of %d and %d is : %d\n", first, second, first / second);
    }
}

int modules(int first, int second)
{
    return first % second;
}
