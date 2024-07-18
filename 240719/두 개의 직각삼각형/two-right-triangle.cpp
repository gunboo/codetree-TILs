#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int j;

    for (int i = 0; i < n; i++) { //줄번호
        for(j = 0; j < n-i; j++) { //별 개수
            cout << "*" ;
        }
        for (int k = 0; k < i*2; k++) { //공백  
            cout << " ";
        }
        for(j = 0; j < n-i; j++) { //별 개수
            cout << "*" ;
        }
        cout << endl;
    }
    return 0;
}