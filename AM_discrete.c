#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    float arr[n],sfx=0,sf=0,fq[n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(int i=0;i<n;i++) 
    {
        scanf("%f",&fq[i]);
        sf+=fq[i];
    }
    for(int i=0;i<n;i++)
    {
        sfx=sfx+(fq[i]*arr[i]);
    }
    
    printf("mean = %f",sfx/sf);
    


    return 0;
}
