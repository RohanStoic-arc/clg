/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdbool.h>




void InsertionSort(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        j=i-1;
        
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
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
    
    InsertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}
