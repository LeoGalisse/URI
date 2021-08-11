#include <iostream>

using namespace std;

int main()
{
	int m[102][102];
	int l, c; // numero de linhas e colunas
	int i, j; // auxiliar
	int pixel; // considerar pixel quadrado
	int p = 0; // auxiliar
	
	cin >> l >> c >> pixel;
	
	for(i = 0; i < l; i++) // armazenar valores na matriz
	{
		for(j = 0; j < c; j++)
		{
			cin >> m[i][j];
			if(m[i][j] == 1) // caso o pixel seja um, p++
				p++;
		}
	}
	
	// calculo e saida da area
	cout << "AREA = " << pixel * pixel * p << " mm^2" << endl;
	
	return 0;
}