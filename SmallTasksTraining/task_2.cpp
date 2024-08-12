#include <iostream>
#include <cmath>

int main() {
    int n;

    do {
        std::cout << "Enter a positive integer value for 'n': ";
        std::cin >> n;

        if (n <= 0) {
            std::cout << "Invalid input. Please enter a positive integer.\n";
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
    } while (n <= 0);

    int sum_a = 0;

    for (int i = 1; i <= n; ++i) {
        sum_a += i;
    }

    const int a = pow(sum_a, 2);

    int b = 0;

    for (int i = 1; i <= n; ++i) {
        b += pow(i, 2);
    }

    std::cout << a - b << std::endl;

    return 0;
}
