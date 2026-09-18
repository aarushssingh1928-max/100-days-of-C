#include<stdio.h>
int main()
{
    int p;
    int r;
    int t;
    int n;
    scanf("%d %d %d %d",&p,&r,&t,&n);
    int s=(p*r*t)/100;
    int c=p * pow((1+r/n),(n*t));
    printf("%d %d",s,c);
    return 0;
}