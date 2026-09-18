#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    return 0;
}