#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    double A, B, C;
    double MEDIA;
    
    cout << fixed << setprecision(1);
    cin >> A >> B >> C;
    MEDIA = (A*2.0 + B*3.0 + C*5.0)/10;
    
    cout << "MEDIA = " << MEDIA << endl;
 
    return 0;
}