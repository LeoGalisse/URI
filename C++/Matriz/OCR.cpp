#include <iostream>

using namespace std;

int main()
{
	int m[5][3];
	int i, j; // contadora
	int k = 0; // auxiliar

	while(k != 15) // condicao de saida, caso haja 15 zeros seguidos
	{
		k = 0;
		
		// armazenar valores na matriz
		for(i = 0; i < 5; i++)
		{
			for(j = 0; j < 3; j++)
			{
				cin >> m[i][j];
				if(m[i][j] == 0)
					k++; // para caso de 15 zeros seguidos
				else
					k = 0; // se aparecer um 1 zerar o k
			}
		}

		// ver de qual matriz os valores dados pertencem
		// baseado em valores especificos de cada matriz
		if(k != 15)
		{
			if (m[0][0] == 1 && m[0][1] == 1)
				cout << "UM" << endl;

			else if (m[1][0] == 1 && m[3][2] == 1)
				cout << "DOIS" << endl;

			else if (m[1][0] == 1 && m[2][0] == 0 && m[3][0] == 1)
				cout << "TRES" << endl;

			else if (m[0][0] == 0 && m[0][1] == 1)
				cout << "QUATRO" << endl;

			else if (m[1][2] == 1 && m[3][0] == 1)
				cout << "CINCO" << endl;

			else if (m[1][2] == 1 && m[3][0] == 0)
				cout << "SEIS" << endl;

			else if (m[0][0] == 0 && m[1][0] == 1 && m[2][0] == 1)
				cout << "SETE" << endl;

			else if (m[4][0] == 1 && m[0][1] == 0 && m[1][0] == 0)
				cout << "NOVE" << endl;

			else if (m[1][1] == 1 && m[2][1] == 1 && m[3][1] == 1)
				cout << "ZERO" << endl;

			else
				cout << "OITO" << endl;
		}
	}

	return 0;
}
