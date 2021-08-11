#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
    cout << fixed << setprecision (3);
    
    int hora;
    int kmh;
    float dis;
    float litros;
    
    cin >> hora;
    cin >> kmh;
    
    dis = hora * kmh * 1.0;
    litros = dis / 12;
    
    cout << litros << endl;
    

    return 0;
}