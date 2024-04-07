#include<stdio.h>

void leap_year();

void main(){
    int sy,ey;
    printf("Enter start year : ");
    scanf("%d",&sy);
    
    printf("Enter end year : ");
    scanf("%d",&ey);

printf("Leap years between %d and %d are:\n", sy, ey);
    leap_year(sy, ey);


}

void leap_year(int sy,int ey){
    if(sy<=ey){
    if(sy%4==0){
 printf(" %d ",sy);
 leap_year(sy+1,ey);  
    } 
//   }else{
//        return ;
//         //
//     }
}
}