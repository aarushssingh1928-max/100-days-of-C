#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int hours=s/3600;
    int mins=(s%3600)/60;
    int secs=s%60;
    printf("%d %d %d",hours,mins,secs);
    return 0;
}