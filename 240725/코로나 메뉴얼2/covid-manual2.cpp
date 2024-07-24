#include <iostream>
using namespace std;

int main() {
    int num[3]; //체온 받는 곳
    char word[3]; //Y or N 받는 곳
    int count_num[5] = {0,}; //A B C D E에 해당하는 숫자 세는 곳
    for(int i = 0; i < 3; i++) { //증상이랑 온도 입력 받는 곳
        cin >> word[i] >> num[i];
    }
    for(int i = 0 ; i < 5; i++) { //A~E에 들어갈 사람 숫자를 세는 곳
        if (word[i]== 'Y' && num[i]>= 37) {
           count_num[0]++;
        }
        else if(word[i]== 'N' && num[i] >= 37) {
            count_num[1]++;
        }
        else if(word[i] == 'Y' && num[i] < 37) {
            count_num[2]++;
        }
        else if(word[i] == 'N' && num[i] < 37) {
            count_num[3]++;
        }
    }
    for(int i = 0; i < 4; i++) {//출력하는 곳
        cout << count_num[i] << " ";
    }
    if(count_num[0] >= 2) {
            cout << "E";
        }
    return 0;
}