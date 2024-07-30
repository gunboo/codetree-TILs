#include <iostream>
using namespace std;

int main() {
    int num[5];
    char a[5];
    for(int i = 0; i < 5; i++) {
        cin >> num[i];
        a[i] = (char)num[i];
    }
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}