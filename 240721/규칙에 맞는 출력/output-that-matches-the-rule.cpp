#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int j;

    for ( int i = 0; i < n; i++) { //줄 개수
        for (j = 0; j <= i; j++) { //1 --> 2 --> 3 --> 4개  ex) 5 --> 4 5 --> 3 4 5 --> 2 3 4 5
            cout << n-i+j << " "; 
        }

        cout << endl;
    }
    return 0;
}