#include <stdio.h>

int main() {
    int n, sum = 0;
    long long product = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int xi = 3 * i - 1;
        sum += xi;
        product *= xi;
    }
    
    printf("%d\n", sum);
    printf("%lld\n", product);

    return 0;
}
