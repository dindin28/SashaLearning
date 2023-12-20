#include <iostream>
#include <optional> // class for optinal values,
                    // refer to https://en.cppreference.com/w/cpp/utility/optional
#include <cmath>
#include <cstdlib>

std::optional<double> func(double x, double y) { // return value is optional,
                                                 // so it's possible there is
                                                 // no value returned in optinal struct
    std::optional<double> return_value;
    if ((x > 0) && (x * y > 1)) {
        return_value = (x+y) / (1 - x*y);
    } else if (x == 0)
        return_value = (std::pow(x, 2) - y) / (1 - x*y);
    
    return return_value;
}

int main() {
    double x, y;
    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter y: ";
    std::cin >> y;

    // std::optional<double> calculated_value = func(x, y);
    auto calculated_value = func(x, y); // same as above, with auto keyword
                                        // compiler could "guess" type of value

    if (calculated_value.has_value()) { // check if std::optinal has value inside
        std::cout << "F(" << x << ", " << y << ") = "
                  << calculated_value.value() << std::endl; // get value from std::optional
    } else {
        std::cout << "Not valid arguments for function" << std::endl;
    }

    return EXIT_SUCCESS;
}
