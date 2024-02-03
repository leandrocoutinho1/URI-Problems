#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    float a, b, c;
    cin >> a >> b >> c;
    
    if (a<b+c && b<a+c && c<b+a) cout << fixed << setprecision(1) << "Perimetro = " << (a + b + c)*1.0 << endl;
    else cout << fixed << setprecision(1) << "Area = " << ((a + b)*c)/2 << endl;
 
    return 0;
}