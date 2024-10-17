#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements that are less than both their neighbors:\n");

    for(int i = 0; i < n; i++) {
        if (i == 0) {
            if (arr[i] < arr[i + 1]) {
                printf("%d ", arr[i]);
            }
        } else if (i == n - 1) {
            if (arr[i] < arr[i - 1]) {
                printf("%d ", arr[i]);
            }
        } else {
            if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
                printf("%d ", arr[i]);
            }
        }
    }

    printf("\n");
    return 0;
}
