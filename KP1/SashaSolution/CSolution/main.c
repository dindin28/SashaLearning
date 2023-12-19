#include <stdio.h>
#include <math.h>
#include <locale.h>

double equation(double x, double y) {
    return sin(x) + exp(2 * y);
}

int main() {
    setlocale(LC_ALL, "UKRAINIAN");

    double a, b;

    printf("Enter value a: ");
    scanf("%lf", &a);

    printf("Enter value b: ");
    scanf("%lf", &b);

    double root = equation(a, b);

    printf("Output: %lf\n", root);

    return 0;
}
