#include <iostream>
using namespace std;
int min_value (int x, int y, int z) {
    if(x <= y && x <= z) return x;
    else if(y <= x && y <= z) return y;
    else return z;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result = min_value(a,b,c);

    cout << result;
    return 0;
}