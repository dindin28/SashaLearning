#include <stdio.h>
#include <stdbool.h>

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("Year %d is a leap year.\n", year);
    }
    else {
        printf("Year %d is not a leap year.\n", year);
    }

    return 0;
}
