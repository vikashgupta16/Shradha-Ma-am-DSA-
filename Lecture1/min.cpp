#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    if(a>b){
        cout << "Minimum is: " << b << endl;
    }
    else {
        cout << "Minimum is: " << a << endl;
    }
    return 0;
}