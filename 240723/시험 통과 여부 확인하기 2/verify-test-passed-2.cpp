#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int score[4];
    int sum = 0;
    int count = 0;
    double avg = 0;

    for (int i = 0; i < n; i ++) {
        for(int j = 0; j < 4; j++) {
        cin >> score[j];
        sum += score[j];
    }
    avg = (double)sum / 4.0;
    if(avg >= 60) {
        cout << "pass" << endl;
        count++;
    }
    else {
        cout << "fail" << endl;
    }
    avg = 0;
    sum = 0;
    }   
    cout << count;
    return 0;
}