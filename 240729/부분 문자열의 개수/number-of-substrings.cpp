#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    
    int len2 = b.length();
    int count = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a.find(b) == string::npos)
            break;
        count++;
        i += a.find(b);
    }
    cout << count;
    return 0;
}