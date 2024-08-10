#include <iostream>
using namespace std;
void result(int *n, int *b) {
    if (*n > *b) {
        *n *= 2;
        *b += 10;
    }
    else if(*b > *n) {
        *n += 10;
        *b *= 2;
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    result(&a, &b);
    cout << a << " " << b;
    return 0;
}