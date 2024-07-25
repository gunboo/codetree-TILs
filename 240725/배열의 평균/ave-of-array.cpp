#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    double avg1 = 0, avg2 = 0, avg3 = 0;
    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    cout << fixed;
    cout.precision(1);
    for(int i = 0; i < 2; i++) { //가로줄 합 출력
        for(int j = 0; j < 4; j++) {
            avg1 += arr[i][j];
        }
        avg1 /= 4.0;
        cout << avg1 << " ";
        avg1 = 0;
    }
    cout << endl;
    for(int j = 0; j < 4; j++) { //세로줄 합 출력
        avg2 = (arr[0][j] + arr[1][j]) / 2;
        cout << avg2 << " ";
        avg2 = 0;
    }
    cout << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            avg3 += arr[i][j];
        }
    }
    cout << avg3 / 8;
    return 0;
}