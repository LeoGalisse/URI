#include <iostream>

using namespace std;

int main()
{
	int n; // numero de atletas a serem cadstrados
	char nome[50]; // nome do jogador
	int idade; // idade dos jogadores
	int i; //variavel contadora
	
	cin >> n;
	
	for(i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(nome, 50);
		cin >> idade;
		
		if (idade >= 18)
			cout << nome << " " << idade << endl;
	}
	
	return 0;
}