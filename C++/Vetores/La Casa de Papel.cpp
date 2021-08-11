#include <iostream>
 
using namespace std;
 
int main() 
{
    int n; //numero de pessoas que votaram
    int votos[999]; //votos de cada pessoa
    int i; //varivavel contadora
    int gostou; //pessoas que gostaram
    int ngostou; // pessoas que nao gostaram
    
    cin >> n;
    
    gostou = 0;
    ngostou = 0;
    
    // receber os votos e distribuir para as variaveis se gostaram ou nao
    for (i = 0; i < n; i++)
    {
        cin >> votos[i];
        if (votos[i] == 1)
            gostou++;
        else if (votos[i] == -1)
            ngostou++;
    }
    
    //comparar os que gostaram com os que nao gostaram
    if (gostou == ngostou)
        cout << "Deu empate\n";
    else if (gostou > ngostou)
        cout << "A maioria gostou\n";
    else
        cout << "A maioria nao gostou" << endl;

    return 0;
}