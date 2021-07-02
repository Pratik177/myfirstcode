#include<stdio.h>

int main()
{
    float dis,meter,feet,inch , centimeter;
    printf("the distance between two cities in km \n");
    scanf("%f",&dis);
    meter = dis*1000;
    feet = dis *3200.81;
    inch = dis* 39970.1;
    centimeter= dis *100000;
    printf("the value in meter is %f \n",meter);
    printf("the value in feet is %f\n",feet);
    printf("the value in inch is %f \n",inch);
    printf("the value in centi is %f \n",centimeter);
return 0;
}


