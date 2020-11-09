#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    long pop[3] = {8425785, 47, 9761};
    cout << left << setw(9) << "Location"
    << right<< setw(12) << "Population" << endl
    << setfill('.')
    << left << setw(9) << "Moscow"
    << right << setw(12) << pop[0] << endl
    << left << setw(9) << "Kirow"
    << right << setw(12) << pop[1] << endl
    << left << setw(9) << "Ugrumovka"
    << right << setw(12) << pop[2] << endl;
    return 0;
}