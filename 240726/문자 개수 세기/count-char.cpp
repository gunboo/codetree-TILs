#include <iostream>
using namespace std;

int main() {
    string str1;
    char a;
    getline(cin, str1);
    cin >> a;
    int num = 0;

    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] == a) {
            num++;
        }
    }
    cout << num;
    return 0;
}