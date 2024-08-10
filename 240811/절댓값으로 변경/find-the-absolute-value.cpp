#include <iostream>
using namespace std;
void absolute(int n, int *x) {
    for(int i = 0; i < n; i++) {
        if(x[i] < 0) {
            x[i] = -x[i];
        }
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    absolute(n, arr); //절댓값 붙여주는 함수
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}