#include <iostream>
using namespace std;

int main() {
    int num[10];
    int count1 = 0;
    int sum = 0;
    int count2 = 0;
    for ( int i = 0; i < 10; i++) {
        cin >> num[i];
        if(num[i] == 0) break;
        count1++;
    }
    for ( int j = 0; j < count1; j++) {
        if(num[j] % 2 == 0) {
            sum += num[j];
            count2++;
        }
    }
    cout << count2 << " " << sum;
    return 0;
}