#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int temp, vel;
    cin >> temp >> vel;
    
    cout << fixed << setprecision(3) << ((temp*vel)/12.0) << endl;
 
    return 0;
}