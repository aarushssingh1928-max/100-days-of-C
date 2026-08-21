#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>=c && a+c>=b && b+c>=a)
    {
        printf("The triangle is valid");
        if(a==b && b==c)
    {
        printf("\nThe triangle is equilateral");
    }
    else if(a==b || b==c || a==c){
        printf("\nThe triangle isosceles");
    }
    else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
        printf("\nThe triangle is right angled");
    }
    else{
        printf("\nThe triangle is scalene");
    }
}
    else{
        printf("The triangle is invalid");
    }
    return 0;
}