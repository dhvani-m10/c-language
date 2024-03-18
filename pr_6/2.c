#include <stdio.h>

main()
{

    char name[20];

    printf("Enter any string :  ");
    scanf("%s", &name);

    int len = 0, count;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    for(int i=0;i<len;i++){
        count=1;
        if(name[i]!='\0'){
            for(int j=i+1;j<len;j++){
                if(name[i]==name[j]){
                    count++;
                    name[j]='\0';
                }
            }
            printf("%c : %d\n",name[i],count);
        }
    }
}