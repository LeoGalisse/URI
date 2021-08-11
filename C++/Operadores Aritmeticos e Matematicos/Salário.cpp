#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    int numero;
    int horas;
    float porhora;
    float salario;
    
    cout << fixed << setprecision(2);
    cin >> numero >> horas >> porhora;
    salario = horas * (porhora*1.0);
    
    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << salario <<endl;

    return 0;
}