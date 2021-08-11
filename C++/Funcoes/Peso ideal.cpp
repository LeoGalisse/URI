#include <iostream>
#include <iomanip>

using namespace std;

//calculo de peso ideal baseado em masculino e feminino
double peso (double h, char sexo)
{
	double ideal = 0;
	if (sexo == 'M')
		ideal = 72.7 * h - 58;
	else if (sexo == 'F')
		ideal = 62.1 * h - 44.7;
	
	return ideal;
}

int main()
{
	double altura; // armazenar a altura
	char mf; // armazenar o sexo da pessoa
	double resultado; // resultado do peso ideal
	
	cin >> altura;
	cin >> mf;
	
	// calculo do resultado do peso ideal
	resultado = peso (altura, mf);
	
	cout << fixed << setprecision(2) << "Peso ideal: " << resultado << " kg" << endl;
	
	
	return 0;
}