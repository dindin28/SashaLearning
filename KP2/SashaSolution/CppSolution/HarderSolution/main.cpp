#include <iostream>
#include <optional>
#include <cstdlib>
#include <cmath>

using namespace std;

optional<double> func(double x, double y) {
    optional<double> f;
    if (x > 0 && x * y > 1)
        f = (x + y) / (1 - x * y);
    else if (x == 0)
        f = (pow(x, 2) - y) / (1 - x * y);
    return f;
};

int main() {
    double x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    optional<double> calculated_value = func(x, y);

    if (calculated_value.has_value()) {
        cout << "The function is equal to = " << calculated_value.value() << endl;
    }
    else {
        cout << "Not valid arguments for function" << endl;
    }

    return EXIT_SUCCESS;
}