#include <iostream>
using namespace std;

int main() {
    int n[10];
    int sum1 = 0, sum2 = 0;
    for ( int i = 0; i < 10; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < 10; i+=2) {
        sum1 += n[i];
    }
    for (int i = 1; i < 10; i+=2) {
        sum2 += n[i];
    }
    if(sum1 > sum2) {
        cout << sum1 - sum2 << endl;
    }
    else if(sum2 > sum1) {
        cout << sum2 - sum1 << endl;
    }

    return 0;
}