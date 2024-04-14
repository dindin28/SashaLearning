#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double factorial(double x) {
    double sum = 1;
    for (double i = 1; i <= x; ++i) {
        sum *= i;
    }
    return sum;
};

int main() {
    double n, x;
    double result = 0;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter x: ";
    cin >> x;

    for (double i = 1; i <= n; i++) {
        result += factorial(x);
    }

    cout << "Sum result: " << result << endl;

    return EXIT_SUCCESS;
}
