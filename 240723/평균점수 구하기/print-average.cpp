#include <iostream>
using namespace std;

int main() {
    int score[8];
    double sum = 0;
    double avg = 0;

    for ( int i = 0; i < 8; i++) {
        cin >> score[i];
        sum += score[i];
    }
    cout << fixed;
    cout.precision(1);

    avg = sum / 8.0;
    cout << avg;
    return 0;
}