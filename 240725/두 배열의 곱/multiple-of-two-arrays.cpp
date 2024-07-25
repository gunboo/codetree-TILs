#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int sum[3][3] = {0};
    for(int k = 0; k < 2; k++) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
            if(k == 0) {
                sum[i][j] = arr[i][j];
            }
        }
    }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << sum[i][j] * arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}