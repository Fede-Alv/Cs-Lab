#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    printf("The sum of the digits of %d is: %d\n", number, sumOfDigits(number));

    return 0;
}
