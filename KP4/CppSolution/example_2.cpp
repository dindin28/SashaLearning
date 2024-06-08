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

    std::cout << "Array after exchange: ";
    for (int i = minIndex; i < n - 1; ++i) {
        A[i] < A[i + 1];
        std::cout << A[i] << " ";
    }
    A.pop_back();
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
