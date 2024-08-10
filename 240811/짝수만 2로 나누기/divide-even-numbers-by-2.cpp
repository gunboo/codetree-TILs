#include <iostream>
using namespace std;
void even(int *x, int n) {
    for(int i = 0; i < n; i++) {
        if(x[i] % 2 == 0) {
            x[i] /= 2;
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
    even(arr, n);
    for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    }
    return 0;
}