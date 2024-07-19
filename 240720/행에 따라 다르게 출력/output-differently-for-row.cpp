#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 1;
    int j;
    int k;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            for(j = 0; j < n; j++) {
             cout << cnt << " ";
            if (j == n-1){ 
            cnt +=2;
           }else cnt++;
            }
          
        }
        if(i % 2 == 1) {
            for (k = 0; k < n; k++) {
            cout << cnt << " ";
            if (k == n-1){ 
            cnt++;
           }else cnt +=2;
            }
        }
        cout << endl;
    }
    return 0;
}