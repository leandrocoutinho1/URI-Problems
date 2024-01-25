#include <iostream>
 
using namespace std;
 
int main() {
 
    double N;
    cin >> N;

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
    N -= n1 * 1.0;
    
    int n05 = N/0.5;
    N -= n05 * 0.5;
    
    int n025 = N/0.25;
    N -= n025 * 0.25;
    
    int n01 = N/0.1;
    N -= n01 * 0.1;
    
    int n005 = N/0.05;
    N -= n005 * 0.05;

    int n001 = N/0.01;
    
    cout << "NOTAS:\n";
    cout << n100 << " nota(s) de R$ 100,00\n";
    cout << n50 << " nota(s) de R$ 50,00\n";
    cout << n20 << " nota(s) de R$ 20,00\n";
    cout << n10 << " nota(s) de R$ 10,00\n";
    cout << n5 << " nota(s) de R$ 5,00\n";
    cout << n2 << " nota(s) de R$ 2,00\n";
    
    cout << "MOEDAS:\n";
    cout << n1 << " moeda(s) de R$ 1.00\n";
    cout << n05 << " moeda(s) de R$ 0.50\n";
    cout << n025 << " moeda(s) de R$ 0.25\n";
    cout << n01 << " moeda(s) de R$ 0.10\n";
    cout << n005 << " moeda(s) de R$ 0.05\n";
    cout << n001 << " moeda(s) de R$ 0.01\n";
    
    return 0;
}