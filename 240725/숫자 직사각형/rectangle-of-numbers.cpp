#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m] = {};
    int num = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = num;
            cout << arr[i][j] << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}