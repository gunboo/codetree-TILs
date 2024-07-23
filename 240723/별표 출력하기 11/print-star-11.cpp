#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < (2*n+1); i++ ) {
        if(i % 2 == 0) { 
            for(int j = 0; j < (2*n + 1); j++) {
            cout << "* ";
            }
            cout << endl;
        }
        else {
           for (int k = 0; k < n; k++) {
           cout << "*   ";
           if(k == n-1) {
            cout << "*";
           }
           }
           cout << endl;
        }
       
    }
    return 0;
}