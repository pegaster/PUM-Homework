#include <iostream>

using namespace std;

int main(){
    double celsium;
    double farh;
    cin >> celsium;
    farh = (celsium * 9 / 5) + 32;
    cout << farh << endl;
    return 0;
}