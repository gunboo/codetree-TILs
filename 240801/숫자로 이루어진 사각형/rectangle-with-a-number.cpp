#include <iostream>
using namespace std;
void print(int a) {
    int num = 1;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            cout << num << " ";
            if(num == 9) num = 0;
            num++;

        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    print(n);
    return 0;
}