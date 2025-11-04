

#include <stdio.h>

int main()
{
    
    printf("program : 1\n\n");
    
    for(int i=1;i<6;i++) 
    {
        for(int j=1;j<6;j++)
        {
            printf("S ");
        }
        printf("\n");
    }
    
    
     printf("\n\nprogram : 2\n\n");
    
    printf("\n");
    
      for(int i=1;i<6;i++) 
    {
        for(int j=1;j<6;j++)
        {
            if(i+j==6 && i==j) 
            {
                printf("O ");

            }
            else printf("S ");
        }
        printf("\n");
    }
    
    
    printf("\n \n \n");
    printf("\n\nprogram : 3\n\n");
    
        for(int i=1;i<6;i++) 
    {
        for(int j=1;j<6;j++)
        {
            if(j==1 || j==5 || i==1 || i==5 ) 
            {
                printf("S ");

            }
            else printf("  ");
        }
        printf("\n");
    }
    
    int age,count=0;

 printf("\n\nprogram : 4\n\n");
 
 
for(int i=0;i<3;i++)
{
    printf("enter age of person %d : ",i+1);
    scanf("%d",&age);
    if(age>50 && age<60) count++;
}

printf("no. of person aged between 50 - 60 are : %d \n \n",count);

 printf("\n\nprogram : 5\n\n");
 
for(int i=0;i<15;i++)
{
    for(int j=0;j<18;j++)
    {
        if(i<3 || i>11) printf("* ");
        else if((((i>=3 && i<=5 ) && j<4) || (i>8 && i< 12 ) && j>13) || i>5 && i<9 )printf("* ");
        else printf("  ");
    }
    printf("\n");
}



    return 0;
}
