#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c;
	double delta;
	double x1, x2;
	
	cin >> a >> b >> c;
	delta = pow(b , 2) - (4 * a * c);
	
	if (delta < 0 || a==0)
		cout << "Impossivel calcular" << endl;
	else
	{
		cout << fixed << setprecision(5);
		
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		
		cout << "R1 = " << x1 << endl;
		cout << "R2 = " << x2 << endl;
	}
	
	return 0;
}