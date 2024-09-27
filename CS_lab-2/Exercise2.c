#include <stdio.h>

int main() {
    int a, b, k, temp, sum = 0;

    printf("Enter two positive integers (a and b) for the range: ");
    scanf("%d %d", &a, &b);
    
    printf("Enter the positive integer k: ");
    scanf("%d", &k);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    int i = a;

    while (i <= b) {
        if (i % k == 0) {
            sum += i;
        }
        i++;
    }

    printf("The sum of numbers divisible by %d in the range [%d, %d] is: %d\n", k, a, b, sum);

    return 0;
}
