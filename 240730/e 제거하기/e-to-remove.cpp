#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'e') {
            str.erase(i,1);
            cout << str;
            break;
        }
    }
    return 0;
}