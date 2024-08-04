#include <iostream>
using namespace std;
bool number(int a) {
    if(a % 2 == 0 && (a / 10) + (a % 10)) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int n;
    cin >> n;
    if(number(n)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}