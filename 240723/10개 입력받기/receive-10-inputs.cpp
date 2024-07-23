#include <iostream>
using namespace std;

int main() {
    int num[10];
    int sum = 0;
    int count = 0;
    for( int i = 0; i < 10; i ++) {
        cin >> num[i];
        if(num[i] == 0) break;
        count++;    
    }
    for( int j = 0; j < count; j++) {
        sum += num[j];
    }
    double avg;
    avg = (double)sum / count;

    cout << fixed;
    cout.precision(1);
    
    cout << sum << " " << avg << endl;
    return 0;
}