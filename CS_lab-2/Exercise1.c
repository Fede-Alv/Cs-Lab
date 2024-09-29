#include <stdio.h>

int main() {
    int n, i = 1;
    int sum = 0;
    long long product = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (i <= n) {
        int element = 3 * i - 1;
        sum += element;
        product *= element;
        i++;
    }
    printf("Sum of first %d elements: %d\n", n, sum);
    printf("Product of first %d elements: %lld\n", n, product);

    return 0;
}
