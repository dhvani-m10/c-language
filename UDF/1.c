#include <stdio.h>

void rev();

void main()
{
    int a;

    printf("Enter a : ");
    scanf("%d",&a);
    rev(a);
}

void rev(int a)
{
if(a==0){
    return;
}else{
    printf("%d",a%10);
    rev(a/10);
}
    
}