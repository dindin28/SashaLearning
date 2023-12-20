#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double func(double x, double y) {
    double return_value = 0;
    if ((x > 0) && (x * y > 1)) { // && - logical AND, || - logical OR
        return_value = (x+y) / (1 - x*y);
    } else if (x == 0) // notice it's not neccessary to use {},
                       // if only one expression used
        return_value = (pow(x, 2) - y) / (1 - x*y);
    
    return return_value;
}

int main() {
    double x, y;
    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

    if ((x > 0) && (x * y > 1) || (x == 0)) { // || - logical OR
        printf("F(%lf, %lf) = %lf\n", x, y, func(x, y));
    } else {
        printf("Not valid arguments for function\n");
    }

    return EXIT_SUCCESS;
}
