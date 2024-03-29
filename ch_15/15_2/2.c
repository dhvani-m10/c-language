#include <stdio.h>

main()
{

    char email[100];
    char pass[100];
    char desiredEmail[] = "admin@gmail.com";
    char desiredPass[] = "123456";

    printf("Welcome to the login system.\n");
    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your password: ");
    scanf("%s", pass);

    if (strcmp(email, desiredEmail) == 0 && strcmp(pass, desiredPass) == 0)
    {
        printf("Login Successful..");
    }
    else
    {
        printf("Login Failed.Invaild Credentials.");
    }
}