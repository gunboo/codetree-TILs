#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int count_arr[11] = {0,};
    for(int i = 0; i < 100; i++) {
        cin >> arr[i];
        if(arr[i] == 0) {
            break;
        }
    }
    for(int i = 0; arr[i] != 0; i++) {
        if (arr[i] >= 10 && arr[i] <= 100){
        count_arr[arr[i] / 10]++;
        }
    }
    for(int i = 100; i >= 10; i-=10) {
        cout << i << " - " << count_arr[i / 10] << endl;
    }

    return 0;
}