#include <iostream>

using namespace std;

int main()
{
	int m[3][4];
	int i, j; // contadoras
	int soma = 0; // soma dos elementos da matriz
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			cin >> m[i][j];
			soma += m[i][j];
		}
	}
	
	cout << "soma = " << soma << endl;
	
	return 0;
}