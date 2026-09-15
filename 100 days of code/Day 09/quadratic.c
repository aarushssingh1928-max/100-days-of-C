#include <stdio.h>
#include <math.h>

int main(void)
{
    double a;
    printf("Enter the value of a: ");
    scanf("%lf",&a);
    double b;
    printf("Enter the value of b: ");
    scanf("%lf",&b);
    double c;
    printf("Enter the value of c: ");
    scanf("%lf",&c);
    double D,r1,r2;
    if (a==0)
    {
        printf("The value cannot be zero");
        return 1;
    }
    D=(b*b)-(4*a*c); 
    if(D>0)
    {
         r1=(-b+sqrt(D))/(2*a);
         r2=(-b-sqrt(D))/(2*a);
         printf("Roots are %.2f and %.2f",r1,r2);
         printf("Roots are real and distinct\n");
    }
    else if(D==0)
    {
         r1=r2=(-b)/(2*a);
         printf("Roots are %.2f and %.2f",r1,r2);
         printf("Roots are real and equal\n");
    }
    else
    {
        printf("Roots are imaginary\n");
    }
    return 0;
    
}