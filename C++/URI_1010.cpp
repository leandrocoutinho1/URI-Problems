#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int A, B, D, E;
    float C, F;
    
    cin >> A >> B >> C >> D >> E >> F;
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << (B*C)+(E*F) << endl;
 
    return 0;
}