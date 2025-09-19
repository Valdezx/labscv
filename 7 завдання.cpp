#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int K;
    cout << "enter day of year ( 1 to 365): ";
    cin >> K;

    if (K >= 1 && K <= 365) {
        int startDay = 2; // 1 січня - вівторок
        int daysPassed = K - 1;

        // Обчислення дня тижня
        // (startDay - 1) - перехід на 0-6 діапазон
        // daysPassed % 7 - зсув
        // + 1 - перехід назад на 1-7 діапазон
        int dayOfWeek = ((startDay - 1 + daysPassed) % 7) + 1;

        cout << "number day of week for " << K << "-this day: " << dayOfWeek << endl;
        cout << "This day - ";

        switch (dayOfWeek) {
            case 1: cout << "ponedilok" << endl;
                break;
            case 2: cout << "vivtorok" << endl;
                break;
            case 3: cout << "sereda" << endl;
                break;
            case 4: cout << "chetver" << endl;
                break;
            case 5: cout << "pyatnitsya" << endl;
                break;
            case 6: cout << "subota" << endl;
                break;
            case 7: cout << "nedilya" << endl;
                break;
        }
    } else {
        cout << "Uncorrect number of K. Enter another K." << endl;
    }

    return 0;
}