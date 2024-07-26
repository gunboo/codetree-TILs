#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a1, a2, a3;
    cin >> a1;
    cin >> a2;
    cin >> a3;
    int a = 0, b = 0, c = 0;
    a = a1.length();
    b = a2.length();
    c = a3.length();
    
    int max_len =  max({a,b,c});
    int min_len = min({a,b,c});
    cout << max_len - min_len;
    return 0;
}