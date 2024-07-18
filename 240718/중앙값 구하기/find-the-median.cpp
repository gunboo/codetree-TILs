#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int temp = 0;
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    } if(b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    cout << b << endl;
    

    return 0;
}