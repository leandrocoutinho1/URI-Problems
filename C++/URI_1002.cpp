#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double area, raio;
    double pi = 3.14159;
    
    cin >> raio;
    area = (raio * raio) * pi;
    cout << fixed << setprecision(4) << "A=" << area << endl;
 
    return 0;
}