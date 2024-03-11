#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool func(double x, double y, double* f) {
    if (x > 0 && x * y > 1)
        *f = (x + y) / (1 - x * y);
    else if (x == 0)
        *f = (pow(x, 2) - y) / (1 - x * y);
    else {
        printf("No valid value\n");
        return false;
    }
    return true;
}

int main() {
    double y, x, f;

    printf("Enter x value: ");
    scanf("%lf", &x);

    printf("Enter y value: ");
    scanf("%lf", &y);

    double calculated_value;
    if (func(x, y, &calculated_value)) {
        printf("The function is equal to = %lf\n", calculated_value);
    }
    else {
        printf("Not valid arguments for function\n");
    };

    return EXIT_SUCCESS;
}
