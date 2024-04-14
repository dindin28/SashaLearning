#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    double n;
    double result = 0;

    cout << "Enter n: ";
    cin >> n;

    for (double i = 1; i <= n; ++i) {
        result += i + 1;
    }

    cout << "Sum result: " << result << endl;

    return EXIT_SUCCESS;
}
