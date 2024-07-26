#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int num;
    cin >> num;
    int len = str.length();

    for(int i = len-1; i > len-1-num; i--) {
        cout << str[i];
    }
    return 0;
}