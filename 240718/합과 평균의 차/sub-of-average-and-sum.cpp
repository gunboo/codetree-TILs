#include <iostream>
using namespace std;

int main() {
   int a,b,c;
   cin >> a >> b >> c;

   int sum, avg;

   sum = a+b+c;
   avg = (a+b+c) / 3;
   
   cout << sum <<  endl;
   cout << avg << endl;
   cout << sum-avg << endl;
    return 0;
}