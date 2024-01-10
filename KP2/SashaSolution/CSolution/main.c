#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    double y, x, f;

    printf("Enter x value: ");
    scanf("%lf", &x);


    printf("Enter y value: ");
    scanf("%lf", &y);


    if (x > 0 && x * y > 1)
        f = (x + y) / (1 - x * y);
    else if (x == 0)
        f = (pow(x, 2) - y) / (1 - x * y);
    else {
        printf("Not value is valid");
        return EXIT_FAILURE;
    };

    printf("The function is equal to = %lf\n", f);

    return EXIT_SUCCESS;
}
