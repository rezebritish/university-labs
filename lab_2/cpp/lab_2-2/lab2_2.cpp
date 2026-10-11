#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russain");
    srand(time(0));

    int arr[5][5];
    int min;
    int iMin;
    int jMin; 

    for (int i=0; i < 5; i++) {
        for(int j=0; j < 5; j++) {
            arr[i][j] = rand() % 100;

            cout << arr[i][j] << " ";

            if (i == 0 && j == 0) {
                min = arr[i][j];
            } else {
                if (min > arr[i][j]) {
                    min = arr[i][j];
                    iMin = i;
                    jMin = j;
                }
            }
        }

        cout << endl;
    }

    cout << "Минимальный элемент: " << min << endl;
    cout << "Строка: " << iMin+1 << endl;
    cout << "Столбец" << jMin+1 << endl;
}