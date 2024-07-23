#include <iostream>
using namespace std;

int main() {
    int num[11];
    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> num[6] >> num[7] >> num[8] >> num[9] >> num[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += num[i];
    }
    cout << sum;
    return 0;
}