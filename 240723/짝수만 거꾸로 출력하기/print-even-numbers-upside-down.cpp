#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num[n];
    for ( int i = 0; i < n; i++ ) {
        cin >> num[i];
    }
    for ( int j = n-1; j >= 0; j-- ) {
        if(num[j] % 2 == 0) {
            cout << num[j] << " ";
        }
    }
    return 0;
}