#include<stdio.h>

int main()
{
    int num,sum=0,count;
    printf("enter a 5 digit number \n");
    scanf("%d",&num);

    count=num%10;
    num=num/10;
    sum=sum+count;

     count=num%10;
    num=num/10;
    sum=sum+count;

 count=num%10;
    num=num/10;
    sum=sum+count;

 count=num%10;
    num=num/10;
    sum=sum+count;

 count=num%10;
    num=num/10;
    sum=sum+count;
 
 printf("the value of sum %d \n",sum);

//the reverse order code is

int sn, rev=0;
int nums;
printf("the number for reverse order is\n");
scanf("%d",&nums);

//step 1
sn=nums % 10;
rev= rev * 10 +sn;
nums=nums /10;

//step 2
sn=nums % 10;
rev= rev * 10 +sn;
nums=nums /10;

//step 3
sn=nums % 10;
rev= rev * 10 +sn;
nums=nums /10;

//step 4
sn=nums % 10;
rev= rev * 10 +sn;
nums=nums /10;

//step 5
sn=nums % 10;
rev= rev * 10 +sn;
nums=nums /10;

printf("the number in reverse order is %d\n",rev);

 return 0;
}

