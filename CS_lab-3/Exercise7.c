#include <stdio.h>

int main() {
    int n, i, number;
    int sumEven = 0, sumOdd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter the elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &number); 

        if (number % 2 == 0) {
            sumEven += number;  
        } else {
            sumOdd += number;   
        }
    }

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);

    return 0;
}
