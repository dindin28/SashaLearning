#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double func(double y) {
	return sqrt(pow((2 + y), 2) + sin(2) * (y + 5) + log(y + 5) - pow(y, 3));
}

int main() {
	double y;

	cout << "sqrt(pow((2 + y), 2) + pow(sin, 2)(y + 5) + log(y + 5) - pow(y, 3)" << endl << endl;

	cout << "Enter y: ";
	cin >> y;

	cout << "sqrt(pow((2 + y), 2) + pow(sin, 2)(y + 5) + log(y + 5) - pow(y, 3) = " << func(y) << endl;

	return EXIT_SUCCESS;
}