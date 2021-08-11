#include <iostream>

using namespace std;

int main()
{
	int elemento[100]; // Armazenar elementos
	int i; // Variavel contadora
	int posicao; // Armazenar a posicao do elemento
	int x; // Qual elemento esta sendo procurado
	int i2; // Varivael contadora
	
	posicao = -1; // Para indicar que o elemento nao foi encontrado
	
	// Armazenar os valores dentro da array
	for(i = 0; elemento[i-1] != 0; i++)
	{
		cin >> elemento[i];
	}
	
	i2 = i; // Armazenar a contagem acima
	// Elemento a ser procurado
	cin >> x;
	// Checar se o elemento a ser procurado encontra-se na array
	for (i = 0; i <= i2; i++)
	{
		if (x == elemento[i]) // Caso o elemento seja encontrado
		{
			posicao = i;
			cout << "Elemento " << x << " encontrado na posicao " << posicao << endl;
		}
	}
	
	if (posicao == -1) // Caso o elemento nao seja encontrado
		cout << "Elemento " << x << " nao foi encontrado" << endl;
	
	return 0;
}