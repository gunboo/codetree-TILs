#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    string ab = a + b;
    string ba = b + a;

    int num1 = stoi(ab);
    int num2 = stoi(ba);
    
    cout << num1 + num2;
    return 0;
}