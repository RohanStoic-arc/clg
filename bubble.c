/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdbool.h>



void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void BubbleSort(int arr[],int n)
{
    
    for(int i=0;i<n-1;i++)
    {
    bool flag=1;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=0;
            }
        }
        if(flag) break;
    }
    
}

int main()
{
    int n;
    printf("enter number of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    BubbleSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}
