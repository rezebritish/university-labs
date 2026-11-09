#include <iostream>

using namespace std;

 int fibanscci(int count) {
     int rez = 0;

    if (count < 0) return 0;

    if (count == 1 ) return 1;

    rez = fibanscci(count - 2) + fibanscci(count - 1);
  
    return rez;
}

int main () {
    int count;
    cout << "Введите число: ";

    if (!(cin >> count) || count < 0) {
        cout << "ERROR: введено некорректное число!" << "\n";
        return 1;
    }
    else if(count>40){
        cout << "Число больше 40, оно будет долго считаться.";
        cout << "\n";
        cout << "Наберитесь терпения.";
        cout << "\n";
    }
    cout << "Результат:" << fibanscci(count);
    cout << "\n";
    
  
    return 0;
}