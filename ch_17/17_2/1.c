#include<stdio.h>

int sum();

void main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);

    int a[n];

for(int i=0;i<n;i++){
 printf("a[%d]\t: ",i);
 scanf("%d",&a[i]);
}  

int result=sum(n,a);

printf("The sum of an array is : %d",result);
}

int add=0;
int sum(int n,int a[])
{
for(int i=0;i<n;i++){    
     add += a[i];

}
return add;
}