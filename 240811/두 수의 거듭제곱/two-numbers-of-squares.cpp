#include <iostream>
using namespace std;
int root(int n, int m) {
    int result = n;
    for(int i = 0; i < m -1; i++) {
        result *= n;
    }
    return result;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << root(a,b);
    return 0;
}