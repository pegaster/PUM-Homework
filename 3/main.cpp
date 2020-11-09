#include <iostream>
#define POUND 1.487
#define FRANK 0.172
#define MARK 0.584
#define YEN 0.00955

using namespace std;
 int main(){
    double money, pounds, marks, franks, yens;
    
    cin >> money;

    pounds = money / POUND;
    franks = money / FRANK;
    marks = money / MARK;
    yens = money / YEN;

    cout << money << "$ is:\n"
    << pounds << " pounds\n"
    << franks / FRANK<< " franks\n"
    << marks / MARK << " marks\n"
    << yens << " yens\n";
    return 0;
 }