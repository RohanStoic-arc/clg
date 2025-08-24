/******************************************************************************
arithmetic mean using direct method of continous series

*******************************************************************************/
#include <stdio.h>

int main()
{
    float start,end;
    int sf=0;
    float sfm=0,ci;
    printf("enter start and end value = ");
    scanf("%f %f",&start,&end);
    printf("enter class interval = ");
    scanf("%f",&ci);
    int n=(end-start)/ci;
    int fq[n];
    printf(" n = %d",n);
    printf("enter class frequency = ");
    //frequency input and sigma of frequency
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&fq[i]);
        sf=sf+fq[i];
    }
    printf("sf = %d",sf);
    
    float mid=(start+(start+ci))/2;
    printf("mid = %f ",mid);
     //sigma frequency*mid
    
    for(int i=0;i<n;i++)
    {
        sfm=sfm+(fq[i]*mid);
        mid+=ci;
        printf("sfm = %f \n",sfm);
    }
    
    // printf(" sfm = %f",sfm);
    
    
   
    
    printf("mean = %f",sfm/sf);
    


    return 0;
}
