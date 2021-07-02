#include<stdio.h>

int main()
{
    int  a=10;
    int b=20;
       float temp=a;
    a=b;
    b=temp ;
    printf("the value of a is\n  %d",a);
    printf("the value of b is  \n %d",b);
    return 0;
}
