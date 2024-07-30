#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    if(a == 'z') {
        cout << "a";
    }
    else {
        int b = (int)a + 1;
        cout << (char)b;
    }
    return 0;
}