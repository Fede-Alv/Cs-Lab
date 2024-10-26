#include <stdio.h>

int main() {
    int n, is_identity = 1;

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

            
            if (i == j && matrix[i][j] != 1) {
                is_identity = 0;
            }
           
            else if (i != j && matrix[i][j] != 0) {
                is_identity = 0;
            }
        }
    }

    
    if (is_identity) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
