#include <iostream>
#include <string>

int main() {
    std::string user_string;
    std::cout << "Enter your string: ";
    std::getline(std::cin, user_string);

    int end = user_string.length();
    for (int i = user_string.length() - 1; i >= 0; --i) {
        if (user_string[i] == ' ') {
            std::cout << user_string.substr(i + 1, end - i - 1) << " ";
            end = i;
        }
    };

    std::cout << user_string.substr(0, end) << std::endl;

    return EXIT_SUCCESS;
}
