#include <iostream>
using namespace std;

int main() {
    char arr[10];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >>arr[5] >> arr[6] >> arr[7] >> arr[8] >> arr[9];


    for (int i = 9; i >= 0; i--) {
        cout << arr[i];
    }
    return 0;
}