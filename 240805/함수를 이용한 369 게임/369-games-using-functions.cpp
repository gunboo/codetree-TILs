#include <iostream>
using namespace std;
bool number(int a) {
        return (a % 3 == 0 || a % 10 == 3 || a % 10 == 6 || a % 10 == 9 || a / 10 == 3 || a / 10 == 6 || a / 10 == 9);
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int count = 0;
    for(int i = num1; i <= num2; i++) {
        if(number(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}