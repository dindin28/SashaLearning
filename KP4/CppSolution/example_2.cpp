#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Enter the array size: ";
    std::cin >> n;

    std::vector<int> A(n);

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> A[i];
    }
    
    int minIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
    }

    std::cout << "Array after exchange: ";
    for (int i = minIndex; i < n; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
