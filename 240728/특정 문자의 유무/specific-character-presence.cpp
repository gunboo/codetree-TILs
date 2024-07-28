#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();

    bool found_ee = false;
    bool found_ab = false;

    for(int i = 0; i < len - 1; i++) {
        if(str[i] == 'e' && str[i+1] == 'e') {
           found_ee = true;
        }
        if(str[i] == 'a' && str[i+1] == 'b') {
            found_ab = true;
        }
    }
    if(found_ee) {
        cout << "Yes" << " ";
    }else cout <<"No" << " ";
    if(found_ab) {
        cout << "Yes";
    }else cout << "No";
    
    return 0;
}