#include <iostream>
using namespace std;
int max_num(int n, int m) {
    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }
    return n;
}
int main() {
    int a, b;
    cin >> a >> b;
    int gcd = max_num(a,b);
    cout << gcd;
    return 0;
}