#include <stdio.h>

int main() {
    int n;
    float num, sum = 0.0;

    printf("Enter the number of floats (n): ");
    scanf("%d", &n);

    int i = 0;

    while (i < n) {
        printf("Enter a float: ");
        scanf("%f", &num);
        sum += num;
        i++; 
    }

    printf("The sum of the given floats is: %.2f\n", sum);

    return 0;
}
