#include <iostream>
#include <math.h>
#include <iomanip>

 
using namespace std;
 
int main() {

    float x1, y1, x2, y2;
    
    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(4) << (pow((pow((x2-x1),2) + pow((y2-y1),2)),(1.0/2))) << endl;
 
    return 0;
}