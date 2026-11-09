#include <iostream>

using namespace std;
 
unsigned long long calcFactorial(int count) { //unsigned - необязательная часть функции, она выполняет исключительно 
    if (count <= 1) return 1;                 //учебную функцияю, тк на факториал 21 даже с "unsigned" - не хватит места
                                             
    return count * calcFactorial(count - 1);
}

int main() {
    int count;
    cout << "Введите число: ";

    if (!(cin >> count) || count < 0) {
        cout << "Ошибка: введено некорректное число!" << "\n";
        return 1;
    }
    else if (count > 20) {
        cout << "ERROR: число слишком большое(20 - максимум)!";
        return 1;

    }
    else {
        cout << "Результат:" << calcFactorial(count);
        cout << "\n";
    }

    return 0;
}
