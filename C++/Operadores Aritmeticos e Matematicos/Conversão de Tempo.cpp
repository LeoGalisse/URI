#include <iostream>
#include <iomanip>

using namespace std;
 
int main() 
{
    int seg;
    double horas;
    double min;
    float segundos;
    int h;
    int m;
    int s;
    
    cout << fixed << setprecision(14);
    cin >> seg;
    
    horas = seg * 1.0 / 3600;
    h = horas;
    min = (horas - h) * 60; 
    m = min;
    segundos = (min - m) * 60;
    s = segundos;
    
    
    cout << h << ":" << m << ":" << s << endl;
    
    return 0;
}