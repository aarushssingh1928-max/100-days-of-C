#include <stdio.h>

int main() {
    int n, x;
    int product = 1; 
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (x = 1; x <= n; x++) {
        if (x % 2 == 0) {
            product *= x;     
        }
    }
    printf("The product of even numbers from 1 to %d is: %d\n", n, product);

    return 0;
}
