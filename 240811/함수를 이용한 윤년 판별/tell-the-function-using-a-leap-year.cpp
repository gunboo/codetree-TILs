#include <iostream>
using namespace std;
bool year(int y) {
    if(y % 4 == 0) return true;
    if(y % 100 == 0) return false;
    if(y % 400 == 0) return true;
    return false;
}
int main() {
    int n;
    cin >> n;
    if(year(n)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    
    return 0;
}