#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str1;
    string str2;
    for(int i = 0; i < n; i++) {
        cin >> str1;
        str2.append(str1);
    }
    cout << str2;
    return 0;
}