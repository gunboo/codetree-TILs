#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = toupper(str[i]);
        }
        else {
            str[i] = tolower(str[i]);
        }
    }
    cout << str;
    return 0;
}