/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
//      int count=0;
     
//      for(int i=0;i<100;i++){
//         //  int age;
//         //  printf("Enter your age");
//         //  scanf("%d",&age);
//          if(i>=50 && i <= 60) count++;
//          else{
//              continue;
//          }
       
//      }
//   printf("%d",count);
for(int i=0;i<15;i++){
    for(int j=0;j<18;j++){
    if(i < 3){
        printf("*");
    }
    else if(i < 6 && j < 4){
        printf("*");
    }
    else if(i < 9 && i >=6){
        printf("*");
    }
    else if(i > 8 && i < 12){
        if(j > 13 && j <18){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    else if(i > 11 && i < 15){
        printf("*");
    }
    else{
        printf(" ");
    }
}
printf("\n");
}
    return 0;
}