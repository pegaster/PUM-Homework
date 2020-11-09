#include <iostream>
#define POUND 1.487
#define FRANK 0.172
#define MARK 0.584
#define YEN 0.00955

using namespace std;
 int main(){
    double money;
    cin >> money;
    cout << money << "$ is:\n"
    << money / POUND << " pounds\n"
    << money / FRANK<< " franks\n"
    << money / MARK << " marks\n"
    << money / YEN << " yens\n";
    return 0;
 }