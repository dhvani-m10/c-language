#include<stdio.h>

main() {
    char str[100];

    printf("Enter a string: ");
   scanf("%[^\n]",&str);

int len=0;
for(int i=0;str[i]!='\0';i++){
    len++;
}    
    int i;
    char temp;
    
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
         
}
printf("Reversed string: %s\n", str);

}