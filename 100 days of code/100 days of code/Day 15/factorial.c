#include<stdio.h>
int main(){
    int x,n;
    int factorial=1;
    printf("Enter n ",n);
    scanf("%d", &n);
    x=1;
    while (x <= n){
        factorial *=x;
        x++;
    }
    printf("Factorial of %d = %d\n", n, factorial);
    return 0;

}