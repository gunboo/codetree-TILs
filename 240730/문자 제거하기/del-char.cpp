#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    string a = str;
    int num;

    while(a.length() > 1) {
        cin >> num;
        if(num >= a.length()) {
            a.erase(a.length()-1,1);
        }
        else if(num >= 0 && num < a.length()) {
        a.erase(num,1);
        }
        cout << a << endl;
    }
    
    
    return 0;
}