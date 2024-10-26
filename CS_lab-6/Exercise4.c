#include <stdio.h>

int main() {
    int n, m, scalar;

    printf("Enter rows (n) and columns (m): ");
    scanf("%d %d", &n, &m);
    printf("Enter the scalar value: ");
    scanf("%d", &scalar);

    int matrix[n][m];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Resulted matrix after scalar multiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j] * scalar);
        }
        printf("\n");
    }

    return 0;
}
