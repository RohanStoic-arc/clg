

#include <stdio.h>
#include<limits.h>
#include<stdbool.h>


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    // 1.
    
    
    
    int n;
    scanf("%d",&n);
    int arr[n];
    
    printf("enter elements of array : ");
    
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    printf("printing elements of array : ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    
    
    
    
    
    // 2.
    
    printf("\nreversed array : ");
    for(int i=n-1;i>=0;i--) printf("%d ",arr[i]);
    
    
    
    
    
    
    //3.
    
    int max1=INT_MIN,max2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max1<arr[i])
        {
            max1=arr[i];
        }
        
    }
    
    // second larges
    for(int i=0;i<n;i++)
    {
        if(arr[i]<max1)
        {
            max2=arr[i];
        }
        
    }
    
    printf("\nsecond max element element = %d",max2);
    
    
    
    printf("\nmax element = %d",max1);
    
    
    
    
    // question 4.
    
     int min1=INT_MAX,min2=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(min1>arr[i])
        {
            min1=arr[i];
        }
        
    }
    
    printf("\nsmallest element = %d",min1);
    
    
    
    // question 5
    
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    
    printf("\nsum = %d",sum);
    
    
    
    
    
    // question 6
    
    printf("\nelements at even position : ");
    for(int i=0;i<n;i+=2) printf("%d ",arr[i]);
    
    printf("\nelements at odd position : ");
    for(int i=1;i<n;i+=2) printf("%d ",arr[i]);
    
    // question 7
    
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
    
    printf("\nsorted array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    printf("\nsecond smallest elemtent = %d ",arr[1]);
    
    
    //8
    
    printf("\ncopy elements : ");
    int arr2[n];
    for(int i=0;i<n;i++) 
    {
        arr2[i]=arr[i];
        printf("%d ",arr2[i]);
    
    }
    
    //9
    
    int s;
    printf("\nenter element you want to search for : ");
    scanf("%d",&s);
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s) printf("element found at %d index",i+1);
    }
    
    
    //10
    int pro=1;
    for(int i=0;i<n;i++) pro*=arr[i];
    
    printf("\nproduct = %d",pro);
    return 0;
}
