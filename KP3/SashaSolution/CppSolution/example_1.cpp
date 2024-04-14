#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    double n, x, y;
    double result = 0;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    for (double i = 1; i <= n; ++i) {
        result += pow(i, x) + pow(y, i);
    }

    cout << "Sum result: " << result << endl;

    return EXIT_SUCCESS;
}
