#include<stdio.h>
int main(){
    int n,rem,x;
    int rev=0;
    scanf("%d",&n);
    x=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==x){
        printf("Number is Planidrome");
    }
    else{
        printf("Number is not planidrome");
    }
    return 0;
   
}