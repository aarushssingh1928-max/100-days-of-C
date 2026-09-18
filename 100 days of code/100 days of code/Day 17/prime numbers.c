#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x <= 1){
        printf("%d is not a prime number \n",x);
    }
    else {
        for(int i = 2; i <= x/2; i++){
            if(x % i == 0){
                printf("%d is not a prime number \n",x);
                return 0;
            }
        }
        printf("%d is a prime number \n",x);
    }
}