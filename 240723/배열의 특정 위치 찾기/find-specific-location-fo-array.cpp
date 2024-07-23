#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum1 = 0;
    int sum2 = 0;
    int count = 0;
    for ( int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i < 10; i+=2) {
        sum1 += arr[i];
    }
    double avg = 0;
    cout << fixed;
    cout.precision(1);

    for(int i = 2; i < 10; i+=3) {
        sum2 += arr[i];
        count++;
    }
    avg = (double)sum2 / count;
    cout << sum1 << " " << avg ;
    return 0;
}