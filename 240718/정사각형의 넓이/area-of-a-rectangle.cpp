#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if ( n < 5) {
        cout << n*n << endl;
        cout << "tiny" << endl;
        
    }
    
    if ( n >= 5) {
    cout << n*n << endl;
    }
    return 0;
}