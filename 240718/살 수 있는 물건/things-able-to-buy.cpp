#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    if (money > 1000 && money < 3000) {
        cout << "mask" << endl;
    } else if (money < 1000) {
        cout <<  "no" << endl;
    } else {
        cout << "book" << endl;
    }
    return 0;
}