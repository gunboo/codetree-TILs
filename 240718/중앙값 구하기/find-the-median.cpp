#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int temp = 0;
      if(a > b) {
        if(b > c) {
            cout << b << endl;
        }
     else if(c > a) {
        if (a > b) {
            cout << a << endl;
        }
        } 
     else {
        cout << c << endl;
    } 
    }
    else if ( a < b) {
        if (b < c) {
            cout << b << endl;
        }
    }
     

      
    return 0;
}