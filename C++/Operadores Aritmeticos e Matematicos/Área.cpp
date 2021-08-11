#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() 
{
    float A, B, C;
    float tri;
    float cir;
    float trap;
    float qua;
    float ret;
    
    cout << fixed << setprecision (3);

    cin >> A >> B >> C;
    tri = (A * C) / 2;
    cir = 3.14159 * pow(C, 2);
    trap = (A + B) * C / 2;
    qua = pow(B, 2);
    ret = A * B;
    
    cout << "TRIANGULO: " << tri << endl;
    cout << "CIRCULO: " << cir << endl;
    cout << "TRAPEZIO: " << trap << endl;
    cout << "QUADRADO: " << qua << endl;
    cout << "RETANGULO: " << ret << endl;
    
    return 0;
}