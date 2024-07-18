#include <iostream>
using namespace std;
void compare(int x, int y)
{
    if (x > y) cout << "1" << endl;
    else cout << "0" << endl;
}
int main() {
    int a;
    cin >> a;
    int b,c,d,e;
    cin >> b >> c >> d >> e;
    
    compare(a, b);
    compare(a, c);
    compare(a, d);
    compare(a, e);


    return 0;
}