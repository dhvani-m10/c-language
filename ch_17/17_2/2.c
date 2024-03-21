#include<stdio.h>

int length();

void main()
{
    char n[20];
    printf("Enter String  : ");
    scanf("%s",&n);

    int l=length(n);

    printf("Length is : %d",l);
}

int length(char n[])
{
int len=0;
for(int i=0;n[i]!='\0';i++){
    len++;
}
return len;
}