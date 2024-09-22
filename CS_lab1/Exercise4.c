#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int discriminant;
    double root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Two real roots: %.0lf and %.0lf\n", root1, root2);
    } 
    else if (discriminant == 0) {
        root1 = -b / (2.0 * a);
        printf("One real root: %.0lf\n", root1);
    } 
    else {
        printf("No real roots.\n");
    }

    return 0;
}
