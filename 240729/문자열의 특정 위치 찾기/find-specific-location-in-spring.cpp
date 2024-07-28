#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char word;
    cin >> str;
    cin >> word;
    int len = str.length();
    bool found = false;
   
    for(int i = 0; i < len; i++) {
        if(str[i] == word) {
            cout << i;
            found = true;
            break;
        }
        }
    if (!found) {
        cout << "No";
    }
    return 0;
}