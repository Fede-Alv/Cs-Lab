#include <stdio.h>

int main() {
    int n, i = 1;
    double sum = 0.0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += 1.0 / i;
        i++; 
    }

    printf("The sum of the harmonic series up to %d terms is: %.3f\n", n, sum);

    return 0;
}
