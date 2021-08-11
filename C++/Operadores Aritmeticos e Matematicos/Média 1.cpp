#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    float A, B;
    float MEDIA;
    
    cout << fixed << setprecision(5);
    cin >> A >> B;
    MEDIA = (A*3.5 + B*7.5)/11;
    
    cout << "MEDIA = " << MEDIA << endl;
 
    return 0;
}