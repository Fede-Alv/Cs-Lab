# include <stdio.h>

int main(){

int n;
    
    printf("Enter the number for the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i > j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of elements under the main diagonal: %d\n", sum);

    return 0;
}