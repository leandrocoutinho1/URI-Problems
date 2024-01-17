#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float r;
    cin >> r;
    
    cout << fixed << setprecision(3) << "VOLUME = " << (4.0/3)*3.14159*(r*r*r) << endl;
 
    return 0;
}