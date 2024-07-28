#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string str;
    getline(cin,str);
    int count = 0;

    for(int i = 0; str[i] != 0; i++) {
        if(str[i] != ' ') {
        cout << str[i];
        count++;
        }
        if(count == 5) {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}