#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string c = str;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == str[0]) {
            c[i] = str[1];
        }
        if(str[i] == str[1]) {
            c[i] = str[0];
        } 
    }
    cout << c;
    return 0;
}