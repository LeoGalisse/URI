#include <iostream>
 
using namespace std;
 
int main() 
{
    int A, B, C, D;
    int DIFERENCA;
    
    cin >> A >> B >> C >> D;
    DIFERENCA = (A*B - C*D);
    
    cout << "DIFERENCA = " << DIFERENCA << endl;

    return 0;
}