#include <iostream>

using namespace std;

int main()
{
	int m[2][2];
	int i, j; // contadoras
	int d; // determinante da matriz

	for (i = 0; i < 2; i++) // armazenar valores na matriz
	{
		for(j = 0; j < 2; j++)
			cin >> m[i][j];
	}

	cout << "M: " << endl;
	// mostrar a matriz por linha
	for (i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			if(j == 0)
				cout << m[i][j];
			else
		 	    cout << " " << m[i][j];
		}
		cout << endl;
	}
	
	cout << "M transposta: " << endl;
	//mostrar a matriz por coluna
	for (i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			if(j == 0)
				cout << m[j][i];
			else
		 	    cout << " " << m[j][i];
		}
		cout << endl;
	}
	
	//calcular determinante
	d = m[0][0] * m[1][1] - m[0][1] * m[1][0];
	cout << "Determinante: " << d << endl;

	return 0;
}
