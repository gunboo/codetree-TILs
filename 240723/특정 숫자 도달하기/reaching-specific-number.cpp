#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >>  arr[7] >>arr[8] >> arr[9];

    cout << fixed;
    cout.precision(1);

    int sum = 0;
    double avg = 0;
    int num = 0;

    for(int i = 0; i < 10; i++
    ) {
        if (arr[i] >= 250) break;
        sum += arr[i];
        num++;
    }   
    avg = (double)sum / (double)num;
    cout << sum << " " << avg << endl;
    return 0;
}