#include<stdio.h>
int main()
{
    float r;
    scanf("%f",&r);
    float area=3.141*r*r;
    float circumference=2*3.141*r;
    printf("Area of circle is %.2f\n",area);
    printf("circumference of circle is %.2f\n",circumference);
    return 0;

}