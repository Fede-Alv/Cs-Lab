#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d sorted integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int el;
    printf("Enter the element to insert: ");
    scanf("%d", &el);

    int idx = 0;
    while (idx < n && arr[idx] < el) {
        idx++;
    }

    for (int i = n; i > idx; i--) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = el;

    printf("Insertion position: %d\n", idx);
    printf("New array:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
