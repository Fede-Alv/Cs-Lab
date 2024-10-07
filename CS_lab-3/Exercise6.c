#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    printf("Enter the size of the square (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", num);
            num++;
        }
        puts("");
    }

    return 0;
}
