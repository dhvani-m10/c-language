#include <stdio.h>

void main()
{
    int len=0,i;
    int *ptr;
    char name[50];

    printf("Enter String : ");
    scanf("%[^\n]", &name);
    
  for(i=0;name[i]!=NULL;i++,len++){
    ptr=&len;
  }

  printf("The length of a string is: %d",*ptr);
}