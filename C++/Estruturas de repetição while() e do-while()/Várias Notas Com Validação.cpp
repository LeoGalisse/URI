#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float x, y, media, u;

	while(!(x == 2))
	{
		while(y != 2)
		{
			cin >> x;
			if (x >= 0 && x <= 10)
			{
				media = media + x;
				y = y + 1;
			}
			else
			{
				cout << "nota invalida" << endl;
			}
		}
		cout << fixed << setprecision(2) << "media = " << media / y << endl;
		
		y = 0;
		media = 0;
		
		while(!(u == 1))
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> u;
			if (u == 2)
				return 0;
		}
		u = 0;
	}

	return 0;
}
