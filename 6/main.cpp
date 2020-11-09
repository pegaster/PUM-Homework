#include <iostream>

using namespace std;

int main(){
    char dummy;
    int up;
    int down;
    int a[2];
    int b[2];
    cout << "Введите первую дорбь: ";
    cin >> a[0] >> dummy >> a[1];
    cout << "Введите вторую дробь: ";
    cin >> b[0] >> dummy >> b[1];
    up = a[0] * b[1] + b[0] * a[1];
    down = a[1] * b[1];
    cout << "Сумма равна: " << up << dummy << down << endl;
    return 0;
}