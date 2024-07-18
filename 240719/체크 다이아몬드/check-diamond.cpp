#include <iostream>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n;

    for (int i = 0; i < n; i++) { //줄 개수
        for (k = 0; k < n - i - 1; k++) {//공백 2--> 1 --> 0
            cout << " ";
        } 
         cout << "*"; 
        
        for (int j = 0; j < i ; j++) { //공백별 0,1,2
            cout << " " << "*";
        }
            cout << endl;
        }
    for (int i = 0; i < n - 1; i++) { //줄개수
        for (int k = 0; k < i; k++) { //공백 0,1,2
            cout << " ";
        }
        for (int j = 0; j < (n-1)-i ; j++) { //2-->1
            cout << " " << "*";
        }
       
        cout << endl;
    }
    
        return 0;
    
}