#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int up = 1,down = n;
    for (int i = 0; i < n; i++) { //줄 출력
            if (i % 2 == 0) { //짝수
            for (int j = 0; j < down; j++) { //n --> n-1 --> n-2
                cout << "* ";
            }
            down--;
        }   if (i % 2 == 1) {
            for (int k = 0; k < up; k++) { //1 --> 2 --> 3
                cout << "* ";
            }
            up++;
        }
            cout << endl;
    }
    int up1 = 3, down1 = 2;
    for (int i = 0; i < n; i++) {
        if ( i % 2 == 0) { //짝수
            for (int j = 0; j < up1; j++) {
                cout << "* ";
            }
            up1++;
        }
        if(i % 2 == 1) { //홀수
        for (int k = 0; k < down1; k++) {
            cout << "* ";
        }
        down1--;
        }
        cout << endl;
    }
    return 0;
}