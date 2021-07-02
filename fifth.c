#include<stdio.h>

int main()
{
    float length, breath, radius;
    float area,peremeter ,areaC;
    printf("the length of a rectangle is ");
    scanf("%f",&length);
    printf("the breath of a rectangle is ");
    scanf("%f",&breath);
    printf("the radius of a circle is ");
    scanf("%f",&radius);
    area=length*breath;
    peremeter=2*(length+breath);
    areaC= 3.141*(radius)*radius;
    printf("the area of rectangle is %f \n",area);
    printf("the peremeter of rectangle %f \n",peremeter);
    printf("the area f radius is %f \n",areaC);
    return0 ;
}
