#include <iostream>

using namespace std;

int main()
{
	int k; // numero de consultas
	int n, m; // coordenadas do ponto divisor
	int x, y; // coordenadas das residencias
	int pos[10005]; //posicao das casas
	int i; // contadora
	
	cin >> k;
	
	while(k != 0) // finalizar programa se k = 0
	{
		cin >> n >> m;
		
		for(i = 0; i < k; i++)
		{
			cin >> x >> y;
			if (x == n || y == m)
				pos[i] = 0; // representa que a residencia esta na divisa
			else if (x > n && y > m)
				pos[i] = 1; // representa que a residencia esta em NE
			else if (x > n && y < m)
				pos[i] = 2; // representa que a residencia esta em SE
			else if (x < n && y > m)
				pos[i] = 3; // representa que a residencia esta em NO
			else
			    pos[i] = 4; // representa que a residencia esta em SO
		}
		
		for(i = 0; i < k; i++) // representar aonde cada residencia vai ficar
		{
			if (pos[i] == 0)
				cout << "divisa" << endl;
			else if (pos[i] == 1)
				cout << "NE" << endl;
			else if (pos[i] == 2)
				cout << "SE" << endl;
			else if (pos[i] == 3)
				cout << "NO" << endl;
			else if (pos[i] == 4)
				cout << "SO" << endl;
		}
		
		cin >> k;
	}
	
	return 0;
}