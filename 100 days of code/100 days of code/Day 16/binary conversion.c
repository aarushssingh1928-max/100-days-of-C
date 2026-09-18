#include <stdio.h>

int main() {
    int n, temp;
    int binary_number = 0;
    int place_value = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Binary representation of 0 is: 0\n");
        return 0;
    }
    temp = n;
    while (temp > 0) {
        int remainder = temp % 2;               
        binary_number += remainder * place_value; 
        place_value *= 10;                      
        temp /= 2;                              
    }
    printf("Binary representation of %d is: %lld\n", n, binary_number);
    return 0;
}
