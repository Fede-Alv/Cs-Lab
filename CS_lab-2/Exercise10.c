#include <stdio.h>
#include <math.h>

int main() {
    double x0, y0, radius, xi, yi, distance;


    printf("Enter the center of the circle (x0, y0): ");
    scanf("%lf %lf", &x0, &y0);
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);


    printf("Enter points (xi, yi) to check:\n");
    while (scanf("%lf %lf", &xi, &yi) != EOF) {

        distance = sqrt(pow(xi - x0, 2) + pow(yi - y0, 2));

        if (distance == radius) {
            printf("Point (%.2f, %.2f) is ON the circle.\n", xi, yi);
        } else if (distance < radius) {
            printf("Point (%.2f, %.2f) is INSIDE the circle.\n", xi, yi);
        } else {
            printf("Point (%.2f, %.2f) is OUTSIDE the circle.\n", xi, yi);
        }
    }

    return 0;
}
