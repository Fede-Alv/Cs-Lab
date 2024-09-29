#include <stdio.h>
#include <math.h>
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
double taylor_sin(double x, int n) {
    double sin_x = 0.0;
    for (int i = 0; i < n; i++) {
        double term = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        sin_x += term;
    }
    return sin_x;
}

int main() {
    double x;
    int n;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    double taylor_result = taylor_sin(x, n);
    double math_h_result = sin(x);
    printf("Taylor series approximation of sin(%.2f) with %d terms: %.10f\n", x, n, taylor_result);
    printf("Built-in sin(%.2f) using math.h: %.10f\n", x, math_h_result);

    return 0;
}
