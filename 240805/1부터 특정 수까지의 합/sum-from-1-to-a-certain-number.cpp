#include <iostream>
using namespace std;
int sum(int a) {
    int max = ((a * (a+1)) / 2) / 10;
    return max;
}
int main() {
    int num;
    cin >> num;
    int result = sum(num);

    cout << result;
    return 0;
}