#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int X;
    float Y;
    float kml;
    
    cout << fixed << setprecision (3);
    
    cin >> X >> Y;
    
    kml = X / Y;
    
    cout << kml << " km/l" << endl;
    

 
    return 0;
}