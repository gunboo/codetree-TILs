#include <iostream>
using namespace std;

int main() {
    int num;
    int a = 1;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        if(num % 3 != 0) {
            a = 0; break;
        } 
    }
    cout << a << endl;
    return 0;
}