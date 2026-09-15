#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int c=a+b;
    a=c-a;
    b=c-b;
    printf("a is %d\n",a);
    printf("b is %d\n",b);
    return 0;
}