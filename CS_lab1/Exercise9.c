#include <stdio.h>

int main() {
    int num, d1, d2, d3, max_product;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    d1 = num / 100;       
    d2 = (num / 10) % 10;  
    d3 = num % 10;         
    max_product = d1 * d2 * d3;  

    if (d1 * d2 > max_product) {
        max_product = d1 * d2;
    }
    if (d1 * d3 > max_product) {
        max_product = d1 * d3;
    }
    if (d2 * d3 > max_product) {
        max_product = d2 * d3;
    }
    if (d1 > max_product) {
        max_product = d1;
    }
    if (d2 > max_product) {
        max_product = d2;
    }
    if (d3 > max_product) {
        max_product = d3;
    }

    printf("The maximum product is: %d\n", max_product);

    return 0;
}
