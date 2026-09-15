#include <stdio.h>

int main(){
    int n;
    double sum = 0;
    scanf("%d", &n);

    if(n <= 0){
        printf("Invalid input\n");
        return 0;
    }

    for(int i = 1; i <= n; i++){
        if(i == 1){
            sum += 1;
        }
        else{
            sum += (2.0 * i - 1) / (2 * i);
        }
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}