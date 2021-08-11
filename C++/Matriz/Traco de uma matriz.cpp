#include <iostream>

using namespace std;

int main()
{
	int n; // matriz quadrada
	int i, j; // contadora
	int m[12][12];
	int traco = 0; // soma da diagonal principal
	
	cin >> n;
	
	for(i = 0; i < n; i++) // armazenar dados da matriz
	{
		for(j = 0; j < n; j++)
		{
			cin >> m[i][j];
		}
	}
	
	//soma do traco
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i == j) // somar apenas na diagonal
				traco += m[i][j];
		}
	}
	
	cout << "traco = " << traco << endl;
	
	return 0;
}