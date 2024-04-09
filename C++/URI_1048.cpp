#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    float a;
    cin >> a;
    
    if(a<=400.00){
        cout << fixed << setprecision(2) << "Novo salario: " << (a + (a*0.15)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (a + (a*0.15))-a << endl;
        cout << fixed << setprecision(2) << "Em percentual: 15 %" << endl;
    }
    else if(a<=800.00){
        cout << fixed << setprecision(2) << "Novo salario: " << (a + (a*0.12)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (a + (a*0.12))-a << endl;
        cout << fixed << setprecision(2) << "Em percentual: 12 %" << endl;
    }
    else if(a<=1200.00){
        cout << fixed << setprecision(2) << "Novo salario: " << (a + (a*0.10)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (a + (a*0.10))-a << endl;
        cout << fixed << setprecision(2) << "Em percentual: 10 %" << endl;
    }
    else if(a<=2000.00){
        cout << fixed << setprecision(2) << "Novo salario: " << (a + (a*0.07)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (a + (a*0.07))-a << endl;
        cout << fixed << setprecision(2) << "Em percentual: 7 %" << endl;
    }
    else{
        cout << fixed << setprecision(2) << "Novo salario: " << (a + (a*0.04)) << endl;
        cout << fixed << setprecision(2) << "Reajuste ganho: " << (a + (a*0.04))-a << endl;
        cout << fixed << setprecision(2) << "Em percentual: 4 %" << endl;
    }
    
    
 
    return 0;
}