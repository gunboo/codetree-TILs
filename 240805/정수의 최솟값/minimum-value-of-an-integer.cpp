#include <iostream>
using namespace std;
int sum (int x, int y, int z) {
    if(x > y && y > z) return z;
    else if(y > z && z > x) return x;
    else if(x > z && z > y) return y;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result = sum(a,b,c);

    cout << result;
    return 0;
}