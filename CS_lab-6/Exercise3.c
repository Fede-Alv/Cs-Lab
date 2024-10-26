#include <stdio.h>

int main() {
    int n;


    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            
        
            if (i == j || i + j == n - 1) {
                sum += matrix[i][j];
            } //main diag
            
    
            // if (i + j == n - 1) {
            //     sum += matrix[i][j];
            // }// secondary diag
        }
    }

    if (n % 2 == 1) {
        int center = matrix[n / 2][n / 2];
        sum -= center;
    }//for odd

    printf("Sum of both diagonals: %d\n", sum);

    return 0;
}
