#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string sub = str;
    for(int i = 0; i <= str.length(); i++) {
        cout << sub << endl;
        sub = sub.substr(str.length()-1,1) + sub.substr(0,str.length()-1);
    }
    return 0;
}