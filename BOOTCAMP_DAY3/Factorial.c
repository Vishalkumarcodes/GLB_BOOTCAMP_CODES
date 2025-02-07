#include <stdio.h>

long long int factorial(int n) {
    long long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %lld\n", number, factorial(number));
    }
    
    return 0;
}
