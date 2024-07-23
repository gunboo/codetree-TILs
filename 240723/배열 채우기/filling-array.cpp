#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int count = 0;
    for( int i = 0; i < 10; i++) {
        cin >> arr[i];
       if (arr[i] == 0) break;
       count++;
    }
        for ( int j = count-1; j >= 0; j--) {
            cout << arr[j] << " ";
        }
       
      
    cout << endl;

    return 0;
}