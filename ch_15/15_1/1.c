#include <stdio.h>

main()
{

    char name[20];

    printf("Enter any string : ");
    scanf("%[^\n]", &name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
            name[i] = name[i] - 32;
    }
    printf("\nUppercase string: %s\n", name);
}