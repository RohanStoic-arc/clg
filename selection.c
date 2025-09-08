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
void SelectionSort(int arr[],int n)
{
    
    for(int i=0;i<n-1;i++)
    {
        int smIdx=i;
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<arr[smIdx])
           {
               smIdx=j;
           }
        }
        swap(&arr[i],&arr[smIdx]);
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
    
    SelectionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
  

    return 0;
}
