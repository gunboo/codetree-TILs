#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int arr[11];
    arr[0] = a;
    arr[1] = b;
    for(int i = 2; i < 11; i++) {
    arr[i] = arr[i-2] + arr[i-1];
    arr[i] = arr[i] % 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] <<" ";
    }
    return 0;
}