#include <iostream>
using namespace std;

int main() {
    int num[100];
    int count_num[10] = {0,};
    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        cin >> num[i];
    }

    for (int i = 0; num[i]!=0; i++) {
        if(num[i] >= 10 && num[i] < 100){
            num[i] /= 10;
            count_num[num[i]]++;
        }
}
    
    for(int i = 1; i < 10; i++) {
        cout << i << " - " << count_num[i] << endl;
    }
    
    return 0;
}