#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string a;
    cin >> str;
    cin >> a;
    int len = str.length();
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == 'L') {
            str = str.substr(1, len) +  str.substr(0,1);
        }
        else if(a[i] == 'R') {
            str = str.substr(len-1, 1) + str.substr(0,len-1);
        }
    }
    cout << str;
    return 0;
}