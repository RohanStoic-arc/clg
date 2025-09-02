


#include <stdio.h>


void mat_sum(int arr1[][3],int arr2[][3],int r,int c)
{
    int res[r][c];
    for(int i=0;i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
      for(int i=0;i<r;i++)
    {
        
        for(int j=0;j<c;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}

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



// question 2 & 3

int row_sum,col_sum;
for(int i=0;i<r;i++)
    {
        row_sum=0,col_sum=0;
        
        for(int j=0;j<c;j++)
        {
            row_sum+=arr[i][j];
           col_sum+=arr[j][i];
        }
           printf("row no. %d sum = %d , column no. %d sum = %d\n",i+1,row_sum,i+1,col_sum);
       
    }

// question 4 
int f_row=0,l_row=0,f_col=0,l_col=0;
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
    if(i==0) f_row+=arr[i][j]; 
    if(j==0) f_col+=arr[i][j];
    if(i==r-1) l_row+=arr[i][j];
    if(j==c-1) l_col+=arr[i][j];
    }
}

printf("first row sum = %d\nlast row sum = %d\nfirst column sum = %d\nlast column sum = %d\n",f_row,l_row,f_col,l_col);


// question 5 transpose of matric

int trans[r][c];

for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        
        trans[i][j]=arr[j][i];
    }
}

    printf("\ntranspose of matrix = \n");

for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        printf("%d ",trans[i][j]);
    }
    printf("\n");
}


// question 6 

mat_sum(arr,trans,r,c);
    return 0;
}
