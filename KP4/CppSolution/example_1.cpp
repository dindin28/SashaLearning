#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int minIndex = 0;
    int maxIndex = 0;
    cout << "Enter the array size: ";
    cin >> n;

    vector<int> A(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    for (int i = 1; i < n; ++i) {
        if (A[i] < A[minIndex]) {
            minIndex = i;
        }
        if (A[i] > A[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    cout << "Array after exchange: ";
    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
