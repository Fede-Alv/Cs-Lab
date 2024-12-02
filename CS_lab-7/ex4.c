#include <stdio.h>
#include <math.h>

int pointCircleRelation(float x0, float y0, float radius, float x, float y) {
    float distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
    if (distance < radius)
        return -1;
    else if (distance == radius)
        return 0;  
    else
        return 1; 
}

int main() {
    float x0, y0, radius, x, y;
    printf("Enter the circle's center (x0, y0) and radius: ");
    scanf("%f %f %f", &x0, &y0, &radius);
    printf("Enter the point (x, y): ");
    scanf("%f %f", &x, &y);

    int result = pointCircleRelation(x0, y0, radius, x, y);
    if (result == -1)
        printf("The point is inside the circle.\n");
    else if (result == 0)
        printf("The point is on the circle.\n");
    else
        printf("The point is outside the circle.\n");

    return 0;
}
