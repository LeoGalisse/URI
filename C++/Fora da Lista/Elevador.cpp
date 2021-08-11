#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int l, c, r1, r2;
	int distancia, maior;

	cin >> l >> c >> r1 >> r2;

	while (l != 0 && c != 0 && r1 != 0 && r2 != 0)
	{
		distancia = sqrt(pow((l - r2 - r1), 2) + pow((c - r2 - r1), 2));
		
		if (r1 > r2)
			maior = r1 + r1;
		else
		{
			maior = r2 + r2;
		}
		
		if (maior <= c && maior <= l)
		{
			if (r1 + r2 <= distancia)
				cout << "S" << endl;
			else
			{
				cout << "N" << endl;
			}
		}
		else
		{
			cout << "N" << endl;
		}
		cin >> l >> c >> r1 >> r2;
	}

	return 0;
}