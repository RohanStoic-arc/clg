/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    //question 9
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         printf("s");
    //     }
    //     printf("\n");
    // }
    
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         if(i==0 || j==0 || i==4 || j== 4){
    //             printf("s");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //      printf("\n");
    // }
  //question 10
  
//   int rows=5,col=5;
//   int mid=rows/2;
//   for(int i=0;i<rows;i++){
//       for(int j=0;j<col;j++){
//           if(i == mid && j== mid){
//               printf("o");
//           }
//           else{
//               printf("s");
//           }
//       }
//       printf("\n");
//   }

int rows=15 and cols=18;
for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
        printf("s");
    }
    printf("\n");
}
    return 0;
}