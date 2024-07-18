#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    if (money >= 3000) {
        cout << "book" << endl;
    } else if (money >= 1000 && money < 3000) {
        cout << "mask" << endl;
    } else {
        cout << "pen" << endl;
    }
    return 0;
}