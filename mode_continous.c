// mean , median and mode for continous series 
#include <stdio.h>

int main()
{
    int n;
    printf("enter total number of rows : ");
    scanf("%d",&n);
    
    printf("enter lower limits : ");
    float lower[n],upper[n];
    for(int i=0;i<n;i++) scanf("%f",&lower[i]);
    printf("enter upper limits : ");
    for(int i=0;i<n;i++) scanf("%f",&upper[i]);
    
    printf("\nenter frequency : ");
    int f[n];
    for(int i=0;i<n;i++) scanf("%d",&f[i]);
    
    // findin modal class 
    int f1=0,f0,f2;
    float l1;
    for(int i=0;i<n;i++)
    {
        if(f1<f[i]) 
        {
            f1=f[i];
            l1=lower[i];
            f0=f[i-1];
            f2=f[i+1];
        }
    }
    float i=upper[0]-lower[0];
    float sum1=f1-f0;
    float sum2=2*f1-f0-f2;
   
    float mode=l1 + (sum1/sum2)*i;
    
    printf("f1 = %d\nf0 = %d\nl1 = %f\nf2 = %d\ni = %f",f1,f0,l1,f2,i);
    printf("mode = %f",mode);
    
    
    return 0;
}
