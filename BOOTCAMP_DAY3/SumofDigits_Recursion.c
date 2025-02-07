// sum of digits using recursion
#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + sumOfDigits(n / 10);
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int sum = sumOfDigits(number);
    printf("Sum of digits: %d\n", sum);
    return 0;
}
