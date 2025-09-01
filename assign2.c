

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    // question 1
    
    int r,c;
    printf("enter rows and columns : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



// question 2 

int row_sum,col_sum;
for(int i=0;i<r;i++)
    {
        row_sum=0,col_sum=0;
        
        for(int j=0;j<c;j++)
        {
           row_sum+=arr[i][j];
           col_sum+=arr[j][i];
        }
           printf("row no. %d sum = %d , column no. %d sum = %d",i,row_sum,i,col_sum);
       
    }



    return 0;
}
