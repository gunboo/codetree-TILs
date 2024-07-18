#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int n2;
    for ( int i = 0; i < n; i++) {
        cin >> n2;
        if(n2 % 3 == 0) {
            cout << n2 << endl;
        }
    }
    return 0;
}