#include <iostream>
using namespace std;

int main() {
   int age;
   double sum = 0;
   int cnt = 0;
   
    cout << fixed;
    cout.precision(2);
    
   while(1) {
    cin >> age;
    if (age >= 30) break;
    sum += age;
    cnt++;
    
    }
    cout << sum / cnt << endl;
    


    return 0;
}