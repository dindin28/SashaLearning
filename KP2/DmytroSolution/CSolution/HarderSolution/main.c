#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool func(double x, double y, double* return_value) { // return_value is passed by pointer,
                                                      // so value could be changed outside function
    if ((x > 0) && (x * y > 1))
        *return_value = (x+y) / (1 - x*y);
    else if (x == 0)
        *return_value = (pow(x, 2) - y) / (1 - x*y);
    else
        return false; // returning that func couldn't calc value
    
    return true;
}

int main() {
    double x, y;
    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

    double calculated_value;
    if (func(x, y, &calculated_value)) { // if func return true -> calculated successfully
        printf("F(%.2lf, %.2lf) = %.2lf\n", x, y, calculated_value); // notice %.2lf used to precise
                                                                     // double value to 2 digits after comma
    } else {
        printf("Not valid arguments for function\n");
    }

    return EXIT_SUCCESS;
}
