#include <stdio.h>

int main() {
    int width, length, height, radius;
    int diameter;
    
    printf("Enter the width, length, and height of the box: ");
    scanf("%d %d %d", &width, &length, &height);

    printf("Enter the radius of the basketball: ");
    scanf("%d", &radius);

    diameter = 2 * radius;

    if (diameter <= width && diameter <= length && diameter <= height) {
        printf("The basketball can fit in the box.\n");
    } else {
        printf("The basketball cannot fit in the box.\n");
    }

    return 0;
}