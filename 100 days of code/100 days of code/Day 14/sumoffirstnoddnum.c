#include <stdio.h>

int main() {
    int n, x, count = 0, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (x = 1; count < n; x++) {
        if (x % 2 != 0) {
            sum += x;     
            count++;      
        }
    }
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
