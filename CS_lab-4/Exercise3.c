#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the number of elements per line: ");
    scanf("%d", &k);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);

        if ((n - i) % k == 0) {
            printf("\n");
        }
    }

    if (n % k != 0) {
        printf("\n");
    }

    return 0;
}
