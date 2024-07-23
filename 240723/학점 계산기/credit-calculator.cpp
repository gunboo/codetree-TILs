#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> arr(n);
    double sum = 0;
    double avg = 0;
    
    cout << fixed;
    cout.precision(1);

   
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / n;
    cout << avg << endl;
    if(avg >= 4.0) cout << "Perfect";
    else if(avg < 4.0 && avg >= 3.0) cout << "Good";
    else cout << "Poor";
    return 0;
}