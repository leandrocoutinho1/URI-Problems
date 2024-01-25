#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin >> N;
    
    int a = N / 365;
    N -= a * 365;
    
    int m = N / 30;
    N -= m * 30;
    
    int d = N;

    cout << a << " ano(s)\n";
    cout << m << " mes(es)\n";
    cout << d << " dia(s)\n";
 
    return 0;
}