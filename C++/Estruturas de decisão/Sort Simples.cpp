#include <iostream>

using namespace std;

int main()
{
	int x, y, z;

	cin >> x >> y >> z;

	if (x > y && x > z && y > z)
	{
		cout << z << endl;
		cout << y << endl;
		cout << x << endl;
		cout << endl;
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;

	}
	else if (x > y && x > z && y < z)
	{
		cout << y << endl;
		cout << z << endl;
		cout << x << endl;
		cout << endl;
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
	}
	else if (x < y && y > z && x < z)
	{
		cout << x << endl;
		cout << z << endl;
		cout << y << endl;
		cout << endl;
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
	}
	else if (x < y && y > z && x > z)
	{
		cout << z << endl;
		cout << x << endl;
		cout << y << endl;
		cout << endl;
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
	}
	else if (z > x && z > y && y > x)
	{
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
		cout << endl;
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
	}
	else if (z > x && z > y && y < x)
	{
		cout << y << endl;
		cout << x << endl;
		cout << z << endl;
		cout << endl;
		cout << x << endl;
		cout << y << endl;
		cout << z << endl;
	}
	return 0;
}