#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[10];
    char a;
    for(int i = 0; i < 10; i++) {
        cin >> str[i];
    }
    cin >> a;

    for(int i = 0; i < 10; i++) {
        int len = str[i].length();
        if (str[i][len-1] == a) {
            cout << str[i] << endl;
        }
        else {
            cout << "None";
        }
    }
    return 0;
}