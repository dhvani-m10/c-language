#include <stdio.h>

void main()
{
    FILE *fp;

    int n;

    fp = fopen("C:\\Users\\Dhvani\\OneDrive\\Desktop\\number.txt", "w");

    if (fp == NULL)
    {
        printf("File is not available!");
    }
    else
    {
        for (int i = 1; i <= 50; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                fprintf(fp, "%d\n", i);
            }
        }

        fclose(fp);

        printf("File open Successfully in txt.\n");
    }
}