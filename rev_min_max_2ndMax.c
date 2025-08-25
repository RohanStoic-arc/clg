
#include <stdio.h>
#include <limits.h>

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;     
}

int main()
{   int n,max=INT_MIN,min=INT_MAX,max2;
    printf("enter size of array  ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array  ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    
    for(int i=0;i<n;i++) 
    {
        if(max<arr[i]) max=arr[i];
        if(min>arr[i]) min=arr[i];
        printf("%d, ",arr[i]);
    }
    
    for(int i=0;i<n;i++) 
    {
        if(max>arr[i]) max2=arr[i];
    }
    
    printf("\nsecond max element = %d  \n",max2);
    
    printf("\nmax = %d, min = %d \n",max,min);
    
    for(int i=0;i<n/2;i++) swap(&arr[i],&arr[n-i-1]);
    
    printf("reversed array ");
    
    for(int i=0;i<n;i++) printf("%d, ",arr[i]);
    
    
}
