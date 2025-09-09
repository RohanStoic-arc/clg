

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float x[20],f[20],sum_f=0,sum_f_by_x=0,f_logx=0;
    printf("enter total number of rows : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
        scanf("%f",&f[i]);
        sum_f+=f[i];
        f_logx+=f[i]*log10(x[i]);
        sum_f_by_x+=f[i]/x[i];
    }
    
    printf("sum of f : %f\n",sum_f);
    printf("sum of f by x : %f\n",sum_f_by_x);
    printf("sum of f*logx : %f\n",f_logx);
     
     
    printf("\nGM = %f",pow(10,f_logx/sum_f));
    printf("\nHM = %f\n",sum_f/sum_f_by_x);
        
    printf("x\t\tf\t\tf*logx\t\tlogx\t\tf/x\n");
    for(int i=0;i<n;i++)
    {
        printf("%f\t%f\t%f\t%f\t%f\n",x[i],f[i],f[i]*log10(x[i]),log10(x[i]),f[i]/x[i]);
    }
    
    return 0;
}
