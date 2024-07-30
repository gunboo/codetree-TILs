#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if(isalpha(str[i])) {
            cout << (char)tolower(str[i]);
        }
        else if(isdigit(str[i])) {
            cout << str[i];
        }
    }
    return 0;
}