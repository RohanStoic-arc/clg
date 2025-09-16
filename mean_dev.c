#include<stdio.h>

int main()
{
    
    int n,i;
    printf("enter total number of classes : ");
    scanf("%d",&n);
    
    float lower[n],upper[n],freq[n],cf[n],x[n],sum_fx=0;
    printf("enter lower upper and freq respectively : \n");
    
    for(i=0;i<n;i++)
    {
      scanf("%f %f %f",&lower[i],&upper[i],&freq[i]);
      x[i]=(lower[i]+upper[i])/2;
      
    }
    
    float h=upper[1]-lower[1];
    //cf
    cf[0]=freq[0];
    for(i=1;i<n;i++) cf[i]=cf[i-1]+freq[i];
    
    float N=cf[n-1];
    
    //mean
    
    for(i=0;i<n;i++) sum_fx+=x[i]*freq[i];
    
    float mean=sum_fx/N;
    
    //median
    
    int M_idx;
    for(i=0;i<n;i++)
    {
        if(cf[i]>=N/2) 
        {
            M_idx=i;
            break;
        }
    }
    
    float median = lower[M_idx] + ((N/2-cf[i-1])/freq[M_idx])*h;
    
    
    printf("mean = %f , median = %f ",mean,median);
    // mode
    float max=freq[0];
    for(i=0;i<n;i++) if(freq[i]>max) max=i;
    float mode = lower[]
    
    
    
    return 0;
}
