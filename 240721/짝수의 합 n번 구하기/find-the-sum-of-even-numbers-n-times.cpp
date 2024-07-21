#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min, max;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> min >> max;
        for(int j = min; j <= max; j++) {
            if (j % 2 == 0) {
                sum += j;
            }
            
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}