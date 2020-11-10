#include <iostream>
using namespace std;

long fact(int n){
    long result = 1;
    for(int i = 2; i <= n; i++){
        result *= i;
    }
    return result;
}

long C(int n, int k){
    return(fact(n) / (fact(n - k) * fact(k)));
}

int main(){
    cout << C(4, 5);
    return 0;
}