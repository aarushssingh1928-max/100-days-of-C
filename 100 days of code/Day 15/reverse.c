#include<stdio.h>
int main(){
    int n,rem,x;
    int rev=0;
    printf("Enter number ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reverse of number is %d",rev);
    return 0;


}