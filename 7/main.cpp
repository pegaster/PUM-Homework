#include <iostream>

using namespace std;
int main(){
    double pounds, shillings, pennys, new_pounds;
    cout << "Введите колличество фунтов: ";
    cin >> pounds;
    cout << "Введите колличество шиллингов: ";
    cin >> shillings;
    cout << "Введите колличество пенсов: ";
    cin >> pennys;
    
    new_pounds = pounds + shillings / 20 + pennys / 240;
    cout << "Десятичных фунтов: " << new_pounds << endl;
    return 0;
}