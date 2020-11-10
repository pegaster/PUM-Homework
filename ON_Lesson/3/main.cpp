#include <iostream>
#include <math.h>

using namespace std;

double D(float a, float b, float c){
    return b * b - 4 * a * c;
}

int main(){
    float a, b, c;
    double Discriminant;
    cin >> a >> b >> c;
    Discriminant = D(a, b, c);
    if(Discriminant >= 0){
        cout << (-b + sqrt(Discriminant)) / (a * 2) << endl;
    }
    if(Discriminant > 0){
        cout << (-b - sqrt(Discriminant)) / (a * 2) << endl;
    }
    if(Discriminant < 0){
        cout << -b / (a * 2) << " +- i * " << sqrt(-Discriminant) / (2 * a) << endl;
    }
    return 0;
}