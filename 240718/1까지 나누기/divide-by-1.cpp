#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 1;
    for (int i = 1; i <= n; i++) {
        n /= i;
        cnt++;
        if(n <= 1) break;
    }
    cout << cnt;
    return 0;
}