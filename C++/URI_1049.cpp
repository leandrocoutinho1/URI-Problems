#include <iostream>
 
using namespace std;
 
int main() {
 
    string a, b, c;
    cin >> a >> b >> c;
    
    if(a=="vertebrado"){
        if(b=="ave" && c=="carnivoro") cout << "aguia\n";
        else if(b=="ave" && c=="onivoro") cout << "pomba\n";
        else if(b=="mamifero" && c=="onivoro") cout << "homem\n";
        else if(b=="mamifero" && c=="herbivoro") cout << "vaca\n";
    }
    else if(a=="invertebrado"){
        if(b=="inseto" && c=="hematofago") cout << "pulga\n";
        else if(b=="inseto" && c=="herbivoro") cout << "lagarta\n";
        else if(b=="anelideo" && c=="hematofago") cout << "sanguessuga\n";
        else if(b=="anelideo" && c=="onivoro") cout << "minhoca\n";
    }
 
    return 0;
}
