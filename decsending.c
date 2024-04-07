#include<stdio.h>

main()
{
        int n,des;

        printf("Enter the size of an Array : ");
        scanf("%d",&n);

         int a[n];

        for(int i=0;i<n;i++){
           printf("enter the value of %d : ",i);
           scanf("%d",&a[i]);
        }

        for(int i=0;i<n;i++){
                for(int j=i-1;j<n;j++){
                    if(a[i]<a[j]){
                               des=a[i];
                               a[i]=a[j];
                               a[j]=des;
                    }
                }
        }
}