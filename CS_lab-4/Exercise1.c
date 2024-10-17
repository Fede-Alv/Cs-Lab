#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = (float)sum / n;
    printf("Average: %.1f\n", average);

    printf("Elements less than the average:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] < average) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}