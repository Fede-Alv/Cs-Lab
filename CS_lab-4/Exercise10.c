#include <stdio.h>

int main() {
    int n, target;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the target sum: ");
    scanf("%d", &target);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices: %d %d\n", i, j);
                return 0;
            }
        }
    }

    return 0;
}
