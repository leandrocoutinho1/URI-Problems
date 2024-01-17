#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int A, B;
    float C;
    cin >> A >> B >> C;
    cout << "NUMBER = " << A << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << B*C << endl;
   
   
    return 0;
}