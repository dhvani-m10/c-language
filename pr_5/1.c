#include<stdio.h>

main(){

    int n;

    printf("Enter size of an Array : ");
    scanf("%d",&n);

    int a[n];

    printf("==>Enter array's elements: \n");
    for(int i=0;i<n;i++){
        printf("a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    printf("Negative elements from an Array: \n");
     for(int i=0;i<n;i++){
        if(a[i]<0){
            printf("%d, ",a[i]);
            
        }
}
}