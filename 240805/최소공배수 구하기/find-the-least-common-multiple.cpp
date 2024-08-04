#include <iostream>
using namespace std;

int max_num(int n, int m) {
   while(m != 0) {
    int temp = m;
    m = n % m;
    n = temp; //최대공약수
   }
   return n;
}
int min_num(int x, int y) { 
    return (x * y) / max_num(x, y); //최소공배수 찾는 공식 (곱 나누기 최대공약수)
}
int main() {
    int a, b;
    cin >> a >> b;

    int result = min_num(a,b);
    cout << result;
    
    return 0;
}