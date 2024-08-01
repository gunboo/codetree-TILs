#include <iostream>
using namespace std;
void squral(int a, int b)
{
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << "1";
        }
        cout << endl;
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    squral(n,m);
    return 0;
}