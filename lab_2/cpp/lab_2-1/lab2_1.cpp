#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int n;
    cout << "Введите размер N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Размер массива должен быть больше нуля";
        return 0;
    }

    vector<int> arr(n);
    //int* arr = new int[n];

    int sum = 0;
    int countPositive = 0;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 201 - 100;

        cout << arr[i] << " ";

        if (arr[i] > 0) {
            sum+=arr[i];
            countPositive++;
        }
    }

    cout << endl;

    if (countPositive > 0) {
        cout << sum / countPositive;
    }

    return 0;
}