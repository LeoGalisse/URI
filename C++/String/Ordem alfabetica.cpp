#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	// tres linhas com tres palavras que serao armazenadas em char
	char nome[20];
	char nome2[20];
	char nome3[20];
	
	// armazenar as palavras nas variaveis
	cin.getline(nome, 20);
	cin.getline(nome2, 20);
	cin.getline(nome3, 20);
	
	//colocar as palavras em ordem alfabetica 
	if (strcmp(nome, nome2) < 0 && strcmp(nome, nome3) < 0 )
	{
		if(strcmp(nome2, nome3) < 0)
			cout << nome << " " << nome2 << " " << nome3 << endl;
		else
			cout << nome << " " << nome3 << " " << nome2 << endl;
	}
	else if (strcmp(nome2, nome) < 0 && strcmp(nome2, nome3) < 0 )
	{
		if(strcmp(nome, nome3) < 0)
			cout << nome2 << " " << nome << " " << nome3 << endl;
		else
			cout << nome2 << " " << nome3 << " " << nome << endl;
	}
	else if(strcmp(nome3, nome2) < 0 && strcmp(nome3, nome) < 0 )
	{
		if(strcmp(nome2, nome) < 0)
			cout << nome3 << " " << nome2 << " " << nome << endl;
		else
			cout << nome3 << " " << nome << " " << nome2 << endl;
	}
	
	return 0;
}