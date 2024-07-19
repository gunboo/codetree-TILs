#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int up = 1, down = n;
    for (int i = 0; i < 2*n; i++) {
        if(i % 2 == 0) { //짝수일떄
        for (int j = 0; j < down; j++) {
            cout << "* ";
        }down--;
        }
        if( i % 2 == 1) { //홀수일때
            for(int k = 0; k < up; k++) {
                cout << "* ";
            }
            up++;
        }
        cout << endl;
    }
    return 0;
}