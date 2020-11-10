#include <iostream>

using namespace std;

int main(){
    int quantity[3];
    float price[3];
    float total_price[3];
    float price_of_all;
    cout << "Введите колличество шоколадок: ";
    cin >> quantity[0];
    cout << "Введите колличество пачек молока: ";
    cin >> quantity[1];
    cout << "Введите колличество банок кофе: ";
    cin >> quantity[2];
    cout << "Введите цену шоколадки: ";
    cin >> price[0];
    cout << "Введите цену за молоко: ";
    cin >> price[1];
    cout << "Введите цену за банку кофе: ";
    cin >> price[2];
    price_of_all = 0;
    for(int i = 0; i < 3; i++){
        total_price[i] = price[i] * quantity[i];
        price_of_all += total_price[i];
    }
    cout << "Шоколад: " << total_price[0] << "\t"
    << "Молоко: " << total_price[1] << "\t"
    << "Кофе: " << total_price[2] << "\t"
    << "За все: " << price_of_all << "\t";
    
    return 0;
}