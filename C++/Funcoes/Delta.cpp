#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//calculo do delta
float calc_delta(float a, float b, float c)
{
	float delta;
	delta = pow(b, 2) - 4 * a * c;
	
	return delta;
}

int main()
{
	int x, y, z; // valores da funcao de baskara
	float resul; // resultado
	
	cin >> x >> y >> z;
	
	resul = calc_delta(x, y, z);
	
	cout << fixed << setprecision(2) << "delta = " << resul << endl;
	
	return 0;
}