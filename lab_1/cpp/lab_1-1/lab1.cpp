#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void formattedData(string name, int age, double avg_mark) 
{
    //Выводим заголовок таблицы
    cout << "\n";
    cout << "+----------+---------+--------------+" << "\n";
    cout << "| Имя      | Возраст | Средний балл |" << "\n";
    cout << "+----------+---------+--------------+" << "\n";
    cout << "| " << left << setw(12) << name << " | " << left;
    cout << setw(7) << age << " | ";
    cout << left << setw(10) << fixed << setprecision(2);
    cout << avg_mark << "   |" << "\n";
    cout << "+----------+---------+--------------+" << "\n";
}


int main() {
    setlocale(LC_ALL, "Russian");


     //Объявляем переменные
     string name;
     int age;
     double avg_mark;


     //Получаем данные с консоли
     cout << "ВВедите имя:";
     getline(cin, name);


     cout << "ВВедите возраст:";
     cin >> age;


     cout << "ВВедите средний балл:";
     cin >> avg_mark;
    

     //Выводим данные в формате таблицы
     formattedData(name, age, avg_mark);


    return 0;
}