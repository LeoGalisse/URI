#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
    int n; //numero de casos
    float x[99]; //posicao x
    float y[99]; //posicao y
    char op[99]; //armazenar as operacoes
    int i; //variavel contadora
    
    cin >> n;
    
    //armazenar os valores em x
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    
    //armazenar os valores em y
    for (i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    
    //armazenar as operacoes em op
    for (i = 0; i < n; i++)
    {
        cin >> op[i];
    }
    
    //fazer os calculos de x op y
    for (i = 0; i < n; i++)
    {
        if (op[i] == '*')
            cout << x[i] << " " << op[i] << " " << y[i] << " = " << x[i] * y[i] << endl;
        else if (op[i] == '+')
            cout << x[i] << " " << op[i] << " " << y[i] << " = " << x[i] + y[i] << endl;
        else if (op[i] == '-')
            cout << x[i] << " " << op[i] << " " << y[i] << " = " << x[i] - y[i] << endl;
        else if (op[i] == '/')
            cout << x[i] << " " << op[i] << " " << y[i] << " = " << fixed << setprecision(2) << x[i] / y[i] << endl;
    }
 
 
    return 0;
}