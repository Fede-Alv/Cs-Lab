#include <stdio.h>

int main() {
    int n, i = 1;
    int a = 0, b = 1, next;
    int sum = 0; 

    
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;  
    }

    
    printf("Fibonacci Sequence: ");
    
    while (i <= n) {
        if (i == 1) {
            printf("%d ", a);  
            sum += a;  
        } else if (i == 2) {
            printf("%d ", b);  
            sum += b;  
        } else {
        
            next = a + b;
            a = b;
            b = next;

            printf("%d ", next);
            sum += next;  
        }
        i++; 
    }
    printf("\nSum of Fibonacci numbers: %d\n", sum);

    return 0;
}
