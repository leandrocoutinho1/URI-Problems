#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b;
    cin >> a >> b;
    
    if((a>b && a%b==0) || (a<b && b%a==0) || a==b)  cout << "Sao Multiplos" << endl;
    else cout << "Nao sao Multiplos" << endl;
 
    return 0;
}