#include <iostream>
using namespace std;

int main() {
    int num;
    int a = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        if(num % 3 == 0) {
            a = 1;
        }
    }
    cout << a << endl;
    return 0;
}