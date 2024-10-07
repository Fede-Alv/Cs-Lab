#include <stdio.h>

int main() {
    int n, i, j;
    int num = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
