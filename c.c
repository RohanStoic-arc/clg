// 1. wap that will print your mailing address in the following form 
//name , address, email
// 2. given the radius of a circle write a program to compute and display its area 
//3. given the values of three variables a,b,and c wap to compute and display the values of x
// where x=a/b - c

// 4. relationship between celcius and fahrenhiet is govern by the formula f=9c/5 + 32;
// wap to convert the temprature from celcius to fahrenheit 
// from f to celcius
// 5. area of triangle is given by a= sqroot(s(s-a)(s-b(s-c)))) where a b c are the side of 
//triangle and 2s=a+b+c
//wap to compute the area of triangle given the values if a b and c 
#include<stdio.h>
#include<math.h>


int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main()
{
    
    
    // 1. wap that will print your mailing address in the following form 
//name , address, email

    // printf("program 1 \n");

    // char f_name[100],l_name[100], address[100], mail_ad[100];
    // printf("enter first name = ");
    // scanf("%s",f_name);
    // printf("enter last name = ");
    // scanf("%s",l_name);
    // printf("enter address= ");
    // scanf("%s",address);
    // printf("enter mail address = ");
    // scanf("%s",mail_ad);
    
    // printf("name : %s %s \naddress : %s\nmail address : %s \n",f_name,l_name,address,mail_ad);
    
             //2. radius of the circle
             
// printf("\nprogram 2 \n");
// float  r;
// printf("enter radius = ");
// scanf("%f",&r);
// float area=r*r*3.14;
// printf("area = %f",area);

//              //3. computing a,b,c
             
// printf("\nprogram 3 \n");
// float a,b,c;
// printf("\nenter values of a , b and c : ");
// scanf("%f %f %f",&a,&b,&c);
// float x=a*b-c;
// printf("a*b-c = %f",x);

    //4.  relationship between celcius and fahrenhiet is govern by the formula f=9c/5 + 32;
// wap to convert the temprature from celcius to farenheit 
// from f to celcius

// printf("\nprogram 4 \n");
// float f;
// printf("\nenter temprature in celsius : ");
// scanf("%f",&c);
// f=((9*c)/5) +32;

// printf("farenheit = %f",f);

// printf("\nenter temprature in farenheit : ");
// scanf("%f",&f);

// c=5*((f-32)/9);
// printf("celsius : %f",c);



    //5. area of triangle is given by a= sqroot(s(s-a)(s-b)(s-c)) where a b c are the side of 
//triangle and 2s=a+b+c
//wap to compute the area of triangle given the values of a b and c 


// printf("\nprogram 5 \n");
// float s;
// printf("\nenter values of a,b,c : ");
// scanf("%f %f %f",&a,&b,&c);
// s=(a+b+c)/2;
// float ar=sqrt(s*(s-a)*(s-b)*(s-c));

// printf("area of triangle : %f",ar);

// question 4 
// int num1,num2;
// printf("enter two numbers for addition and subtraction : \n");
// scanf("%d %d",&num1,&num2);
// printf("sum of %d + %d= %d\n",num1,num2,sum(num1,num2));
// printf("sub of %d + %d= %d",num1,num2,sub(num1,num2));


//question 8  
int a,b,c;
printf("enter values of a,b and c : ");
scanf("%d %d %d",&a,&b,&c);

printf("%dx+%dy=%d",a,b,c);
return 0;

}
