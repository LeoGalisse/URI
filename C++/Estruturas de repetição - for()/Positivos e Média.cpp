#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
    float x, media;
    int i, n, k;
    
    n = 0;
    media = 0;
    k = 6;
    
    for (i = 0; i < k; i++)
    {
        cin >> x;
        if (x > 0)
        {
            n = n + 1;
            media = media + x;
        }
    }
    
    cout << n << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media / n << endl;
 
    return 0;
}