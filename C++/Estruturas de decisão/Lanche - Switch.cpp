#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int x, y;
	
	cin >> x >> y;
	
	cout << fixed << setprecision (2);
	
	switch (x)
	{
		case 1:
			cout << "Total: R$ " << 4.00 * y << endl;
			break;
		case 2:
			cout << "Total: R$ " << 4.50 * y << endl;
			break;
		case 3:
			cout << "Total: R$ " << 5.00 * y << endl;
			break;
		case 4:
			cout << "Total: R$ " << 2.00 * y << endl;
			break;
		case 5: 
			cout << "Total: R$ " << 1.50 * y << endl;
			break;
	}
	
	return 0;
}