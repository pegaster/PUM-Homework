#include <iostream>

using namespace std;

double D(float a, float b, float c){
    return b * b - 4 * a * c;
}

int main(){
    float a, b, c;
    cin >> a >> b >> c;
    cout << D(a, b, c) << endl;
    return 0;
}