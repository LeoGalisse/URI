#include <iostream>
 
using namespace std;
 
int main() 
{
    int i, n, v;
    float x;
    
    n = 6;
    v = 0;
    
    for (i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
        {
            v = v + 1;
        }
    }
    cout << v << " valores positivos" << endl;
 
    return 0;
}