#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int v[3] = {a, b, c};
    
    
    sort(v, v + 3);
    
    for (int i = 0; i < 3;  i++){
        cout << v[i] <<endl;
    }
    cout << endl;
    
    cout << a << "\n" << b << "\n" << c << endl;
    
    return 0;
}