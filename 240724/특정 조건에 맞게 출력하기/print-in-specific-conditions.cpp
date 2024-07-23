#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
        break;
        }
        cnt++;
    }
    for (int i = 0; i < cnt; i++) {
        if(arr[i] % 2 == 1) {
            arr[i] += 3;
        }else {
            arr[i] /= 2;
        }
    }
    for (int i = 0; i < cnt; i++) {
        cout << arr[i] <<" ";
        }
    return 0;
}