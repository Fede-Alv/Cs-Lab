#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the lengths of the three sticks: \n");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Yes, the sticks can form a triangle.\n");
    } else {
        printf("No, the sticks cannot form a triangle.\n");
    }

    return 0;
}