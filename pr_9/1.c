#include <stdio.h>

void main()
{
    FILE *even, *odd;

    even = fopen("C:\\Users\\Dhvani\\OneDrive\\Desktop\\even.txt", "w");
    if (even == NULL)
    {
        printf("For Even : File is not available!");
    }
    else
    {
        for (int i = 50; i <= 70; i++)
        {
            if (i % 2 == 0)
            {
                fprintf(even, "%d\t", i);
            }
        }
         fclose(even);

        printf("For Even : File open Successfully in txt.\n");
    }

    odd = fopen("C:\\Users\\Dhvani\\OneDrive\\Desktop\\odd.txt", "w");
    if (odd == NULL)
    {
        printf("For Odd : File is not available!");
    }
    else
    {
        for (int i = 50; i <= 70; i++)
        {
            if (i % 2 != 0)
            {
                fprintf(odd, "%d\t", i);
            }
        }

         fclose(odd);

        printf("For Odd : File open Successfully in txt.\n");
    }
}