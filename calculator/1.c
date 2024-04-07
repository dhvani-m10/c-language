#include<stdio.h>

main(){

    int first,second;
    int sum=0,sub,mul=1;
    float div,mod;


    printf("Enter 1 for Addition.\n");
    printf("Enter 2 for Substraction.\n");
    printf("Enter 3 for Multiplication.\n");
    printf("Enter 4 for Division.\n");
    printf("Enter 5 for Modules.\n");
    printf("Enter 0 for exit.\n");



   // printf("Enter the first value : ");
   // scanf("%d",&first);
    //printf("Enter the second value : ");
    //scanf("%d",&second);

    int ch;

    do{

       printf("\nenter your choice : ");
       scanf("%d",&ch);

       switch(ch){

            case 1 : 
               printf("Enter the first value : ");
               scanf("%d",&first);
               printf("Enter the second value : ");
               scanf("%d",&second);   

               sum=first+second;

               printf("Addition of %d and %d is : %d\n",first,second,sum);

                break;


             case 2 : 
               printf("Enter the first value : ");
               scanf("%d",&first);
               printf("Enter the second value : ");
               scanf("%d",&second);   

               sub=first-second;

               printf("Substraction of %d and %d is : %d\n",first,second,sub);

                break;


             case 3 : 
               printf("Enter the first value : ");
               scanf("%d",&first);
               printf("Enter the second value : ");
               scanf("%d",&second);   

               mul=first*second;

               printf("Multiplication of %d and %d is : %d\n",first,second,mul);

                break;


             case 4 : 
               printf("Enter the first value : ");
               scanf("%d",&first);
               printf("Enter the second value : ");
               scanf("%d",&second);   

               div=first/second;

               printf("Sum of %d and %d is : %.2f\n",first,second,div);

                break;


             case 5 : 
               printf("Enter the first value : ");
               scanf("%d",&first);
               printf("Enter the second value : ");
               scanf("%d",&second);   

               mod=first%second;

               printf("Sum of %d and %d is : %.2f\n",first,second,mod);

                break;


            case 0 : 

                printf('loop terminate')

                break;

            default :

                printf("invalid choice !!");

                break;

       } 
    }while(ch!=6);

}







