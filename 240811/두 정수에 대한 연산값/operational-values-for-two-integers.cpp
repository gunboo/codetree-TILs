#include <iostream>
using namespace std;
void result(int *n, int *m) {
    if (*n > *m) {
        *n += 25;
        *m *= 2;
    } else {
        *n *= 2;
        *m += 25;
    }
}
int main() {
    int a, b;
    cin >> a >> b;

    result(&a, &b);
    cout << a << " " << b;

    return 0;
}