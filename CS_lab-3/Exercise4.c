#include <stdio.h>

int main() {
    int n;
    float number, sum = 0.0;
    printf("Enter the number of floats: ");
    scanf("%d", &n);
    printf("Enter the floating-point numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &number);
        sum += number;
    }

    printf("The sum of the given numbers is: %.1f\n", sum);

    return 0;
}
