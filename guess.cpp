#include <iostream>
#include <stdlib.h>
using namespace std;

bool condition (int l, int c) {
    if(l == 0){
        return true;
    } else {
        return l > c;
    };
};

int main() {
    int n, limit;
    cout << "Введите верхнюю границу случайного числа: ";
    cin >> n;
    cout << "Ограничить попытки? Введите число (0: нет): ";
    cin >> limit;

    srand (time(NULL));
    int secret = rand() % n + 1;

    int counter = 1;
    cout << "Игра началась! (-1 : сдаться) Введите число: ";
    int user_number;
    cin >> user_number;
    while ((user_number != secret) && (user_number != -1) && condition(limit, counter)) {
        if(user_number > secret){
            cout << "Введите число меньше: ";
            cin >> user_number;
            counter++;
        } else if(user_number < secret){
            cout << "Введите число больше: ";
            cin >> user_number;
            counter++;
        }
    };

    if (user_number == secret){
        cout << "Вы победили!" << " Совершено " << counter<< " попыток." << endl;
    } else if(user_number == -1) {
        cout << "Вы сдались." << " Совершено " << counter<< " попыток." << endl;
    } else if(counter >= limit) {
        cout << "Вы проиграли, попытки исчерпаны." << " Совершено " << counter<< " попыток." << endl;
    } 
    
    cout << "Было загадано число " << secret;
    return 0;
}