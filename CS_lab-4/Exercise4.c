#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int idx, el;
    printf("Enter the index and the element to insert: ");
    scanf("%d %d", &idx, &el);

    if (idx < 0 || idx > n) {
        printf("Invalid input\n");
    } else {
        for (int i = n; i > idx; i--) {
            arr[i] = arr[i - 1];
        }
        arr[idx] = el;

        printf("New array:\n");
        for (int i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
