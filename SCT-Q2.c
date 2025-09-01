// mean median mode for discrete series

#include<stdio.h>

void swap1(float *a, float *b){
    float temp=*a;
    *a=*b;
    *b=temp;
}

void swap2(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(float x[],int f[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(x[j]>x[j+1]) 
            {
                swap1(&x[j],&x[j+1]);
                swap2(&f[j],&f[j+1]);
            }
                
        }
        
    }
    
}
int main(){
    
    
    // mean of discrete series
    
    
    int n,sf=0;
    printf("enter total number of rows : ");
    scanf("%d",&n);
    float x[n],sfx=0,median,mode;
    int f[n];
    
    printf("enter values of x : ");
    for(int i=0;i<n;i++) scanf("%f",&x[i]);
    printf("enter values of f : ");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&f[i]);
        sf+=f[i];
        sfx+=x[i]*f[i];
    }
    
    printf("mean = %f \n",sfx/sf);
    
    
    // median of discrete series
     
    sort(x,f,n);
    
    int cf[n],sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=f[i];
        cf[i]=sum;
    }
    
    int mid,mid1,mid2;
    float val1=0,val2=0;
    if(sf%2==0)
    {
        mid1=sf/2,mid2=(sf/2)+1;
       for(int i=0;i<n;i++)
       {
           if(cf[i]>=mid1&&val1==0) val1=x[i];
           if(cf[i]>=mid2) 
           {
               val2=x[i];
               break;
           }
       }
       median = (val1+val2)/2;
    }
    else
    {
        mid=(sf+1)/2;
        for(int i=0;i<n;i++)
        {
            if(cf[i]>=mid)
            {
                median=x[i];
                break;
            }
        }
    }
    
    printf("median = %f",median);
    
        
        // mode for discrete series
        
        int max_freq=0;
        for(int i=0;i<n;i++)
        {
            if(max_freq<f[i])
            {
                max_freq=f[i];
                mode=x[i];
            }
        }
        
        printf("\nmode = %f",mode);
        printf("\nmax_freq = %d",max_freq);
    
    
}
