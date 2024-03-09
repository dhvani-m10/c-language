#include <stdio.h>

main()
{

    char name[20];

    printf("Enter any string : ");
    scanf("%[^\n]", &name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
            name[i] = name[i] + 32;
    }
    printf("\nLowercase string: %s\n", name);
}