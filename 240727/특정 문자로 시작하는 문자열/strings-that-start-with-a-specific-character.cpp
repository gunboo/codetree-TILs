#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    char a;
    string arr[n];
    double avg = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> a;
    int len = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i][0] == a) {
            len += arr[i].length();
            sum++;
        }
    }
    cout << fixed;
    cout.precision(2);

    avg = (double)len / sum;
    cout << sum << " " << avg;
    return 0;
}