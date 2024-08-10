#include <iostream>
using namespace std;
int compare(string &a) {
    char b = a[0];
    for(int i = 1; i < a.length(); i++) {
        if(b != a[i]) return 1;
    }
    return 0;
}
int main() {
    string str; 
    cin >> str;
    int a = compare(str);
    if(a == 1) cout << "Yes";
    else cout << "No";

    return 0;
}