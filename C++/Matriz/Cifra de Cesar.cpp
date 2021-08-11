#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int m[10][10];
	int x, y; // linhas e colunas
	int i, j; // contadora
	char nome[50]; // texto criptografado
	int z = 0; // variavel auxiliar

	cin >> x >> y;
	cin.ignore();
	cin.getline(nome, 50);
	
	// colocando a frase na matriz
	for(i = 0; i < x; i++)
	{
		for(j = 0; j < y; j++)
		{
			m[i][j] = (int)nome[z]; // transformando a letra em numero
			z++; // navegar na frase
		}
	}

	for(j = 0; j < y; j++) // saida da frase descriptografada
	{
		for(i = 0; i < x; i++)
		{
			cout << (char)m[i][j]; // mostrar os numeros em letra
		}
	}

	cout << endl;
	
	return 0;
}
