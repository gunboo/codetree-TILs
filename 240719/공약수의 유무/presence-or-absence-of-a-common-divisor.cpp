#include <iostream>
using namespace std;

int main() {
    int a, b, result = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {  
    if((1920 % i == 0) && (2880 % i == 0)) {
    result = 1; break;
    } 
    }
    cout << result << endl;
    
    return 0;
}