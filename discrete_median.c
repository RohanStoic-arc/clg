#include<stdio.h>

void swap1(float *x,float *y)
{
    float temp=*x;
    *x=*y;
    *y=temp;
}
void swap2(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void sort(float x[],int f[], int n)
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



int main()
{
    int n,cf;
    float median;
    printf("enter total number of values = ");
    scanf("%d",&n);
    
    int f[n];
    float x[n];
    
    
    //input
    printf("enter x values ");
    for(int i=0;i<n;i++) scanf("%f",&x[i]);
    printf("enter f values ");
    for(int i=0;i<n;i++) scanf("%d",&f[i]);
    
    //sorting
    sort(x,f,n);
    
    //sigma f
    int sf=0;
    for(int i=0;i<n;i++) sf+=f[i];
    
    //mid position
    int mid,mid1,mid2,val1,val2;
    if(sf%2==0) 
    {
        mid1=sf/2,mid2=(sf/2)+1,val1=0,val2=0;
        cf=0;
        for(int i=0;i<n;i++)
        {
            cf+=f[i];
            if(cf>=mid1&&val1==0) val1=x[i];
            if(cf>=mid2) 
            {
                val2=x[i];
                break;
            }
        }
        median=(val1+val2)/2;
    }
    else 
    {
        mid=(sf+1)/2;
          cf=0;
         for(int i=0;i<n;i++)
         {
                 cf+=f[i];
                 if(cf>=mid)
                     {
                         median=x[i];
                         break;
                     }
         }
    }
    
    
    printf("Median = %.2f\n", median);
    
    return 0;
  
    
}
