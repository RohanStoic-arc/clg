// mean median mode for individual series

#include<stdio.h>

int main(){
    
    
    //mean for individual series
    int n;
    printf("enter total number of elements : ");
    scanf("%d",&n);
    float arr[n],sum=0,median,mode;
    
    printf("enter elements : ");
    for(int i=0;i<n;i++) 
    {
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    
    printf("mean = %f",sum/n);
    
    // median for individual series
    if(n%2==0)
    {
        median=(arr[n/2]+arr[(n/2)-1])/2;
    }
    else median=arr[(n-1)/2];
    
    printf("\nmedian = %f",median);
    
    // mode for individual series
    
    int count,mxcount=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j]) count++;
        }
        if(count>mxcount) 
        {
            mxcount=count;
            mode=arr[i];
        }
    }
    
    printf("\nmode = %f",mode);
    printf("\nfrequency = %d",mxcount);
    
    
    
}
