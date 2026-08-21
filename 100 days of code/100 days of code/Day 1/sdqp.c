#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int difference=a-b;
    int product=a*b;
    int quotient=a/b;
    printf("sum is %d\n",sum);
    printf("difference is %d\n",difference);
    printf("product is %d\n",product);
    printf("quotient is %d\n",quotient);
    return 0;
}