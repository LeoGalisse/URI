#include <iostream>

using namespace std;

int main()
{
	int m[12][12];
	int m2[12][12];
	int x, y; // numero de linhas e colunas
	int i, j; // contadora

	cin >> x >> y;

	for(i = 0; i < x; i++) // receber os valores da matriz
	{
		for(j = 0; j < y; j++)
			cin >> m[i][j];
	}
	
	for(i = 0; i < x; i++) // receber os valores da segunda matriz
	{
		for(j = 0; j < y; j++)
			cin >> m2[i][j];
	}
	
	// soma de matrizes
	for(i = 0; i < x; i++) // receber os valores da matriz
	{
		for(j = 0; j < y; j++)
		{
			if (j == 0)
				cout << m[i][j] + m2[i][j];
			else
				cout << " " << m[i][j] + m2[i][j];
		}
		cout << endl;
	}


	return 0;
}
