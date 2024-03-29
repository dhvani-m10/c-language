#include <stdio.h>

main()
{
     char pass[40];

    printf("Create your Password :  ");
    scanf("%s", &pass);

     int len = 0,ch=0,digit=0,special_char=0,small_char=0;

     len=strlen(pass);

     for (int i = 0; pass[i] != '\0'; i++)
    {
        if(pass[i]>='A' && pass[i]<='Z'){
            ch++;
        }else if(pass[i]>='a' && pass[i]<='z'){
            small_char++;
        }else if(pass[i]>='0' && pass[i]<='9'){
            digit++;
        }else if(pass[i]>=33 && pass[i]<=47){
            special_char++;
        }else if(pass[i]>=58 && pass[i]<=64){
            special_char++;
        }else if(pass[i]>=91 && pass[i]<=96){
            special_char++;
        }else if(pass[i]>=123 && pass[i]<=126){
            special_char++;
    }
}

if((ch>=1)&&(special_char>=1)&&(small_char>=1)&&(digit>=1)&&(len>=6)){
    printf("Your Password is strong!!");
}else{
    printf("Your Password is not Strong!!");
}
}