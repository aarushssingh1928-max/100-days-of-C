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
        sum += (2.0 * i) / (4 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}