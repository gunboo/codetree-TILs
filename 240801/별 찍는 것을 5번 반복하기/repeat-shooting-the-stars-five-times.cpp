#include <iostream>
using namespace std;
void printstar() 
{
    for(int i = 0; i < 10; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    printstar();
    printstar();
    printstar();
    printstar();
    printstar();
    return 0;
}