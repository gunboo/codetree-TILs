#include <iostream>
#include <string>
using namespace std;

int main() {
    string a1, a2, a3;
    cin >> a1;
    cin >> a2;
    cin >> a3;

    int a = a1.length();
    int b = a2.length();
    int c = a3.length();
    
    int max = a;
    if(max < b) max = b;
    if(max < c) max = c;
    int min = a;
    if(min > b) min = b;
    if(min > c) min = c;
    
    cout << max - min;
    return 0;
}