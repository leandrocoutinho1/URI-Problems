#include <iostream>
 
using namespace std;
 
int main() {
 
    long int N;
    cin >> N;
    cout << N << endl;
    int n100 = N/100;
    N -= n100 * 100;
    
    int n50 = N/50;
    N -= n50 * 50;
    
    int n20 = N/20;
    N -= n20 * 20;
    
    int n10 = N/10;
    N -= n10 * 10;
    
    int n5 = N/5;
    N -= n5 * 5;
    
    int n2 = N/2;
    N -= n2 * 2;
    
    int n1 = N/1;
    
    cout << n100 << " nota(s) de R$ 100,00\n";
    cout << n50 << " nota(s) de R$ 50,00\n";
    cout << n20 << " nota(s) de R$ 20,00\n";
    cout << n10 << " nota(s) de R$ 10,00\n";
    cout << n5 << " nota(s) de R$ 5,00\n";
    cout << n2 << " nota(s) de R$ 2,00\n";
    cout << n1 << " nota(s) de R$ 1,00\n";
    
 
    return 0;
}