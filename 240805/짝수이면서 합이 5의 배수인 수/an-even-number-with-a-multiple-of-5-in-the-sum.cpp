#include <iostream>
using namespace std;
bool number(int a) {
    return a % 2 == 0 && ((a / 10) + (a % 10)) % 5 == 0;
     
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