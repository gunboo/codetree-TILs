#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str[n];
    int sum = 0;
    int sum1 = 0;
    for(int i = 0; i < n; i++) {
        cin >> str[i];
        if(str[i][0] == 'a') sum1++;
        sum += str[i].length();
    }
    cout << sum << " " << sum1;
    return 0;
}