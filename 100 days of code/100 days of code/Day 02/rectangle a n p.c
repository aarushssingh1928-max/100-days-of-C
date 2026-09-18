#include<stdio.h>
int main()
{
    int l, b; 
    printf("Enter 2 numbers:");
    scanf("%d %d",&l,&b);
    int area=l*b;
    int parameter=2*(l+b);
    printf("Area of rectangle is %d\n",area);
    printf("Parameter of rectangle is %d\n",parameter);
    return 0; 
}