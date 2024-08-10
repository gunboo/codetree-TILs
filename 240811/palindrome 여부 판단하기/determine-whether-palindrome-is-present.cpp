#include <iostream>
using namespace std;
int stringas(string &s) {
    string b;
    for(int i = s.length() - 1; i >= 0; i--) {
        b += s[i];   
    } 
    if(s == b) return 1;
    else return 0;
}  
int main() {
    string a;
    cin >> a;

    int b = stringas(a);

    if(b == 1) cout << "Yes";
    else cout << "No";
    
    return 0;
}