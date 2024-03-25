#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

bool func(double x, double y, double& f) {
    if (x > 0 && x * y > 1)
        f = (x + y) / (1 - x * y);
    else if (x == 0)
        f = (pow(x, 2) - y) / (1 - x * y);
    else {
        return false;
    }
    return true;
};

int main() {
    double x, y;

    cout << "Enter x value: ";
    cin >> x;

    cout << "Enter y value: ";
    cin >> y;

    double calculated_value;
    if (func(x, y, calculated_value)) {
        cout << "The function is equal to = " << calculated_value << std::endl;
    }
    else {
        cout << "Not valid arguments for function" << std::endl;
    }

    return EXIT_SUCCESS;
}