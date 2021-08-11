#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// calculo de bascara
int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
	int raiz = 1; // caso nao exista raizes reais
	float delta = 0;

	delta = pow(b, 2) - 4 * a * c; // calcula de delta

	if (delta > 0) // caso delta maior que 0 há raizes reais
	{
		x2 = (-b + sqrt(delta)) / (2 * a);
		x1 = (-b - sqrt(delta)) / (2 * a);
		raiz = 0;
	}

	else if (delta == 0) // delta = 0 há apenas uma raiz real
	{
		x1 = -b / (2 * a) + 0;
		x2 = x1;
		raiz = 0;
	}

	return raiz;
}

int main()
{
	int x, y, z;
	float x1, x2;
	float bascara = 0;

	cin >> x >> y >> z; // valores da funcao de 2 grau

	bascara = calc_raizes(x, y, z, x1, x2); // calcular bascara

	if (x1 == x2) // caso tenha apenas uma raiz real
		cout << fixed << setprecision(2) << "x = " << x1 << endl;
	else if (bascara == 1) // caso nao tenha raizes reais
		cout << "Nao ha raizes reais" << endl;
	else if (bascara == 0) // caso tenha 2 raizes reais
	{
		if (x1 < x2)
		{
			cout << fixed << setprecision(2) << "x1 = " << x1 << endl;
			cout << fixed << setprecision(2) << "x2 = " << x2 << endl;
		}
		else
		{
			cout << fixed << setprecision(2) << "x1 = " << x2 << endl;
			cout << fixed << setprecision(2) << "x2 = " << x1 << endl;
		}

	}

	return 0;
}
