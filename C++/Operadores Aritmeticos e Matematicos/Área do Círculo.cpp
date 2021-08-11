#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
    double area;
    double n = 3.14159;
    double raio;
    
    cin >> raio;
    area = n * (raio * raio);
    
    cout << fixed << setprecision(4);
    cout << "A=" << area << endl;

    return 0;
}