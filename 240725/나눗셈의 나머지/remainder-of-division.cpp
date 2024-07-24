#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; //a, b입력받고
    int count_num[11] = {0,}; //나머지를 셀 숫자
    int sum = 0;
    
   while(a > 1) {
        count_num[a % b]++;
        a /= b; //몫 a에 다시 저장
    }
    for (int i = 0; i < 11; i++) {
         sum += (count_num[i] * count_num[i]);
    }
    cout << sum;
    return 0;
}