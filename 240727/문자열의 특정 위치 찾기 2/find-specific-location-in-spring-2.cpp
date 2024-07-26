#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape" , "blueberry", "orange"};
    char a;
    cin >> a;
    int num = 0;
    int num1 = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < arr[i].length(); j++ ) {
            if(arr[i][j] == a) {
            }
        }

    }

    cout << num;
    return 0;
}