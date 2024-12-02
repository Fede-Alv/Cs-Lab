#include <stdio.h>

int findSum(int arr[], int length) {
    if (length == 0)
        return 0;
    return arr[length - 1] + findSum(arr, length - 1);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty. Sum is 0.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The sum of the elements in the array is: %d\n", findSum(arr, n));

    return 0;
}
