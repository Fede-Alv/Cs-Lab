#include <stdio.h>
#include <math.h>

int pointCircleRelation(float x0, float y0, float radius, float x, float y) {
    float distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));
    if (distance < radius)
        return -1; // Inside the circle
    else if (distance == radius)
        return 0;  // On the circle
    else
        return 1;  // Outside the circle
}

int main() {
    float x0, y0, radius;
    int n;

    printf("Enter the circle's center (x0, y0) and radius: ");
    scanf("%f %f %f", &x0, &y0, &radius);

    printf("Enter the number of points: ");
    scanf("%d", &n);

    float points[n][2];

    printf("Enter the coordinates of the points (x, y):\n");
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &points[i][0], &points[i][1]);
    }

    printf("\nResults for the points:\n");
    for (int i = 0; i < n; i++) {
        int result = pointCircleRelation(x0, y0, radius, points[i][0], points[i][1]);
        printf("Point (%.2f, %.2f): ", points[i][0], points[i][1]);
        if (result == -1)
            printf("Inside the circle\n");
        else if (result == 0)
            printf("On the circle\n");
        else
            printf("Outside the circle\n");
    }

    return 0;
}
