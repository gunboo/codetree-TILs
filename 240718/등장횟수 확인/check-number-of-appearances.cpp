#include <iostream>
using namespace std;

int main() {
    int num1, cnt = 0;
    for (int i = 0; i < 5; i++) {
        cin >> num1;
        if(num1 % 2 == 0) cnt++;
    }
    cout << cnt << endl;
    return 0;
}