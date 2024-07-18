#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string a;
    cin >> a;
    string temp; 

    for (int i = 0; i < 4; i++) {
        temp = a[i+4];
        a[i+4] = a[i + 9];
        a[i+9] = temp;
    }
    cout << a;
    
    return 0;
}