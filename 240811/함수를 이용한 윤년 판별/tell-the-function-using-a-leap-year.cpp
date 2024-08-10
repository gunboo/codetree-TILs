#include <iostream>
using namespace std;
bool year(int y) {
    if (y % 400 == 0) return true; //400으로 나누어 떨어지면 윤년
    if (y % 100 == 0) return false; //100으로 떨어지면 평년
    if ( y % 4 == 0 ) return true;
    else return false;
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