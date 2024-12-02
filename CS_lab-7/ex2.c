#include <stdio.h>

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factorial of %d is %d.\n", number, factorial(number));

    return 0;
}
