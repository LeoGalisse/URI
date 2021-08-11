#include <iostream>
#include <cstring>

using namespace std;

struct dados
{
	char nome[100]; // nome dos cavaleiros Jedi
	int base; // base em que o cavaleiro Jedi se encontra
};

int main()
{
	dados jedi[1000]; // dados dos jedi
	int n; // numero de cavaleiros Jedi
	int i, i2; // contadora
	char conferir[100]; // armazenar nome a ser conferido
	
	cin >> n;
	cin.ignore();
	
	// armazenar nome e numero da base dos cavaleiros
	for (i = 0; i < n; i++)
	{
		cin.getline(jedi[i].nome, 100);
		cin >> jedi[i].base;
		cin.ignore();
	}
	
	cin.getline(conferir, 100);
	
	i2 = 0; // inicializar variavel
	
	// checar se o nome a ser conferido existe em dados e mostrar a base em que se encontra
	for (i = 0; i < n; i++)
	{
		if (strcmp(jedi[i].nome, conferir) == 0)
		{
			cout << "Este cavaleiro esta na base " << jedi[i].base << endl;
			i = n; // sair do loop
			i2++;
		}
	}
	
	// caso o nome dado nao esteja cadastrado em dados
	if (i2 == 0)
		cout << "Este cavaleiro nao esta cadastrado" << endl;
}