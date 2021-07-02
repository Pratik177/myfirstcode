#include<stdio.h>

int main()
{
float eng;
float physics;
float math;
float c;
float electrical;
float sum, percent;
printf("the mask obtained in engineering is  ");
scanf("%f",&eng);
printf("the mask obtained in physics is  ");
scanf("%f",&physics);
printf("the mask obtained in math is ");
scanf("%f",&math);
printf("the mask obtained in c is ");
scanf("%f",&c);
printf("the mask obtained in electrical is ");
scanf("%f",&electrical);
sum= eng+ math +physics +c+electrical;
percent=(sum/320)*100  ;
printf("the percent is \n %f", percent);
return 0;
}

