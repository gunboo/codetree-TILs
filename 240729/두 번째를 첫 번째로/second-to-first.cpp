#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string a = str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == str[1]) {
            a[i] = str[0];
        }
    }
    cout << a;
    return 0;
}