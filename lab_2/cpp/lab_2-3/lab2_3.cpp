#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russain");
    srand(time(0));

    int arr[5][5];

    for (int i=0; i < 5; i++) {
        for(int j=0; j < 5; j++) {
            arr[i][j] = rand() % 100;

            cout << arr[i][j] << " ";
       }

        cout << endl;
    }

    for (int i=0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            arr[j][i] = arr[i][j];
        }

        cout << endl;
    }

    cout << "Транспонированная матрица: " << endl;

    for (int i=0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;

}