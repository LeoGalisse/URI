#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, n, x;

	cin >> n;

	i = 0;

	for(n < 10000; i < n; i++)
	{
		cin >> x;

		if (x == 0)
			cout << "NULL" << endl;
		else if(x % 2 == 0)
		{
			if (x < 0)
				cout << "EVEN NEGATIVE" << endl;
			else
				cout << "EVEN POSITIVE" << endl;
		}
		else
		{
			if (x < 0)
				cout << "ODD NEGATIVE" << endl;
			else
				cout << "ODD POSITIVE" << endl;
		}
	}
	return 0;
}