#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x;
	
	cin >> x;
	
	cout << fixed << setprecision (2);
	
	if ( x >= 0.00 && x <= 2000.00)
		cout << "Isento" << endl;
	else if (x > 2000.00 && x <= 3000.00)
		cout << "R$ " <<(x - 2000.00) * 0.08 << endl;
	else if (x > 3000.00 && x <= 4500.00)
		cout << "R$ " << (x - 3000.00) * 0.18 + (1000.00 * 0.08) << endl;
	else if (x > 4500.00)
		cout << "R$ " << (x - 4500.00) * 0.28 + (1000.00 * 0.08) + (1500.00 *0.18) << endl;
	
	return 0;
}