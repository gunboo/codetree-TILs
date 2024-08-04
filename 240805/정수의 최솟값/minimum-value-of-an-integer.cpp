#include <iostream>
using namespace std;
int min_value (int x, int y, int z) {
    if(x >= y && y >= z) return z;
    else if(y >= z && z >= x) return x;
    else  return y;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result = min_value(a,b,c);

    cout << result;
    return 0;
}