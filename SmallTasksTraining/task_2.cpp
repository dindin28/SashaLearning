#include <iostream>

int main() {
    int sum_a = 0;
    int b = 0;
    int a;

    for (int i = 1; i <= 10; ++i) {
        sum_a += i;
        a = pow(sum_a, 2);
    }

    for (int i = 1; i <= 10; ++i) {
        b += pow(i, 2);
    }

    std::cout << a - b << std::endl;

    return 0;
}
