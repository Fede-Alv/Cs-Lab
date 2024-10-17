// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     if (n < 3) {
//         printf("Please enter at least three elements.\n");
//         return 1;
//     }

//     int arr[n];
//     int sum = 0;
//     int min, max;

//     printf("Enter %d integers:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i]; 
//     }

//     min = max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == min || arr[i] == max) {
//             sum -= arr[i];
//         }
//     }

//     printf("Sum excluding all occurrences of the minimum (%d) and maximum (%d) elements is: %d\n", min, max, sum);

//     return 0;
// }


#include <stdio.h>

int main() {
    int n, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Please enter at least three elements.\n");
        return 1;
    }

    int sum = 0;
    int min, max;
    int min_count = 0, max_count = 0;

    printf("Enter %d integers:\n", n);
    scanf("%d", &num);
    sum = min = max = num;
    min_count = max_count = 1;

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        sum += num;

        if (num < min) {
            min = num;
            min_count = 1;
        } else if (num == min) {
            min_count++;
        }

        if (num > max) {
            max = num;
            max_count = 1;
        } else if (num == max) {
            max_count++;
        }
    }

    int result = sum - (min * min_count) - (max * max_count);

    printf("Sum excluding all occurrences of the minimum (%d) and maximum (%d) elements is: %d\n", min, max, result);

    return 0;
}
