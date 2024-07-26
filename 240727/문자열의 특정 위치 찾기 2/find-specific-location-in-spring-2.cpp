#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape" , "blueberry", "orange"};
    char a;
    cin >> a;
    int num = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 2; j <= 3; j++ ) {
            if(arr[i][j] == a) {
                cout << arr[i] << endl;
                num++;
            }
        }
    }
    cout << num;
    return 0;
}