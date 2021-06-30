//wap to read a three number and find a middle nummber
#include<stdio.h>

int main()
{
int num1,num2,num3;
printf("the first number is \n");
scanf("%d",&num1);
printf("the second number is \n");
scanf("%d",&num2);
printf("the third  number is \n");
scanf("%d",&num3);
if (num2<num1 && num1<num3)
	printf("the middle number is %d\n",num1);

else if (num1<num2 && num2<num3)
	printf("the middle number is %d\n",num2);
else 
 	printf("%d is middle number is \n",num3);
return 0;
}
