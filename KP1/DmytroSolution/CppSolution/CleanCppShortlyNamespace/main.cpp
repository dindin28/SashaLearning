#include <iostream> // cout, cin
#include <cstdlib> // EXIT_SUCCESS
#include <cmath>   // sin, exp

// The most important part of this module
// using namespace <name_of_namespace> - defining namespace for current compile unit(file)
// using namespace std; - in current compile unit saying to compiler
// "if you don't find function try find in specified namespace"
using namespace std;

double func(double x, double y) {
    return sin(x) + exp(2 * y);
}

int main() {
    double x, y;

    cout << "sin(x) + exp(2*y)" << endl << endl;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    cout << "sin(x) + exp(2*y) = " << func(x, y) << endl;

    return EXIT_SUCCESS; 
}