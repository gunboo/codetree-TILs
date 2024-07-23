#include <iostream>
using namespace std;

int main() {
    int num[100];
    int count = 0;
    int sum = 0;
    for ( int i = 0; i < 100; i++) {
        cin >> num[i];
        if(num[i] == 0) break;
        count++;
    }
    for(int i = count; i >= count - 3; i--) {
        sum += num[i];
    }
    cout << sum;
    return 0;
}