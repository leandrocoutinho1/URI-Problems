#include <iostream>
 
using namespace std;
 
int main() {
    int n = 3;
    float v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v, v + n);
    
    float a, b, c;
    
    a = v[2];
    b = v[1];
    c = v[0];
    
    
    if(a>= (b+c)) cout << "NAO FORMA TRIANGULO" << endl;
    else{
        if(a*a== (b*b)+(c*c)) cout << "TRIANGULO RETANGULO" << endl;
    if((a*a) > (b*b)+(c*c)) cout << "TRIANGULO OBTUSANGULO" << endl;
    if((a*a)< (b*b)+(c*c)) cout << "TRIANGULO ACUTANGULO" << endl;
    if(a==b && a==c) cout << "TRIANGULO EQUILATERO" << endl;
    if((a==b && a!=c) || (c==b && a!=c) || (a==c && a!=b)) cout << "TRIANGULO ISOSCELES" << endl;
    }
    
    return 0;
}