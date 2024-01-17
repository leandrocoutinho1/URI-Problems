#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    string s;
    float A, B;
    cin >> s >> A >> B;
    cout << fixed << setprecision(2) << "TOTAL = R$ " << A+(0.15*B) << endl;
    
 
    return 0;
}