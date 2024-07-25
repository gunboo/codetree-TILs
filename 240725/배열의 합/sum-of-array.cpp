#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int sum = 0; //각 행의 합을 저장할 변수
    for(int i = 0; i < 4; i++) { //배열 입력받기
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        cout << sum <<endl;
        sum = 0;
    }
    return 0;
}