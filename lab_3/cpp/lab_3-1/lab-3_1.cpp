#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

void EvenNumbers(const vector<int>& arr) {

    int countEvenNumbers = 0;

    for (int num : arr) {
        if (num % 2 == 0) {
            countEvenNumbers++;
        }
    }

    cout << "Количество четных чисел:";
    cout << countEvenNumbers;
    cout << "\n";
}

int main() {
    srand(time(0));

    int size;
    cout << "Введите размер массива: ";

    if (!(cin >> size) || size <= 0) {
        cout << "Ошибка: введено некорректное число!" << "\n";
        return 1;
    }

    vector <int> arr(size);

    for (int i = 0; i < size; i++) { //генерируем список с числами от -25 до 25
        arr[i] = rand() % 51 - 25; 

        cout << arr[i] << " ";
    }
    cout << "\n";

    EvenNumbers(arr);

    return 0;
}