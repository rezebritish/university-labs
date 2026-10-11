#include <iostream>
#include <string>
#include <cmath>

using namespace std;

template <typename T> 
T  maxElement(const T* arr, size_t n) {
    if (n == 0) {
        throw invalid_argument("Array is empty");
    }

    T maxv = arr[0];

    for (size_t i = 1; i < n; ++i) {
        if (arr[i] > maxv) maxv = arr[i];
    }

    return maxv;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int ai[] = {1, 2, 3, 9};
    double bi[] = {1.1, 2.2, 8};
    char ac[] = {'a', 'b', 'c', 'z'};

    cout << maxElement(ai, sizeof(ai) / sizeof(ai[0])) << endl;
    cout << maxElement(bi, sizeof(bi) / sizeof(bi[0])) << endl;
    cout << maxElement(ac, sizeof(ac) / sizeof(ac[0])) << endl;
    
}