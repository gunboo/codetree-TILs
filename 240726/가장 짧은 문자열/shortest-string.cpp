#include <iostream>
#include <string>
using namespace std;

int main() {
    string a1, a2, a3;
    cin >> a1;
    cin >> a2;
    cin >> a3;
    int a = 0, b = 0, c = 0;
    a = a1.length();
    b = a2.length();
    c = a3.length();
    if(a > b && b > c) {
        cout << a - c;
    }
    else if(a > c && c > b) {
        cout << a - b;
    }
    else if(b > a && a > c) {
        cout << b - c;
    }
    else if(b > c && c > a) {
        cout << b - a;
    }
    else if (c > a && a > b) {
        cout << c - b;
    }
    else {
        cout << c - a;
    }
    
    return 0;
}