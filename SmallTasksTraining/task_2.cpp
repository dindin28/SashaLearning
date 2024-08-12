#include <iostream>
#include <cmath>

int main() {
    int b = 0;
    int a;
    int n;

    do {
        std::cout << "Enter a positive integer value for 'n': ";
        std::cin >> n;

        if (n <= 0) {
            std::cout << "Invalid input. 'n' must be a positive integer.\n";
        }
    } while (n <= 0);


    for (int i = 1, sum_a = 0; i <= n; ++i) {
        sum_a += i;
        if (i == n) {
            a = pow(sum_a, 2);
        }
    }

    for (int i = 1; i <= n; ++i) {
        b += pow(i, 2);
    }

    std::cout << a - b << std::endl;

    return 0;
}
