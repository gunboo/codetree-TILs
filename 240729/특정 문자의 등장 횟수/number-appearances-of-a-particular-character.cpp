#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int count1 = 0, count2 = 0;

    for(int i = 0; str[i] != 0; i++) {
        if(str[i] == 'e' && str[i+1] == 'e') {
            count1++;
        }
        if(str[i] == 'e' && str[i+1]=='b') {
            count2++;
        }
    }
    cout << count1 << " " << count2;
    return 0;
}