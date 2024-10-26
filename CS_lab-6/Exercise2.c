#include <stdio.h>

int main() {
    int n, m;
    
    printf("Enter rows (n) and columns (m): ");
    scanf("%d %d", &n, &m);

    int matrix[n][m]; // dimension

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
