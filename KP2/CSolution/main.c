#include <stdio.h>
#include <math.h>


int main() {
    
    double y, x, f;

    printf("Enter x value: ");
    scanf("%f", &x);

    printf("Enter y value:");
    scanf("%f", &y);

    if (x > 0, x * y > 1) f = (x + y) / (1 - x * y);
    else f = (pow(x, 2) - y) / (1 - x * y);

    printf("The function is equal to = %f", f);
    getch();

    return 0;
}
