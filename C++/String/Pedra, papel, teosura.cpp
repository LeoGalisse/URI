#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n; // numero de casos de teste
	// para cada teste existem duas entradas representadas a seguir
	char jogador1[8];
	char jogador2[8];
	int i; // variavel contadora
	
	cin >> n;
	cin.ignore();
	
	// loop para armazenar a jogada de cada um e verificar quem ganhou
	for(i = 0; i < n; i++)
	{
		cin.getline(jogador1, 8);
		cin.getline(jogador2, 8);
		
		//caso seja empate
		if (strcmp(jogador1, jogador2) == 0)
			cout << "Empate" << endl;
		
		//caso o jogador um jogue papel, conferir com o que o jogador 2 jogou
		else if (strcmp(jogador1, "papel") == 0)
		{
			if (strcmp(jogador2, "tesoura") == 0)
				cout << "Jogador B" << endl;
			else if (strcmp(jogador2, "pedra") == 0)
				cout << "Jogador A" << endl;
		}
		//caso o jogador um jogue tesoura, conferir com o que o jogador 2 jogou
		else if (strcmp(jogador1, "tesoura") == 0)
		{
			if (strcmp(jogador2, "pedra") == 0)
				cout << "Jogador B" << endl;
			else if (strcmp(jogador2, "papel") == 0)
				cout << "Jogador A" << endl;
		}
		//caso o jogador um jogue pedra, conferir com o que o jogador 2 jogou
		else if (strcmp(jogador1, "pedra") == 0)
		{
			if (strcmp(jogador2, "papel") == 0)
				cout << "Jogador B" << endl;
			else if (strcmp(jogador2, "tesoura") == 0)
				cout << "Jogador A" << endl;
		}
	}
	
	return 0;
}