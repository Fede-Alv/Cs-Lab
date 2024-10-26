#include <stdio.h>

int main() {
    int n, m;


    printf("Enter the number of rows (n) and columns (m): ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    int row_sums[n];
    int col_sums[m];


    for (int i = 0; i < n; i++) {
        row_sums[i] = 0;
    }
    for (int j = 0; j < m; j++) {
        col_sums[j] = 0;
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
            row_sums[i] += matrix[i][j];
            col_sums[j] += matrix[i][j];
        }
    }


    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    printf("Row sums:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d sum = %d\n", i + 1, row_sums[i]);
    }

    
    printf("Column sums:\n");
    for (int j = 0; j < m; j++) {
        printf("Column %d sum = %d\n", j + 1, col_sums[j]);
    }

    return 0;
}
