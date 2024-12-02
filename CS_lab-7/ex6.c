#include <stdio.h>

int findMax(int arr[], int length) {
    if (length == 0)
        return 0;

    int max = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty. Max is 0.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The maximum value in the array is: %d\n", findMax(arr, n));

    return 0;
}
