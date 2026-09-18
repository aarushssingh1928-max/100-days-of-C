#include<stdio.h>
int main()
{
    int p;
    printf("Enter the marks of student in percentage: ");
    scanf("%d",&p);
    if(p>=90)
    {
        printf("A");
    }
    else if(p>=80)
    {
        printf("B");
    }
    else if(p>=70)
    {
        printf("C");
    }
    else if(p>=60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
}