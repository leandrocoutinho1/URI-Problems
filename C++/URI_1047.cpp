#include <iostream>
 
using namespace std;
 
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int temp = (c - a) * 60 + (d - b);
    
    if (temp <= 0) {
        temp += 24 * 60;  // Adiciona 24 horas em minutos se o tempo for negativo
    }

    int h = temp / 60;
    int m = temp % 60;
    
    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)\n";

    return 0;
}