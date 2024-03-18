#include <stdio.h>

main()
{

    char name[20], rev[20];

    printf("Enter any string :  ");
    scanf("%s", &name);

    int len = 0, n;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    printf("\nlength : %d\n\n", len);

    for (int i = 0; i < len; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
            name[i] = name[i] + 32;
    }

    for (int i = len - 1; i >= 0; i--,n++)
    {
        rev[n] = name[i];
    }

    int pal = 0;
    for (int i = 0;i<len;i++){
        if(name[i]==rev[i]){
            pal=1;
        }else{
            pal=0;
            break;
        }
    }
    if(pal==1){
        printf("\nThis String is Palindrom!");
    }else{
        printf("This String is not Paliandrom!");
    }
}