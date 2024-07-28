#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    cin >> str1;
    string str2 = "Hello";

    str1.append(str2);
    cout << str1;
    return 0;
}