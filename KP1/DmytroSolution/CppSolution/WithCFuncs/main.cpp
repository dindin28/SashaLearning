#include <cstdio>  // printf, scanf
#include <cstdlib> // EXIT_SUCCESS
#include <cmath>   // sin, exp

double func(double x, double y) {
    return sin(x) + exp(2 * y);
}

int main() {
    double x, y;

    printf("sin(x) + exp(2*y)\n\n"); // '\n' - single symbol, means new line 

    printf("Enter x: ");
    // lf, because f - float, l - long, so double type
    // refer: https://en.cppreference.com/w/c/io/fscanf
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

    printf("sin(x) + exp(2*y) = %lf\n", func(x, y));

    // EXIT_SUCCESS is define directive that equals to 0
    // returning 0 from main func means app finished successfully
    // returning something other than 0, means app failed
    // check also EXIT_FAILURE
    // refer: https://en.cppreference.com/w/c/program/EXIT_status
    return EXIT_SUCCESS; 
}