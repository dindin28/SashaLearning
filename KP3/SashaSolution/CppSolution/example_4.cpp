#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    double x;
    int n;
    double result = 0;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter x: ";
    cin >> x;

    for (int i = 1; i <= n; ++i) {
        result += x + i;
    }

    cout << "Sum result: " << result << endl;

    return EXIT_SUCCESS;
}
